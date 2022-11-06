/* Based on GCC ARM embedded samples.
   Defines the following symbols for use by code:
    __exidx_start
    __exidx_end
    __etext
    __data_start__
    __preinit_array_start
    __preinit_array_end
    __init_array_start
    __init_array_end
    __fini_array_start
    __fini_array_end
    __data_end__
    __bss_start__
    __bss_end__
    __end__
    end
    __HeapLimit
    __StackLimit
    __StackTop
    __stack (== StackTop)
*/

MEMORY
{
    FLASH(rx) : ORIGIN = 0x10000000, LENGTH = 2048k
    RAM(rwx) : ORIGIN = 0x20000000, LENGTH = 256k
    RAM_BANK4(rwx) : ORIGIN = 0x200040000, LENGTH = 4k
    RAM_BANK5(rwx) : ORIGIN = 0x200041000, LENGTH = 4k
}
ENTRY(reset)
SECTIONS
{
    .boot2 : /* .section .boot2, "ax" in padded_checksum with b2.default.S*/
    {
        __boot2_start__ = .;
        KEEP(*(.boot2))
        __boot2_end__ = .;
    } > FLASH

    ASSERT(__boot2_end__ - __boot2_start__ == 256, "ERROR: must be 256 bytes")

    .text :
    {
        KEEP (*(.vectors))
        KEEP (*(.text*))
        . = ALIGN(4);
    } > FLASH

    .data : 
    {
        __data_start__ = .;
        *(.data*)
        . = ALIGN(4);
        __data_end__ = .;
    } > RAM AT>FLASH
    
    __StackLimit = ORIGIN(RAM) + LENGTH(RAM);
    __StackOneTop = ORIGIN(RAM_BANK4) + LENGTH(RAM_BANK4);
    __StackTop = ORIGIN(RAM_BANK5) + LENGTH(RAM_BANK5);
    PROVIDE(__stack = __StackTop);
}
