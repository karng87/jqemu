MEMORY
{
    /* FACTORY BUILT_IN_ROM total 16k */
    BUILT_IN_ROM(rx) : ORIGIN = 0x00000000, LENGTH = 16k /*0x4_000 == 16k */
    /* FLASH total 2M */
    XIP_FLASH(rx) : ORIGIN = 0x10000000, LENGTH = 2048k /* 0x20_0000 == 2M */
    /* SRAM total 264k{ 256k(64k x 8) + 8k(4k x 2) }*/
    SRAM(rwx)   : ORIGIN = 0x20000000, LENGTH = 0x4000  /* 0x_4000 == 256k + (2 x 4K) == 264K */
    SRAM_X(rwx) : ORIGIN = 0x20040000, LENGTH = 0x1000
    SRAM_Y(rwx) : ORIGIN = 0x20041000, LENGTH = 0x1000 /* 0x1000 = 4k */
}

SECTIONS
{
    .text : { *(.text*) } > SRAM
}
