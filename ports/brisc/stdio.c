#include <stdio.h>
#include <stdint.h>

__attribute__((naked)) int putchar(int c)
{
    __asm volatile(
        "putchr  r0				\n"
        "ret					\n"
    );
}

void printString(const char *s)
{
	while (*s != '\0')
	{
		putchar(*s++);
	}
}

void printHex(uint32_t v)
{
#define GET_BYTE(v, o)						\
	do {									\
		uint8_t lo = (v >> (o + 0)) & 0xf;  \
		uint8_t hi = (v >> (o + 4)) & 0xf;  \
											\
		if (hi < 10)						\
			putchar(hi + '0');				\
		else								\
			putchar(hi + 'a' - 10);			\
											\
		if (lo < 10)						\
			putchar(lo + '0');				\
		else								\
			putchar(lo + 'a' - 10);			\
	} while (0)

	GET_BYTE(v, 24);
	GET_BYTE(v, 16);
	GET_BYTE(v, 8);
	GET_BYTE(v, 0);
}
