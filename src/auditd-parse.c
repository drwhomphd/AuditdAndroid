/*
 * auditd-parse.c - Lookup values to something more readable
 * Copyright (c) 2007-09,2011-12 Red Hat Inc., Durham, North Carolina.
 * Copyright (c) 2012 Nathaniel Husted
 * All Rights Reserved. 
 *
 * This software may be freely redistributed and/or modified under the
 * terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2, or (at your option) any
 * later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING. If not, write to the
 * Free Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 * Authors:
 *   Steve Grubb <sgrubb@redhat.com>
 *   Nathaniel Husted <nhusted@gmail.com>
 */

#include "config.h"
#include "libaudit.h"

#include "auditd-parse.h"


#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <ctype.h>
#include <errno.h>
#include <string.h>
#include <pwd.h>
#include <grp.h>
#include <sys/stat.h>
#include <linux/net.h>
#include <netdb.h>
#include <sys/un.h>
#include <linux/atm.h>
#include <linux/if.h>   // FIXME: remove when ipx.h is fixed
#include <linux/ipx.h>
#include <linux/capability.h>
#include <sys/personality.h>
#include <netinet/in.h>

#include "gen_tables.h"
#include "msg_typetabs.h"

/* This is from asm/ipc.h. Copying it for now as some platforms
 * have broken headers. */
#define SEMOP            1
#define SEMGET           2
#define SEMCTL           3
#define SEMTIMEDOP	 4
#define MSGSND          11
#define MSGRCV          12
#define MSGGET          13
#define MSGCTL          14
#define SHMAT           21
#define SHMDT           22
#define SHMGET          23
#define SHMCTL          24


/*
 * This function will take a pointer to a 2 byte Ascii character buffer and
 * return the actual hex value.
 */
static unsigned char x2c(const unsigned char *buf)
{
  static const char AsciiArray[17] = "0123456789ABCDEF";
  char *ptr;
  unsigned char total=0;

  ptr = strchr(AsciiArray, (char)toupper(buf[0]));
  if (ptr)
    total = (unsigned char)(((ptr-AsciiArray) & 0x0F)<<4);
  ptr = strchr(AsciiArray, (char)toupper(buf[1]));
  if (ptr)
    total += (unsigned char)((ptr-AsciiArray) & 0x0F);

  return total;
}

static int is_hex_string(const char *str)
{
  while (*str) {
    if (!isxdigit(*str))
      return 0;
    str++;
  }
  return 1;
}

/* returns a freshly malloc'ed and converted buffer of an expected size */
char *parse_unescape(char *buf, int length)
{
  int i;
  char *ptr, *copy;

  // Make sure key is not null from kernel
  if (*buf == '(')
    return NULL;

  // String needs to be long enough for ???
  if (length < 2)
    return NULL;

  // Allocate copy
  copy = (char *) malloc(length+1); // +1 for /0
  copy[length+1] = NULL;

  // Copy over buffer
  memcpy(copy, buf, length);

  /* We can get away with this since the buffer is 2 times
   * bigger than what we are putting there.
   */
  ptr = copy;
  for (i=0; i<length; i+=2) {
    *ptr = x2c((unsigned char *)&copy[i]);
    ptr++;
  }
  *ptr = 0;
  return copy;
}

static const char *print_sockaddr(char *msg, int length)
{
  int slen;
  const struct sockaddr *saddr;
  char name[NI_MAXHOST], serv[NI_MAXSERV];
  const char *host;
  const char *str; // used for Family name.
  
  const char *type = audit_msg_type_to_name(AUDIT_SOCKADDR);

  char *out = NULL;


  // Need to parse out the HEX portion of the SOCKADDR
  char *delim = strchr(msg, '=');
  char *val = delim + 1; // Skip the = sign
  
  // Value length = Position of the message end - start pos of the value
  int vallength = (msg + length) - (delim + 1);

  slen = vallength/2;
 
  host = parse_unescape(val, vallength);
 
  if (host == NULL) {
    asprintf(&out, "TYPE=%s malformed host(%s)", type, val);
    return out;
  }
  
  saddr = (struct sockaddr *)host;

  // Now print address for some families
  switch (saddr->sa_family) {
    case AF_LOCAL:
      {
        str = "AF_LOCAL";
        const struct sockaddr_un *un =
          (struct sockaddr_un *)saddr;
        if (un->sun_path[0])
          asprintf(&out, "TYPE=%s %s %s", type, str,
              un->sun_path);
        else // abstract name
          asprintf(&out, "TYPE=%s %s %.108s", type, str,
              &un->sun_path[1]);
      }
      break;
    case AF_INET:
      str = "AF_INET";
      if (slen < sizeof(struct sockaddr_in)) {
        asprintf(&out, "TYPE=%s %s sockaddr len too short",
            type, str);
        free((char *)host);
        return out;
      }
      slen = sizeof(struct sockaddr_in);
      if (getnameinfo(saddr, slen, name, NI_MAXHOST, serv,
            NI_MAXSERV, NI_NUMERICHOST |
            NI_NUMERICSERV) == 0 ) {
        asprintf(&out, "TYPE=%s %s host:%s serv:%s", type, str,
            name, serv);
      } else
        asprintf(&out, "TYPE=%s %s (error resolving addr)",
            type, str);
      break;
    case AF_IPX:
      {
        str = "AF_IPX";
        const struct sockaddr_ipx *ip =
          (struct sockaddr_ipx *)saddr;
        asprintf(&out, "TYPE=%s %s port:%d net:%u", type, str,
            ip->sipx_port, ip->sipx_network);
      }
      break;
    case AF_ATMPVC:
      {
        str = "AF_ATMPVC";
        const struct sockaddr_atmpvc* at =
          (struct sockaddr_atmpvc *)saddr;
        asprintf(&out, "TYPE=%s %s int:%d", type, str, 
            at->sap_addr.itf);
      }
      break;
    case AF_INET6:
      str = "AF_INET6";
      if (slen < sizeof(struct sockaddr_in6)) {
        asprintf(&out, "TYPE=%s %s sockaddr6 len too short", 
            type, str);
        free((char *)host);
        return out;
      }
      slen = sizeof(struct sockaddr_in6);
      if (getnameinfo(saddr, slen, name, NI_MAXHOST, serv,
            NI_MAXSERV, NI_NUMERICHOST |
            NI_NUMERICSERV) == 0 ) {
        asprintf(&out, "TYPE=%s %s host:%s serv:%s", type, str,
            name, serv);
      } else
        asprintf(&out, "TYPE=%s %s (error resolving addr)",
            type, str);
      break;
    case AF_NETLINK:
      {
        str = "AF_NETLINK";
        const struct sockaddr_nl *n =
          (struct sockaddr_nl *)saddr;
        asprintf(&out, "TYPE=%s %s pid:%u", type, str, n->nl_pid);
      }
      break;
    default:
      {

        asprintf(&out, "TYPE=%s unknown family(%d)", type, saddr->sa_family);
        break;
      }
  }
  free((char *)host);
  return out;
}

/**
 *
 * @param[in] msg           Message buffer of an audit reply
 * @param[in] reply_type    Type of audit reply
 * @return A string with the pretty printed message.
 *
 * Takes in the message portion of an audit reply and its type. Based
 * on the type, it calls the proper print_ function and obtains a
 * "pretty printed" set of information in a character pointer.
 * It returns that character pointer. This character pointer MUST BE
 * FREED by the developer. It was created with asprintf in the print_
 * functions.
 */
const char *interpret_reply(char *msg, int length, int reply_type) {

  // Parse based on the reply type
  switch(reply_type) {
    case AUDIT_SOCKADDR:
      {
        return print_sockaddr(msg, length);
      }
    default:
      {
        // No parsing is needed we return the same message that came in,
        // adding the type to the front of it.
        char *samemsg;
        asprintf(&samemsg, "type=%s %.*s\n", 
          audit_msg_type_to_name(reply_type),
          length,
          msg);
        return samemsg;
      }
  }
}
