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
        KEEP (*(.reset))
        KEEP (*(.text*))
    } > FLASH

    __StackTop__ = ORIGIN(RAM_BANK5) + LENGTH(RAM_BANK5);
}
