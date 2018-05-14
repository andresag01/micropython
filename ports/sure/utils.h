#ifndef _MICROPY_PORT_SURE_UTILS_H_
#define _MICROPY_PORT_SURE_UTILS_H_

#include <stddef.h>
#include <stdint.h>

void fail(int error);
void out_of_memory(void);
void *_sbrk_r(size_t sizeBytes);
void sure_putchar(char character);
void sprint(char *str, size_t len);

extern int errno;

/* Variables defining memory layout */
extern uint32_t _ram_start;
extern uint32_t _ram_end;
extern uint32_t _heap_start;
extern uint32_t _heap_end;
extern uint32_t _stack_start;
extern uint32_t _stack_end;
extern uint32_t _bss_start;
extern uint32_t _bss_end;
extern uint32_t _data_start;
extern uint32_t _data_end;
extern uint32_t _text_start;
extern uint32_t _text_end;

#define	ENOMEM 12	/* Not enough space */

#endif /* _MICROPY_PORT_SURE_UTILS_H_ */
