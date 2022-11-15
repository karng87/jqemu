MEMORY
{

    BOOT_ROM(rx) : ORIGIN = 0x00000000, LENGTH = 16k

    XIP_FLASH(rx) : ORIGIN = 0x10000000, LENGTH = 2048k /* 2M */

    SRAM(rwx) : ORIGIN=0x20000000, LENGTH = 256k /* 64k x 4 = 256k  */
        SRAM0(rwx) : ORIGIN = 0x20000000, LENGTH = 64k  /* 0x10000*/
        SRAM1(rwx) : ORIGIN = 0x20010000, LENGTH = 64k  /* 0x10000*/
        SRAM2(rwx) : ORIGIN = 0x20020000, LENGTH = 64k  /* 0x10000*/
        SRAM3(rwx) : ORIGIN = 0x20030000, LENGTH = 64k  /* 0x10000*/
    SRAM4(rwx) : ORIGIN = 0x20040000, LENGTH = 4k  /* 0x1000*/
    SRAM5(rwx) : ORIGIN = 0x20041000, LENGTH = 0xf00 /*  0x1000*/
    SRAM5_END(rx) : ORIGIN = 0x20041f00, LENGTH = 252 /* 252 + 4-byte checksum == 256 */
}
SECTIONS
{
    .text
    {
        *(.data*)
    } > SRAM
}
