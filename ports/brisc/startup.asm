        .text
        .globl _start
        .p2align 1
        .type _start,@function
_start:
        ; Initialize the stack
        newmwi r0, 4
        ldawfi r0, r0, 4
        setwp r0

		; Set the compatibility flag for the current mode (PANIC)
		getsr r1
		ldc r2, 1
		insertbi r1, r2, 134
		setsr r1

        ; Call the main function
        blr main

        ; Terminate the simulation
        halt r0
.Lfunc_end0:
        .size _start, .Lfunc_end0-_start
