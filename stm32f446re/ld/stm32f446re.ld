
ENTRY(Reset_Handler)

MEMORY
{
    flash (rx) : org = 0x08000000, len = 512k
    ram (wx) : org = 0x20000000, len = 112k /* SRAM1 */
}

_estack = ORIGIN(ram) + LENGTH(ram);

SECTIONS
{
    .isr_vector :
    {
        . = ALIGN(4);
        KEEP(*(.isr_vector))
        . = ALIGN(4);
    } >flash

    .text :
    {
        . = ALIGN(4);
        *(.text)
        *(.text*)
    } >flash

    .data :
    {
        . = ALIGN(4);
        _sdata = .;
        *(.data)
        *(.data*)
        . = ALIGN(4);
        _edata = .;
    } >ram AT> flash

    _sidata = LOADADDR(.data);

    .bss :
    {
        _sbss = .;
        __bss_start__ = _sbss;
        *(.bss)
        *(.bss*)
        *(COMMON)
        _ebss = .;
        __bss_end__ = _ebss;
    } > ram
}
