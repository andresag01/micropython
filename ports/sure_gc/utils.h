#ifndef _MICROPY_PORT_SURE_UTILS_H_
#define _MICROPY_PORT_SURE_UTILS_H_

#include <stddef.h>
#include <stdint.h>

void fail(int error);
void out_of_memory(void);
void sure_putchar(char character);
void sprint(char *str, size_t len);

/* Variables defining memory layout */
extern uint32_t _ram_start;
extern uint32_t _ram_end;
extern uint32_t _bss_start;
extern uint32_t _bss_end;
extern uint32_t _data_start;
extern uint32_t _data_end;
extern uint32_t _text_start;
extern uint32_t _text_end;

#endif /* _MICROPY_PORT_SURE_UTILS_H_ */
