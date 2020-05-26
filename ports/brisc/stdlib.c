#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdint.h>

__attribute__((naked)) void *malloc(size_t size)
{
	__asm volatile(
		"newm8 r0, r0	\n"
		"ret			\n"
	);
}

__attribute__((naked)) void abort(void)
{
	__asm volatile(
		"ecallui	99 			\n"
	);
}

__attribute__((naked)) size_t getObjectSize(const void *data)
{
	__asm volatile(
		"	brf			r0, .lv_mem_get_size_exit\n"
		"	ldsz		r0, r0\n"
		"	ret\n"
		".lv_mem_get_size_exit:\n"
		"	ldc			r0, 0\n"
		"	ret\n"
	);
}

void *realloc(void *old_ptr, size_t new_size)
{
    void *new_ptr = NULL;

    if (new_size == 0)
    {
        return malloc(0);
    }

	size_t old_size = getObjectSize(old_ptr);
	if (old_size == new_size)
	{
		return old_ptr;
	}

    new_ptr = malloc(new_size);
    if (old_size > 0) {
        memcpy(new_ptr, old_ptr, (old_size < new_size) ? old_size : new_size);
    }

    return new_ptr;
}

__attribute__((naked)) bool isPointer(size_t x)
{
    __asm volatile (
    "isptr      r0, r0      \n"
    "ret                    \n"
    );
}

__attribute__((naked)) size_t getPointerOffset(const void *p)
{
    __asm volatile (
    "ldao       r0, r0      \n"
    "ret                    \n"
    );
}

__attribute__((naked)) size_t getPointerByteIndex(const void *p)
{
	__asm volatile (
	"ldao		r0, r0		\n"
	"ldc		r1, 3		\n"
	"and		r0, r0, r1	\n"
	"ret					\n"
	);
}

__attribute__((naked)) void *clearPointerByteIndex(void *x)
{
    __asm volatile (
    "ldao       r1, r0      \n"
    "ldc        r2, 3       \n"
    "and        r1, r1, r2  \n"
    "subb       r0, r0, r1  \n"
    "ret                    \n"
    );
}

__attribute__((naked)) void *orPointerOffset(void *ptr, uintptr_t tag)
{
    __asm volatile (
    "ldao       r2, r0      \n"
    "or         r1, r1, r2  \n"
    "ldab       r0, r0      \n"
    "addb       r0, r0, r1  \n"
    "ret                    \n"
    );
}
