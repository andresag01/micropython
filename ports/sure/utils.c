#include <string.h>

#include "utils.h"

int errno;

void *_sbrk_r(size_t sizeBytes)
{
    static char *heap = (char *)&_eheap;
    char *prev_heap = heap;
    char *new_heap = heap + sizeBytes;

    if (new_heap >= (char *)&_end_heap)
    {
        /* Die... */
        out_of_memory();
    }

    heap = new_heap;

    return prev_heap;
}

void *memcpy(void * restrict dst0, const void * restrict src0, size_t len0)
{
  char *dst = (char *) dst0;
  char *src = (char *) src0;

  void *save = dst0;

  while (len0--)
    {
      *dst++ = *src++;
    }

  return save;
}

char *strchr(const char *s1, int i)
{
  const unsigned char *s = (const unsigned char *)s1;
  unsigned char c = i;

  while (*s && *s != c)
    s++;
  if (*s == c)
    return (char *)s;
  return NULL;
}

int memcmp(const void * m1, const void *m2, size_t n)
{
  unsigned char *s1 = (unsigned char *) m1;
  unsigned char *s2 = (unsigned char *) m2;

  while (n--)
    {
      if (*s1 != *s2)
	{
	  return *s1 - *s2;
	}
      s1++;
      s2++;
    }
  return 0;
}

void *memmove(void *dst_void, const void *src_void, size_t length)
{
  char *dst = dst_void;
  const char *src = src_void;

  if (src < dst && dst < src + length)
    {
      /* Have to copy backwards */
      src += length;
      dst += length;
      while (length--)
	{
	  *--dst = *--src;
	}
    }
  else
    {
      while (length--)
	{
	  *dst++ = *src++;
	}
    }

  return dst_void;
}

size_t strlen(const char *str)
{
  const char *start = str;

  while (*str)
    str++;
  return str - start;
}

void *memset(void *m, int c, size_t n)
{
  char *s = (char *) m;

  while (n--)
    *s++ = (char) c;

  return m;
}

int strcmp(const char *s1, const char *s2)
{
  while (*s1 != '\0' && *s1 == *s2)
    {
      s1++;
      s2++;
    }

  return (*(unsigned char *) s1) - (*(unsigned char *) s2);
}

/*
#include "utils.h"

void *memmove(void *dest, const void *src, size_t num)
{
    char *cdest = (char *)dest;
    const char *csrc = (const char *)src;

    while (num-- > 0)
    {
        *cdest++ = *csrc++;
    }

    return dest;
}

void *memcpy(void *dest, const void *src, size_t num)
{
    char *cdest = (char *)dest;
    const char *csrc = (const char *)src;

    while (num-- > 0)
    {
        *cdest++ = *csrc++;
    }

    return dest;
}

void *memset(void *ptr, int value, size_t num)
{
    unsigned char *ucptr = (unsigned char *)ptr;
    const unsigned char ucvalue = (unsigned char)value;

    while (num-- > 0)
    {
        *ucptr++ = ucvalue;
    }

    return ptr;
}

size_t strlen(const char *str)
{
    size_t len = 0;

    while (*str != '\0')
    {
        len++;
        str++;
    }

    return len;
}
*/
