/* memmap */
MEMORY
{
    ram(WAIL) : ORIGIN = 0x00000000, LENGTH = 219K
}

ENTRY(_start)

/* Set the minimum heap size */
_min_heap_size = 50K;
/* Set the minimum stack size */
_min_stack_size = 10K;

_ram_start = ORIGIN(ram);
_ram_end = ORIGIN(ram) + LENGTH(ram);

_stack_end = ORIGIN(ram) + LENGTH(ram);

SECTIONS
{
    /* Program code */
    .text :
    {
        . = ALIGN(4);
        _text_start = .;

        *(.text*)

        . = ALIGN(4);
        _text_end = .;
    } > ram

    /* Initialised data */
    .data :
    {
        . = ALIGN(4);
        _data_start = .;

        *(.data*)

        . = ALIGN(4);
        _data_end = .;
    } > ram

    /* Uninitialised data */
    .bss :
    {
        . = ALIGN(4);
        _bss_start = .;

        *(.bss*)

        . = ALIGN(4);
        _bss_end = .;
    } > ram

    /* Read only data */
    .rodata : {
        . = ALIGN(4);

        *(.rodata*)

        . = ALIGN(4);
    } > ram

    /*
     * The heap and stack sections are just checks to ensure there is enough
     * space
     */
    /* Heap */
    .heap :
    {
        . = ALIGN(4);
        _heap_start = .;

        . = . + _min_heap_size;

        . = ALIGN(4);
        _heap_end = .;
    } > ram

    /* Stack */
    .stack :
    {
        . = ALIGN(4);
        _stack_start = .;

        . = . + _min_stack_size;

        . = ALIGN(4);
    } > ram
}
