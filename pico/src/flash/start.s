.cpu cortex-m0plus
.thumb
    ldr r0,=0x18000008 // SSI_SSIENR [0:SSI_EN]
    ldr r1,=0x0
    str r1,[r0]
    
    ldr r0,=0x18000014 // SSI_BAUDR[15:0:SSI_clock divider]
    ldr r1,=0x0
    str r1,[r0]

    ldr r0,=0x18000000 // SSI_CTRL0
                         // [24: Slave select toggle enable]
                         // [22:21: spi frame format 0=spi,1=dual-SPI,2=Quad_SPI]
                            // 1 = dual-Spi frame format two bits per sck, half duplex
                         // [20:16: data frame size in 32b transfer mode n+1 clock per frame]
                            // 0b_11111 = 15+1 clock per frame
                         // [15:12: control frame size n+1 clockds per frame]
                         // [15:12: control frame size]
                         // [11: Shift register loop(test mode)]
                         // [10: SLV_OE Slave output enable]
                         // [9:8: TMOD Transfer mode]
                            // 0x3 → EEPROM read mode (TX then RX; RX starts after control data TX’d)
                         // [7: SCPOL Serial clock polarity]
                         // [6: SCPH Serial clock phase]
                         // [5:4 FRF Frame format]
                         // [3:0 DFS Data frame size]

    ldr r1,=0x001F0300 // 0b_0000_0000_0001_1111_0000_0011_0000_0000
    str r1,[r0]


    ldr r0,=0x180000F4 // SSI_SPI_CTRL0 register
    ldr r1,=0x03000218 // 0b_0000_0011_0000_0000_0000_0010_0001_1000
    str r1,[r0]

    ldr r0,=0x18000004 // SSI_CTRL1 register
    ldr r0,=0x00000000 // 15:0 NDF number of data frames
    str r1, [r0]

    ldr r0,=0x18000008 // SSI_ENR register
    ldr r1,=0x00000001 // 0: SSI_EN
    str r1,[r0]

    ldr r0,=0x10000000 // XIP_FLASH
    ldr r1,=0x20000000 // SRAM
    ldr r2,=0x400      // 1k

copy_loop:
    ldr r3,[r0]  // r3 <- XIP_FLASH 
    str r3,[r1]  // r3 -> SRAM
    add r0,#0x4
    add r1,#0x4  // 
    sub r2,#1    // 
    bne copy_loop

    ldr r0,=0x20000101
    bx r0
