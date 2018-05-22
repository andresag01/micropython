/* memmap */
MEMORY
{
    ram(WAIL) : ORIGIN = 0x00000000, LENGTH = 2M
}

ENTRY(_start)

_ram_start = ORIGIN(ram);
_ram_end = ORIGIN(ram) + LENGTH(ram);

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
}
