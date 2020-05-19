#include <stdio.h>
#include <stdlib.h>

#include "py/mpconfig.h"

/*
 * Core UART functions to implement for a port
 */

// Receive single character
NORETURN int mp_hal_stdin_rx_chr(void) {
	printf("Cannot read from stdin\n");
	abort();
}

// Send string of given length
void mp_hal_stdout_tx_strn(const char *str, mp_uint_t len) {
	mp_uint_t i;
	for (i = 0; i < len; i++) {
		putchar(str[i]);
	}
}
