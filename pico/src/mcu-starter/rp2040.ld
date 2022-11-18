MEMORY
{
    ROM        (rx)  : ORIGIN = 0x00000000, LENGTH = 16k
    FLASH_BOOT (rx)  : ORIGIN = 0x10000000, LENGTH = 256
    FLASH_C      (rx)  : ORIGIN = 0x10000100, LENGTH = 2048 - 256
    SRAM        (rxw) : ORIGIN = 0x20000000, LENGTH = 264k
}

ENTRY(boot_entry)

SECTIONS
{
    .boot : ALIGN(4)
    {
        KEEP(*(boot.entry))
        *(.boot*)
        . = 256 -4
        LONG(0xcccccccc) /* CRC */
    }

    .text : ALIGN(4)
    {
        _text = .;
        KEEP(*(.vectors))
        *(.text*)
        *(.rodat)
        *(.rodat.*)
        . = ALIGN(4);
        _etext = .;
    } > SRAM AT > FLASH_C

    .data : ALIGN(4) /* has a initialized symbol */
    {
        _data = .;
        *(.ramfunc .ramfunc.*);
        *(vtable)
        *(.data*)
        . = ALIGN(4);
        _edata = .;
    } > SRAM AT > FLASH_C

    .bss : ALIGN(4) /* not initialized symbol */
    {
        _bss = .;
        *(.bss*)
        *(COMMON)
        . = ALIGN(4)
        _ebss = .;
    } > SRAM

    PROVIDE(_end = .);
    PROVIDE(_text_start = ORIGIN(FLASH_C));
    PROVIDE(_stack_top = ORIGIN(SRAM) + LENGTH(SRAM));
}



