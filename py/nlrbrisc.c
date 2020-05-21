#include "py/mpstate.h"

#if MICROPY_NLR_BRISC

#undef nlr_push

__attribute__((naked)) unsigned int nlr_push(nlr_buf_t *nlr) {
	__asm volatile (
	// Store general-purpose callee saved registers
	"stwfi		r4, r0, 12			\n"
	"stwfi		r5, r0, 16			\n"
	"stwfi		r6, r0, 20			\n"
	"stwfi		r7, r0, 24			\n"
	"stwfi		r8, r0, 28			\n"
	"stwfi		r9, r0, 32			\n"

	// Store ep
	"ldawep		r1, 0				\n"
	"stwfi		r1, r0, 36			\n"

	// Store wp
	"ldawwp		r1, 0				\n"
	"stwfi		r1, r0, 40			\n"

	// Store return address
	"ldab		r1, r1				\n"
	"ldwfi		r1, r1, 0			\n"
	"stwfi		r1, r0, 8			\n"

	// Jump to nlr_push_tail()
	"bru		nlr_push_tail		\n"
	);
}

NORETURN __attribute__((naked)) void nlr_jump_helper(nlr_buf_t *nlr) {
	__asm volatile (
	// Restore general-purpose callee saved registers
	"ldwfi		r4, r0, 12			\n"
	"ldwfi		r5, r0, 16			\n"
	"ldwfi		r6, r0, 20			\n"
	"ldwfi		r7, r0, 24			\n"
	"ldwfi		r8, r0, 28			\n"
	"ldwfi		r9, r0, 32			\n"

	// Restore ep
	"ldwfi		r1, r0, 36			\n"
	"setep		r1					\n"

	// Restore wp
	"ldwfi		r1, r0, 40			\n"
	"setwp		r1					\n"

	// Restore return address
	"ldwfi		r1, r0, 8			\n"

	// return 1, non-local return
	"ldc		r0, 1				\n"
	"bau		r1					\n"
	);
}

NORETURN void nlr_jump(void *val) {
	MP_NLR_JUMP_HEAD(val, top)
	nlr_jump_helper(top);
}

#endif /* MICROPY_NLR_BRISC */
