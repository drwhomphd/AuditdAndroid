#include <stpcpy.h>

char *stpcpy(register char * __restrict s1, const char * __restrict s2)
{
  do {
    *s1++ = *s2++;
  } while (*s2 != '\0');

  return s1;
}
