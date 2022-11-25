.syntax unified
.cpu cortex-m0plus
.thumb

.section .text

// The exit point is passed in lr. If entered from bootrom, this will be the
// flash address immediately following this second stage (0x10000100).
// Otherwise it will be a return address -- second stage being called as a
// function by user code, after copying out of XIP region. r3 holds SSI base,
// r0...2 used as temporaries. Other GPRs not used.
.global _stage2_boot
.type _stage2_boot,%function
.thumb_func
_stage2_boot:
    push {lr}

    // Set pad configuration:
    // - SCLK 8mA drive, no slew limiting
    // - SDx disable input Schmitt to reduce delay

// APB START
        //#define APB_PADS_QSPI   hex(4002,0000,<APB|PADS_QSPI|BASE>)
    ldr r3, =0x40020000 //PADS_QSPI_BASE

                //#define f_apqs_drive fset(4, :5, 0->2mA, 1->4mA, 2->8mA, 3->12mA>,,Drive strength)
                //#define f_apqs_slew  fset(0, :0, 0->slow, 1->fast,Slew rate control)
    movs r0, #(2 << 4 | 1)

    // APB_PADS_QSPI_SCLK
            //#define APB_PADS_QSPI_SCLK hex(4002,0004, Serial CLOCK)
    str r0, [r3, #0x4]

    // APB_PADS_QSPI_SD0
            //#define APB_PADS_QSPI_SD0 hex(4002,0008, Serial Data 0)
    ldr r0, [r3, #0x8]
                //#define apqs_SCHMITT fset(1, :1, Enable schmitt trigger)
    movs r1, #(1<<1) //PADS_QSPI_GPIO_QSPI_SD0_SCHMITT_BITS
    bics r0, r1
            //#define APB_PADS_QSPI_SD0 hex(4002,0008, Serial Data 0)
    str r0, [r3, #0x08] //PADS_QSPI_GPIO_QSPI_SD0_OFFSET
            //#define APB_PADS_QSPI_SD1 hex(4002,000c, Serial Data 1)
    str r0, [r3, #0xc] // #PADS_QSPI_GPIO_QSPI_SD1_OFFSET
            //#define APB_PADS_QSPI_SD2 hex(4002,0010, Serial Data 2)
    str r0, [r3, #0x10] //#PADS_QSPI_GPIO_QSPI_SD2_OFFSET
            //#define APB_PADS_QSPI_SD3 hex(4002,0014, Serial Data 3)
    str r0, [r3, #0x14] //#PADS_QSPI_GPIO_QSPI_SD3_OFFSET]
// APB End

// XIP FLASH START
        //#define XIP_SSI hex(1800,0000, Serial Interface)
    ldr r3, =0x18000000 //=XIP_SSI_BASE
    // Disable SSI to allow further config
    movs r1, #0

    // Disable SSI to allow further config
            //#define XIP_SSI_ENR hex(1800,0008, Enable register0)
                //#define f_xse_SSI_EN fset(0,:0, SSI Enable)
    movs r1, #0
    str r1, [r3, 0x8] //#SSI_SSIENR_OFFSET]

    // Set baud rate
            //#define XIP_SSI_BAUDR hex(1800,0014, Baud Rate)
                //#define f_xsb_SCKDV fset(0, :15, SSI ClocK DiVider)
    movs r1, #2 //#PICO_FLASH_SPI_CLKDIV
    str r1, [r3, #0x14] //#SSI_BAUDR_OFFSET]

    // Set 1-cycle sample delay. If PICO_FLASH_SPI_CLKDIV == 2 then this means,
    // if the flash launches data on SCLK posedge, we capture it at the time that
    // the next SCLK posedge is launched. This is shortly before that posedge
    // arrives at the flash, so data hold time should be ok. For
    // PICO_FLASH_SPI_CLKDIV > 2 this pretty much has no effect.
            //#define XIP_SPI_RX_SAMPLE_DLY hex(1800,00f0, SPI RX Sample Delay R)
                //#define f_xsrsd_RSD fset(0, :7, SSI RX Sample Delay flag)
    movs r1, #1 // delay 1
    movs r2, #0xf0 //#SSI_RX_SAMPLE_DLY_OFFSET  // == 0xf0 so need 8 bits of offset significance
    str r1, [r3, r2]

// On QSPI parts we usually need a 01h SR-write command to enable QSPI mode
// (i.e. turn WPn and HOLDn into IO2/IO3)
program_sregs:

        //#define XIP_SSI hex(1800,0000, Serial Interface)
            //#define XIP_SSI_CTRL0 hex(1800,0000, Control register0)
                //#define f_xsc0_DFS         fset( 0,:3,  Data Frame Size)
                //#define f_xsc0_FRF         fset( 4,:5,  FRame Format)
                //#define f_xsc0_SCPH        fset( 6,:6,  Serial Clock PHase)
                //#define f_xsc0_SCPOL       fset( 7,:7,  Serial Clock POLatiry)
                //#define f_xsc0_TMOD        fset( 8,:9,  Transfer MODe, 0<<(both),1<<(tr only), 2<<(re only),3<<(EEPROM rad mode))
                //#define f_xsc0_SLV_OE      fset(10,:10, SLaVe Output Enable)
                //#define f_xsc0_SLR         fset(11,:11, Shift Register Loop)
                //#define f_xsc0_CFS         fset(12,:15, Control Frame Size, n+1 clocks per frame)
                //#define f_xsc0_DFS_32      fset(16,:20, Data Frame Size in 32b transfer mode, n+1 clocks per frame)
                //#define f_xsc0_SPI_FRF     fset(21,:22, SPI FRame Format, 0<<(1-bit per SCK), 1<<(2-bit per SCK), 2<<(4-bit per SCK), frame format)
                //#define f_xsc0_SSTE        fset(24,:24, Slave select toggle enable)
    ldr r1, =((7<<16) | (0<<8)) //CTRL0_SPI_TXRX)
    str r1, [r3, #0] //#SSI_CTRLR0_OFFSET]

     // Enable SSI and select slave 0
            //#define XIP_SSI_ENR hex(1800,0008, Enable register0)
                //#define f_xse_SSI_EN fset(0,:0, SSI Enable)
    movs r1, #1
    str r1, [r3, #0x8] //#SSI_SSIENR_OFFSET]

    // Check whether SR needs updating
            //#define XIP_SSI_DR0 hex(1800,0060, SPI Data R 0)
                //#define f_xsd_DR fset(0, :31, First Data regitster of 36)
    movs r0, #0x35 // 0x35==53 #CMD_READ_STATUS2
    bl read_flash_sreg
    movs r2, #0x02 //#SREG_DATA // 0x2 <- enable quad-spi mode
    cmp r0, r2
    beq skip_sreg_programming

    // Send write enable command
    movs r1, #0x06 //#CMD_WRITE_ENABLE
            //#define XIP_SSI_DR0 hex(1800,0060, SPI Data R 0)
    str r1, [r3, #0x60] //#SSI_DR0_OFFSET]

    // Poll for completion and discard RX
    bl wait_ssi_ready
    ldr r1, [r3, #0x60] //#SSI_DR0_OFFSET]

    // Send status write command followed by data bytes
    movs r1, #0x01 // #CMD_WRITE_STATUS
    str r1, [r3, #0x60] //#SSI_DR0_OFFSET]
    movs r0, #0
    str r0, [r3, #0x60] //#SSI_DR0_OFFSET]
    str r2, [r3, #0x60] //#SSI_DR0_OFFSET]

    bl wait_ssi_ready
    ldr r1, [r3, #0x60] //#SSI_DR0_OFFSET]
    ldr r1, [r3, #0x60] //#SSI_DR0_OFFSET]
    ldr r1, [r3, #0x60] //#SSI_DR0_OFFSET]

    // Poll status register for write completion
1:
    movs r0, #0x05 //#CMD_READ_STATUS
    bl read_flash_sreg
    movs r1, #1
    tst r0, r1
    bne 1b

skip_sreg_programming:

    // Disable SSI again so that it can be reconfigured
    movs r1, #0
            //#define XIP_SSI_ENR hex(1800,0008, Enable register0)
                //#define f_xse_SSI_EN fset(0,:0, SSI Enable)
    str r1, [r3, #0x08] //#SSI_SSIENR_OFFSET]

// Currently the flash expects an 8 bit serial command prefix on every
// transfer, which is a waste of cycles. Perform a dummy Fast Read Quad I/O
// command, with mode bits set such that the flash will not expect a serial
// command prefix on *subsequent* transfers. We don't care about the results
// of the read, the important part is the mode bits.

dummy_read:

            //#define XIP_SSI_CTRL0 hex(1800,0000, Control register0)
                //#define f_xsc0_DFS         fset( 0,:3,  Data Frame Size)
                //#define f_xsc0_FRF         fset( 4,:5,  FRame Format)
                //#define f_xsc0_SCPH        fset( 6,:6,  Serial Clock PHase)
                //#define f_xsc0_SCPOL       fset( 7,:7,  Serial Clock POLatiry)
                //#define f_xsc0_TMOD        fset( 8,:9,  Transfer MODe, 0<<(both),1<<(tr only), 2<<(re only),3<<(EEPROM rad mode))
                //#define f_xsc0_SLV_OE      fset(10,:10, SLaVe Output Enable)
                //#define f_xsc0_SLR         fset(11,:11, Shift Register Loop)
                //#define f_xsc0_CFS         fset(12,:15, Control Frame Size, n+1 clocks per frame)
                //#define f_xsc0_DFS_32      fset(16,:20, Data Frame Size in 32b transfer mode, n+1 clocks per frame)
                //#define f_xsc0_SPI_FRF     fset(21,:22, SPI FRame Format, 0<<(1-bit per SCK), 1<<(2-bit per SCK), 2<<(4-bit per SCK), frame format)
                //#define f_xsc0_SSTE        fset(24,:24, Slave select toggle enable)
    ldr r1, =((0x02 << 21) | (31 << 16)  | (0x03 << 8))
    str r1, [r3, #0x0]//#SSI_CTRLR0_OFFSET]

            //#define XIP_SSI_CTRL1 hex(1800,0004, Control register1)
                //#define f_xsc1_NDF fset( 0,:15, Number of data frames)
    movs r1, #0x0 // NDF=0 (single 32b read)
    str r1, [r3, #0x04] //#SSI_CTRLR1_OFFSET]

            //#define XIP_SSI_SPI_CTRLR0 hex(1800,00f4, SPI Control r 0)
               // #define f_xssc_TRANS_TYPE fset(0, :1, TRANS_TYPE)
               // #define f_xssc_ADDR_L     fset(2, :5, ADDRess Length)
               // #define f_xssc_INST_L     fset(8, :9, INSTtruction Length)
               // #define f_xssc_WAIT_CYCLES fset(11, :15, Wait cycles between control frame transmit and data reception)
               // #define f_xssc_DDR_EN fset(16, :16, SPI DDR transfer enable) 
               // #define f_xssc_INST_DDR_EN fset(17, :17, Instrcution DDR transfer enable) 
               // #define f_xssc_SPI_RXDS_EN fset(18, :18, Read Data Strobe Enable) 
               // #define f_xssc_XIP_CMD fset(24, :31, SPI Command to send in XIP mode (INST_L = 8-bit) or to append to Address (INST_L = 0-bit))
#define SPI_CTRLR0_ENTER_XIP (8 << 2) | (4 << 11) | (2 << 8) | (1 << 0)
    ldr r1, =((8 << 2) | (4 << 11) | (2 << 8) | (1 << 0))
    ldr r0, =(0x180000f4)  // SPI_CTRL0 Register
    str r1, [r0]

            //#define XIP_SSI_ENR hex(1800,0008, Enable register0)
                //#define f_xse_SSI_EN fset(0,:0, SSI Enable)
    movs r1, #1                      // Re-enable SSI
    str r1, [r3, #0x08] //#SSI_SSIENR_OFFSET]

                //#define XIP_SSI_DR0 hex(1800,0060, SPI Data R 0)
                    //#define f_xsd_DR fset(0, :31, First Data regitster of 36)
    movs r1, #0xeb // #CMD_READ
    str r1, [r3, #0x60] //#SSI_DR0_OFFSET] Push SPI command into TX FIFO
    movs r1, #0xa0 // #MODE_CONTINUOUS_READ // 32-bit: 24 address bits (we don't care, so 0) and M[7:4]=1010
    str r1, [r3, #0x60] //#SSI_DR0_OFFSET]   // Push Address into TX FIFO - this will trigger the transaction

    // Poll for completion
    bl wait_ssi_ready

// The flash is in a state where we can blast addresses in parallel, and get
// parallel data back. Now configure the SSI to translate XIP bus accesses
// into QSPI transfers of this form.

            //#define XIP_SSI_ENR hex(1800,0008, Enable register0)
                //#define f_xse_SSI_EN fset(0,:0, SSI Enable)
    movs r1, #0
    str r1, [r3, #0x08] //#SSI_SSIENR_OFFSET]   // Disable SSI (and clear FIFO) to allow further config

// Note that the INSTrution_Length field is used to select what XIP data gets pushed into
// the TX FIFO:
//      INST_L_0_BITS   {ADDR[23:0],XIP_CMD[7:0]}       Load "mode bits" into XIP_CMD
//      Anything else   {XIP_CMD[7:0],ADDR[23:0]}       Load SPI command into XIP_CMD

            //#define XIP_SSI_SPI_CTRLR0 hex(1800,00f4, SPI Control r 0)
                //#define f_xssc_TRANS_TYPE fset(0, :1, TRANS_TYPE)
                //#define f_xssc_ADDR_L     fset(2, :5, ADDRess Length)
                //#define f_xssc_INST_L     fset(8, :9, INSTtruction Length)
                //#define f_xssc_WAIT_CYCLES fset(11, :15, Wait cycles between control frame transmit and data reception)
                //#define f_xssc_DDR_EN fset(16, :16, SPI DDR transfer enable) 
                //#define f_xssc_INST_DDR_EN fset(17, :17, Instrcution DDR transfer enable) 
                //#define f_xssc_SPI_RXDS_EN fset(18, :18, Read Data Strobe Enable) 
                //#define f_xssc_XIP_CMD fset(24, :31, SPI Command to send in XIP mode (INST_L = 8-bit) or to append to Address (INST_L = 0-bit))
configure_ssi:
#define SPI_CTRLR0_XIP (0xa0 << 24) | (8 << 2) | (4 << 11) | (0x0 << 8) | (0x02 << 0)
    ldr r1, =((0xa0 << 24) | (8 << 2) | (4 << 11) | (0x0 << 8) | (0x02 << 0))
    ldr r0, =0x180000f4 //(XIP_SSI_BASE + SSI_SPI_CTRLR0_OFFSET)
    str r1, [r0]

            //#define XIP_SSI_SENR hex(1800,0010, Slave Enable)
                //#define f_xss_SEL fset(0, :0, Slave Select, 0<<(not selected), 1<<(slave selected))

            //#define XIP_SSI_ENR hex(1800,0008, Enable register0)
                //#define f_xse_SSI_EN fset(0,:0, SSI Enable)
    movs r1, #1
    str r1, [r3, #0x08] //#SSI_SSIENR_OFFSET]   // Re-enable SSI
// Bus accesses to the XIP window will now be transparently serviced by the
// external flash on cache miss. We are ready to run code from flash.

// Pull in standard exit routine
//#include "hardware/regs/m0plus.h"
// If entered from the bootrom, lr (which we earlier pushed) will be 0,
// and we vector through the table at the start of the main flash image.
// Any regular function call will have a nonzero value for lr.

#ifndef XIP_BASE
    #define XIP_BASE 0x10000000 // Flash
#endif

#ifndef PPB_BASE
    #define PPB_BASE 0xE0000000  // echo
#endif

#ifndef M0PLUS_VTOR_OFFSET // vector offset table
    #define M0PLUS_VTOR_OFFSET 0x0000ed08
#endif

check_return:
    pop {r0}
    cmp r0, #0
    beq vector_into_flash
    bx r0
vector_into_flash:
    ldr r0, =(0x10000000 + 0x100) // 0x100 == 256
    ldr r1, =(0xe0000000 + 0xed08) //M0PLUS_VTOR_OFFSET)
    str r0, [r1]

    ldmia r0, {r0, r1}  // r0 = stack pointer, r1 = reset handler
    // load multiple register increase after
        // ldr r0,=MEMORY
        // ldr r0,[MEMORY]
        // ldr r1,[MEMORY + #1]

    // msp:main stack pointer 
    msr msp, r0 // MSR: move s(status register) r(register)
    bx r1

wait_ssi_ready:
    push {r0, r1, lr}

    // Command is complete when there is nothing left to send
    // (TX FIFO empty) and SSI is no longer busy (CSn deasserted)
1:
            //#define XIP_SSI_SR hex(1800,0028, Status Regiser)
                //#define f_xss_BUSY fset(0, :0, SSI busy flag )
                //#define f_xss_TFNF fset(1, :1, Transmit FIFO Not Full)
                //#define f_xss_TFE  fset(2, :2, Transmit FIFO Empty)
                //#define f_xss_RFNE  fset(3, :3, Recieve FIFO Not Empty)
                //#define f_xss_RFF  fset(4, :4, Recieve FIFO Full)
                //#define f_xss_TXE  fset(5, :5, Transmission Error)
                //#define f_xss_DCOL fset(6, :6, Data COLlision error)
    ldr r1, [r3, #0x28] //#SSI_SR_OFFSET]
    movs r0, #(1<<2) //#SSI_SR_TFE_BITS
    tst r1, r0
    beq 1b
    movs r0, #(1<<0) //#SSI_SR_BUSY_BITS
    tst r1, r0
    bne 1b

    pop {r0, r1, pc}
// Pass status read cmd into r0.
// Returns status value in r0.
.global read_flash_sreg
.type read_flash_sreg,%function
.thumb_func

read_flash_sreg:
    push {r1, lr}
            //#define XIP_SPI_DR0 hex(1800,0060, SPI Data R 0)
                //#define f_xsd_DR fset(0, :31, First Data regitster of 36)
    str r0, [r3, #0x60] //#SSI_DR0_OFFSET]
    // Dummy byte:
    str r0, [r3, #0x60] //#SSI_DR0_OFFSET]
    
    bl wait_ssi_ready
    // Discard first byte and combine the next two
    str r0, [r3, #0x60] //#SSI_DR0_OFFSET]
    str r0, [r3, #0x60] //#SSI_DR0_OFFSET]

    pop {r1, pc}

.global literals
literals:
.ltorg

.end
