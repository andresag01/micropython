/* memmap */
MEMORY
{
    ram(WAIL) : ORIGIN = 0x00000000, LENGTH = 0x40000000
}

ENTRY(_start)

SECTIONS
{
    .text   : { *(.text*) }   > ram
    .data   : { *(.data*) }   > ram
    .bss    : { *(.bss*) }    > ram
    .rodata : { *(.rodata*) } > ram
    _eheap = .;
    /* Set the minimum heap size to 50 MB */
    _min_heap_size = 0x3200000;
    _end_heap = _eheap + _min_heap_size;

    _estack = ORIGIN(ram) + LENGTH(ram);
    /* Set the minimum stack size to 50 MB */
    _min_stack_size = 0x3200000;
    _end_stack = _estack - _min_stack_size;

    ASSERT(_end_stack >= _end_heap, "RAM overflowed")
}
