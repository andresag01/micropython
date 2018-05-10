#include <stddef.h>

void fail(int error);
void out_of_memory(void);
void *_sbrk_r(size_t sizeBytes);

extern int errno;
extern int _eheap;
extern int _end_heap;

#define	ENOMEM 12	/* Not enough space */
