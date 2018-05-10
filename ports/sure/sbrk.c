#include <errno.h>
#include "utils.h"

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
