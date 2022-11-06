MEMORY {
    /* We are loaded to the top 256 bytes of SRAM, which is above the bootrom
       stack. Note 4 bytes occupied by checksum. 

       VMA BASE : 0x_2000_0000 + 264K(0x_4_2000) = 0x2004_2000 
       Total SRAM : 264K (0x_4_2000)

            - 256K(0x4_0000)/4 : 4 BANK0 ~ BANK3
                0x2000_0000 ~ 0x2004_0000 

            - 4K(0x_1000) x 2  : BANK4 ~ BANK5
                0x_2004_0000 ~ 0x2004_1000 : BANK4
                0x_2004_1000 ~ 0x2004_2000 : BANK5

            - 0xf00 + 256(0x100) = 0x1000 :: BANK5_END
     */
    SRAM(rx) : ORIGIN = 0x20041f00, LENGTH = 252
}

SECTIONS {
    . = ORIGIN(SRAM);
    .text : {
        *(.entry)
        *(.text)
    } >SRAM
}
