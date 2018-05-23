#include <string.h>

#include "utils.h"

int errno;

void *_sbrk_r(size_t sizeBytes)
{
    static char *heap = (char *)&_heap_start;
    char *prev_heap = heap;
    char *new_heap = heap + sizeBytes;

    if (new_heap >= (char *)&_heap_end)
    {
        /* Die... */
        out_of_memory();
    }

    heap = new_heap;

    return prev_heap;
}

static void unaligned_memcpy(void * restrict dst0,
                             const void * restrict src0,
                             size_t len0)
{
    char *dst = (char *) dst0;
    char *src = (char *) src0;

    while (len0--)
    {
        *dst++ = *src++;
    }
}

static void aligned_memcpy(void * restrict dst0,
                           const void * restrict src0,
                           size_t len0)
{
    /* Move the first unaligned portion in byte chunks */
    size_t byteOffset = ((intptr_t)dst0) & 3;
    char *dst = (char *)dst0;
    char *src = (char *)src0;

    while (byteOffset--)
    {
        *dst++ = *src++;
        len0--;
    }

    /* Move the aligned blocks in word chunks */
    uint32_t *dstWord = (uint32_t *)dst;
    uint32_t *srcWord = (uint32_t *)src;

    while (len0 >= sizeof(uint32_t))
    {
        *dstWord++ = *srcWord++;
        len0 -= sizeof(uint32_t);
    }

    /* Move the last unaligned portion in byte chunks */
    dst = (char *)dstWord;
    src = (char *)srcWord;

    while (len0--)
    {
        *dst++ = *src++;
    }
}

void *memcpy(void * restrict dst0, const void * restrict src0, size_t len0)
{
    void *save = dst0;

    size_t dstByteOffset = ((uintptr_t)dst0) & 3;
    size_t srcByteOffset = ((uintptr_t)src0) & 3;

    if (dstByteOffset == srcByteOffset)
    {
        /* Source and destination alignment is the same */
        aligned_memcpy(dst0, src0, len0);
    }
    else
    {
        /*
         * Source and destination alignment is NOT the same. Pointer flags will
         * be cleared in destination
         */
        unaligned_memcpy(dst0, src0, len0);
    }

    return save;
}

static void unaligned_back_memcpy(void *dst_void,
                                  const void *src_void,
                                  size_t length)
{
    char *dst = (char *)dst_void;
    const char *src = (const char *)src_void;

    src += length;
    dst += length;

    while (length--)
    {
        *--dst = *--src;
    }
}

static void aligned_back_memcpy(void *dst_void,
                                const void *src_void,
                                size_t length)
{
    char *dst = (char *)dst_void;
    const char *src = (const char *)src_void;

    dst += length;
    src += length;

    /* Move the back unaligned portion in byte chunks */
    size_t byteOffset = ((uintptr_t)dst) & 3;

    while (byteOffset--)
    {
        *--dst = *--src;
        length--;
    }

    /* Move the aligned blocks in word chunks */
    uint32_t *dstWord = (uint32_t *)dst;
    const uint32_t *srcWord = (const uint32_t *)src;

    while (length >= sizeof(uint32_t))
    {
        *--dstWord = *--srcWord;
        length -= sizeof(uint32_t);
    }

    /* Move the front unaligned portion in byte chunks */
    dst = (char *)dstWord;
    src = (const char *)srcWord;

    while (length--)
    {
        *--dst = *--src;
    }
}

void *memmove(void *dst_void, const void *src_void, size_t length)
{
    char *dst = dst_void;
    const char *src = src_void;

    size_t dstByteOffset = ((uintptr_t)dst_void) & 3;
    size_t srcByteOffset = ((uintptr_t)src_void) & 3;

    if (src < dst && dst < src + length)
    {
        /* Back to front */
        if (dstByteOffset == srcByteOffset)
        {
            /* Source and destination alignment is the same */
            aligned_back_memcpy(dst_void, src_void, length);
        }
        else
        {
            /*
             * Source and destination alignment is NOT the same. Pointer flags
             * will be cleared in destination
             */
            unaligned_back_memcpy(dst_void, src_void, length);
        }
    }
    else
    {
        /* Front to back */
        memcpy(dst_void, src_void, length);
    }

    return dst_void;
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
