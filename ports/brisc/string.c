#include <string.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>

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

int strncmp (const char *s1, const char *s2, size_t n)
{
	if (n == 0) return 0;

	while (n-- != 0 && *s1 == *s2)
    {
      if (n == 0 || *s1 == '\0') break;
      s1++;
      s2++;
    }

	return (*(unsigned char *) s1) - (*(unsigned char *) s2);
}

char *strchr(const char *s1, int i)
{
	const unsigned char *s = (const unsigned char *)s1;
	unsigned char c = i;

	while (*s && *s != c)
	{
		s++;
	}

	if (*s == c)
	{
		return (char *)s;
	}

	return NULL;
}

/*
 * This is not technically correct because comparing a data value that happens
 * to equal the numeric representation of a pointer will return 'equal' when
 * it clearly isn't. However, that situation will probably never happen in
 * practice.
 */
int memcmp(const void *m1, const void *m2, size_t n)
{
    unsigned char *s1 = (unsigned char *)m1;
    unsigned char *s2 = (unsigned char *)m2;

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

static void unaligned_memcpy(void *dst0, const void *src0, size_t len0)
{
    char *dst = (char *) dst0;
    char *src = (char *) src0;

    while (len0--)
    {
        *dst++ = *src++;
    }
}

static void aligned_memcpy(void *dst0, const void *src0, size_t len0)
{
    /* Move the first unaligned portion in byte chunks */
    size_t byteOffset = getPointerByteIndex(dst0);
    char *dst = (char *)dst0;
    char *src = (char *)src0;

    while (byteOffset && len0)
    {
        *dst++ = *src++;
        len0--;
        byteOffset++;
        byteOffset = byteOffset % 4;
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

void *memcpy(void *dst0, const void *src0, size_t len0)
{
    void *save = dst0;

    size_t dstByteOffset = getPointerByteIndex(dst0);
    size_t srcByteOffset = getPointerByteIndex(src0);

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
    size_t byteOffset = getPointerByteIndex(dst);

    while (byteOffset-- && length)
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

    size_t dstByteOffset = getPointerByteIndex(dst_void);
    size_t srcByteOffset = getPointerByteIndex(src_void);

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
