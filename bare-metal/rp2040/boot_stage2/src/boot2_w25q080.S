// ----------------------------------------------------------------------------
// Start of 2nd Stage Boot Code W25Q128JVS device
// ----------------------------------------------------------------------------

/*
REGISERS
    SR1: Status Registers 1
        [7:SRP | 6:SEC | 5:TB |  4:BP2 | 3:BP1 | 2:BP0 | 1:WEL | 0:BUSY]  
        SRP: status register protect
        SEC: sector protect
        Top/Bottom protec
        BP: Block Protect Bits
        WEL(0:1:2): Write Enable Latch
        BUSY: Write In Progress

    SR2: 
        [ 15:SUS | 14:CMP | 13:LB3 | 12:LB2 | 11:LB1 | 10:(R) | 9:QE | 8:SRL ]

    SR3: 
        [ 23:HOLD/RST | 22:DRV1 | 21:DRV0 | 20:(R) | 19:(R) | 18:WPS | 17:(R) | 16:(R) ]
    
Instrcution
    fully controlled through the SPI bus
    01h: Write Status Register-1
    31h: Write Status Register-2
    11h: Write Status Register-3
    03h: Read Data
    04h: Wiite Disable
    06h: Write Enable
    0Bh: Fast Read
    3Bh: Fast Read Dual Output
    6Bh: Fast Read Quad Output
    ebh: Fast Read Quad I/O
    20h: Sector Erase
    52h: 32KB Block Erase
    50h: Write Enable for Volatile Status Register
*/
.syntax unifieD
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

    ldr r3, =PADS_QSPI_BASE
    movs r0, #(2 << PADS_QSPI_GPIO_QSPI_SCLK_DRIVE_LSB | PADS_QSPI_GPIO_QSPI_SCLK_SLEWFAST_BITS)
    str r0, [r3, #PADS_QSPI_GPIO_QSPI_SCLK_OFFSET]
    ldr r0, [r3, #PADS_QSPI_GPIO_QSPI_SD0_OFFSET]
    movs r1, #PADS_QSPI_GPIO_QSPI_SD0_SCHMITT_BITS
    bics r0, r1
    str r0, [r3, #PADS_QSPI_GPIO_QSPI_SD0_OFFSET]
    str r0, [r3, #PADS_QSPI_GPIO_QSPI_SD1_OFFSET]
    str r0, [r3, #PADS_QSPI_GPIO_QSPI_SD2_OFFSET]
    str r0, [r3, #PADS_QSPI_GPIO_QSPI_SD3_OFFSET]

    ldr r3, =XIP_SSI_BASE

    // Disable SSI to allow further config
    movs r1, #0
    str r1, [r3, #SSI_SSIENR_OFFSET]

    // Set baud rate
    movs r1, #PICO_FLASH_SPI_CLKDIV
    str r1, [r3, #SSI_BAUDR_OFFSET]

    // Set 1-cycle sample delay. If PICO_FLASH_SPI_CLKDIV == 2 then this means,
    // if the flash launches data on SCLK posedge, we capture it at the time that
    // the next SCLK posedge is launched. This is shortly before that posedge
    // arrives at the flash, so data hold time should be ok. For
    // PICO_FLASH_SPI_CLKDIV > 2 this pretty much has no effect.

    movs r1, #1
    movs r2, #SSI_RX_SAMPLE_DLY_OFFSET  // == 0xf0 so need 8 bits of offset significance
    str r1, [r3, r2]


// On QSPI parts we usually need a 01h SR-write command to enable QSPI mode
// (i.e. turn WPn and HOLDn into IO2/IO3)
#ifdef PROGRAM_STATUS_REG
program_sregs:
#define CTRL0_SPI_TXRX \
    (7 << SSI_CTRLR0_DFS_32_LSB) | /* 8 bits per data frame */ \
    (SSI_CTRLR0_TMOD_VALUE_TX_AND_RX << SSI_CTRLR0_TMOD_LSB)

    ldr r1, =(CTRL0_SPI_TXRX)
    str r1, [r3, #SSI_CTRLR0_OFFSET]

     // Enable SSI and select slave 0
    movs r1, #1
    str r1, [r3, #SSI_SSIENR_OFFSET]

    // Check whether SR needs updating
    movs r0, #CMD_READ_STATUS2
    bl read_flash_sreg
    movs r2, #SREG_DATA
    cmp r0, r2
    beq skip_sreg_programming

    // Send write enable command
    movs r1, #CMD_WRITE_ENABLE
    str r1, [r3, #SSI_DR0_OFFSET]

    // Poll for completion and discard RX
    bl wait_ssi_ready
    ldr r1, [r3, #SSI_DR0_OFFSET]

    // Send status write command followed by data bytes
    movs r1, #CMD_WRITE_STATUS
    str r1, [r3, #SSI_DR0_OFFSET]
    movs r0, #0
    str r0, [r3, #SSI_DR0_OFFSET]
    str r2, [r3, #SSI_DR0_OFFSET]

    bl wait_ssi_ready
    ldr r1, [r3, #SSI_DR0_OFFSET]
    ldr r1, [r3, #SSI_DR0_OFFSET]
    ldr r1, [r3, #SSI_DR0_OFFSET]

    // Poll status register for write completion
1:
    movs r0, #CMD_READ_STATUS
    bl read_flash_sreg
    movs r1, #1
    tst r0, r1
    bne 1b

skip_sreg_programming:

    // Disable SSI again so that it can be reconfigured
    movs r1, #0
    str r1, [r3, #SSI_SSIENR_OFFSET]
#endif

// Currently the flash expects an 8 bit serial command prefix on every
// transfer, which is a waste of cycles. Perform a dummy Fast Read Quad I/O
// command, with mode bits set such that the flash will not expect a serial
// command prefix on *subsequent* transfers. We don't care about the results
// of the read, the important part is the mode bits.

dummy_read:
#define CTRLR0_ENTER_XIP \
    (FRAME_FORMAT                          /* Quad I/O mode */                \
        << SSI_CTRLR0_SPI_FRF_LSB) |                                          \
    (31 << SSI_CTRLR0_DFS_32_LSB)  |       /* 32 data bits */                 \
    (SSI_CTRLR0_TMOD_VALUE_EEPROM_READ     /* Send INST/ADDR, Receive Data */ \
        << SSI_CTRLR0_TMOD_LSB)

    ldr r1, =(CTRLR0_ENTER_XIP)
    str r1, [r3, #SSI_CTRLR0_OFFSET]

    movs r1, #0x0                    // NDF=0 (single 32b read)
    str r1, [r3, #SSI_CTRLR1_OFFSET]

#define SPI_CTRLR0_ENTER_XIP \
    (ADDR_L << SSI_SPI_CTRLR0_ADDR_L_LSB) |     /* Address + mode bits */ \
    (WAIT_CYCLES << SSI_SPI_CTRLR0_WAIT_CYCLES_LSB) | /* Hi-Z dummy clocks following address + mode */ \
    (SSI_SPI_CTRLR0_INST_L_VALUE_8B \
        << SSI_SPI_CTRLR0_INST_L_LSB) |        /* 8-bit instruction */ \
    (SSI_SPI_CTRLR0_TRANS_TYPE_VALUE_1C2A      /* Send Command in serial mode then address in Quad I/O mode */ \
        << SSI_SPI_CTRLR0_TRANS_TYPE_LSB)

    ldr r1, =(SPI_CTRLR0_ENTER_XIP)
    ldr r0, =(XIP_SSI_BASE + SSI_SPI_CTRLR0_OFFSET)  // SPI_CTRL0 Register
    str r1, [r0]

    movs r1, #1                      // Re-enable SSI
    str r1, [r3, #SSI_SSIENR_OFFSET]

    movs r1, #CMD_READ
    str r1, [r3, #SSI_DR0_OFFSET]   // Push SPI command into TX FIFO
    movs r1, #MODE_CONTINUOUS_READ   // 32-bit: 24 address bits (we don't care, so 0) and M[7:4]=1010
    str r1, [r3, #SSI_DR0_OFFSET]   // Push Address into TX FIFO - this will trigger the transaction

    // Poll for completion
    bl wait_ssi_ready

// The flash is in a state where we can blast addresses in parallel, and get
// parallel data back. Now configure the SSI to translate XIP bus accesses
// into QSPI transfers of this form.

    movs r1, #0
    str r1, [r3, #SSI_SSIENR_OFFSET]   // Disable SSI (and clear FIFO) to allow further config

// Note that the INST_L field is used to select what XIP data gets pushed into
// the TX FIFO:
//      INST_L_0_BITS   {ADDR[23:0],XIP_CMD[7:0]}       Load "mode bits" into XIP_CMD
//      Anything else   {XIP_CMD[7:0],ADDR[23:0]}       Load SPI command into XIP_CMD
configure_ssi:
#define SPI_CTRLR0_XIP \
    (MODE_CONTINUOUS_READ                      /* Mode bits to keep flash in continuous read mode */ \
        << SSI_SPI_CTRLR0_XIP_CMD_LSB) | \
    (ADDR_L << SSI_SPI_CTRLR0_ADDR_L_LSB) |    /* Total number of address + mode bits */ \
    (WAIT_CYCLES << SSI_SPI_CTRLR0_WAIT_CYCLES_LSB) |    /* Hi-Z dummy clocks following address + mode */ \
    (SSI_SPI_CTRLR0_INST_L_VALUE_NONE          /* Do not send a command, instead send XIP_CMD as mode bits after address */ \
        << SSI_SPI_CTRLR0_INST_L_LSB) | \
    (SSI_SPI_CTRLR0_TRANS_TYPE_VALUE_2C2A      /* Send Address in Quad I/O mode (and Command but that is zero bits long) */ \
        << SSI_SPI_CTRLR0_TRANS_TYPE_LSB)

    ldr r1, =(SPI_CTRLR0_XIP)
    ldr r0, =(XIP_SSI_BASE + SSI_SPI_CTRLR0_OFFSET)
    str r1, [r0]

    movs r1, #1
    str r1, [r3, #SSI_SSIENR_OFFSET]   // Re-enable SSI

// Bus accesses to the XIP window will now be transparently serviced by the
// external flash on cache miss. We are ready to run code from flash.

// Pull in standard exit routine
#include "boot2_helpers/exit_from_boot2.S"

// Common functions
#include "boot2_helpers/wait_ssi_ready.S"
#ifdef PROGRAM_STATUS_REG
#include "boot2_helpers/read_flash_sreg.S"
#endif

.global literals
literals:
.ltorg

.end
