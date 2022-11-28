MEMORY {
    /* We are loaded to the top 256 bytes of SRAM,
        which is above the bootrom stack. 
            Note 4 bytes occupied by checksum. 

       VMA BASE : 0x_2000_0000 + 264K(0x_4_2000) = 0x2004_2000 
       Total SRAM : 264K (0x_4_2000)

            - 256K(0x4_0000)/4 : 4 BANK0 ~ BANK3
                0x2000_0000 ~ 0x2004_0000 

            - 4K(0x_1000) x 2  : BANK4 ~ BANK5
                0x_2004_0000 ~ 0x2004_1000 : BANK4
                0x_2004_1000 ~ 0x2004_2000 : BANK5

            - 0xf00 + 256(0x100) = 0x1000 :: BANK5_END
     */
    BOOT_ROM(rx) : ORIGIN = 0x00000000, LENGTH = 16k
    XIP_FLASH(rx) : ORIGIN = 0x10000000, LENGTH = 2048k /* 2M */

    SRAM(rwx) : ORIGIN = 0x20000000, LENGTH = 256k  /* 0x10000*/
        SRAM0(rwx) : ORIGIN = 0x20000000, LENGTH = 64k  /* 0x10000*/
        SRAM1(rwx) : ORIGIN = 0x20010000, LENGTH = 64k  /* 0x10000*/
        SRAM2(rwx) : ORIGIN = 0x20020000, LENGTH = 64k  /* 0x10000*/
        SRAM3(rwx) : ORIGIN = 0x20030000, LENGTH = 64k  /* 0x10000*/
    SRAM_X(rwx) : ORIGIN = 0x20040000, LENGTH = 4k     /* 0x1000*/
    SRAM_Y(rwx) : ORIGIN = 0x20041000, LENGTH = 4k-256 /*  0x1000*/
    SRAM_Y_END(rx) : ORIGIN = 0x20041f00, LENGTH = 252 /* 252 + 4-byte checksum == 256 */
}

SECTIONS {
    . = ORIGIN(SRAM_Y_END);
    .text : {
        *(.entry)
        *(.text)
    } >SRAM_Y_END
}
