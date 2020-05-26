#ifndef __STDLIB_H__
#define __STDLIB_H__

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

void *malloc(size_t size);
void *realloc(void *ptr, size_t new_size);

#define free(x)
#define calloc(n, elem_size)  malloc(n * elem_size)

void abort(void) __attribute__((noreturn));

/* BeyondRISC-related stuff */
#define IS_POINTER(x)       isPointer((size_t)(x))

bool isPointer(size_t x);
size_t getPointerOffset(const void *x);
size_t getPointerByteIndex(const void *x);
void *clearPointerByteIndex(void *x);
void *orPointerOffset(void *ptr, uintptr_t tag);

#endif /* __STDLIB_H__ */
