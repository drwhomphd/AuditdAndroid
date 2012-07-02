#include "stpcpy.h"
#include <stdlib.h>
#include <stdio.h>
int main (void)
{
  char buffer[256];
  bzero(buffer,256);
  char *to = buffer;
  to = stpcpy (to, "foo");
  to = stpcpy (to, "bar");
  printf ("%s\n", buffer);
}
