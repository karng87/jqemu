#include "pico/j_address.h"

#ifndef PICO_FLASH_SPI_CLKDIV
    #define PICO_FLASH_SPI_CLKDIV 4
#endif
#if PICO_FLASH_SPI_CLKDIV & 1
    #error PICO_FLASH_SPI_CLKDIV must be even
#endif

// Define interface width: single/dual/quad IO
#define FRAME_FORMAT SSI_CTRLR0_SPI_FRF_VALUE_QUAD // XIP_SSI_CTRL0<22:21> 2=quad-spi frame format

// For W25Q080 this is the "Read data fast quad IO" instruction:
#define CMD_READ 0xeb // QUAD I/O Fast Read on Winbond devices

// "Mode bits" are 8 special bits sent immediately after
// the address bits in a "Read Data Fast Quad I/O" command sequence. 
// On W25Q080, the four LSBs are don't care, and if MSBs == 0xa, the
// next read does not require the 0xeb instruction prefix.
#define MODE_CONTINUOUS_READ 0xa0

// The number of address + mode bits, divided by 4 (always 4, not function of
// interface width).
#define ADDR_L 8

// How many clocks of Hi-Z following the mode bits. For W25Q080, 4 dummy cycles
// are required.
#define WAIT_CYCLES 4

// If defined, we will read status reg, compare to SREG_DATA, and overwrite
// with our value if the SR doesn't match.
// We do a two-byte write to SR1 (01h cmd) rather than a one-byte write to
// SR2 (31h cmd) as the latter command isn't supported by WX25Q080.
// This isn't great because it will remove block protections.
// A better solution is to use a volatile SR write if your device supports it.
#define PROGRAM_STATUS_REG

#define CMD_WRITE_ENABLE 0x06
#define CMD_READ_STATUS 0x05
#define CMD_READ_STATUS2 0x35
#define CMD_WRITE_STATUS 0x01

// #define f_xsc0_SPI_FRF     fset(21,:22, SPI FRame Format, 0<<(1-bit per SCK), 1<<(2-bit per SCK), 2<<(4-bit per SCK), frame format)
#define SREG_DATA 0x02  // Enable quad-SPI mode

// ----------------------------------------------------------------------------
// Start of 2nd Stage Boot Code
// ----------------------------------------------------------------------------

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

//#define APB_PADS_QSPI   hex(4002,0000, APB)
//#define f_apqs_slew  fset(0, :0, 0->slow, 1->fast,Slew rate control)
//#define f_apqs_drive fset(4, :5, 0->2mA, 1->4mA, 2->8mA, 3->12mA>,,Drive strength)
    ldr r3, =APB_PADS_QSPI
    movs r0, #(2 << f_apqs_drive | 1 << f_apqs_slew)
/*
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
    (7 << SSI_CTRLR0_DFS_32_LSB) |  \
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
    (FRAME_FORMAT                                         \
        << SSI_CTRLR0_SPI_FRF_LSB) |                                          \
    (31 << SSI_CTRLR0_DFS_32_LSB)  |                        \
    (SSI_CTRLR0_TMOD_VALUE_EEPROM_READ      \
        << SSI_CTRLR0_TMOD_LSB)

    ldr r1, =(CTRLR0_ENTER_XIP)
    str r1, [r3, #SSI_CTRLR0_OFFSET]

    movs r1, #0x0                    // NDF=0 (single 32b read)
    str r1, [r3, #SSI_CTRLR1_OFFSET]

#define SPI_CTRLR0_ENTER_XIP \
    (ADDR_L << SSI_SPI_CTRLR0_ADDR_L_LSB) |      \
    (WAIT_CYCLES << SSI_SPI_CTRLR0_WAIT_CYCLES_LSB) |  \
    (SSI_SPI_CTRLR0_INST_L_VALUE_8B \
        << SSI_SPI_CTRLR0_INST_L_LSB) |         \
    (SSI_SPI_CTRLR0_TRANS_TYPE_VALUE_1C2A       \
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
    (MODE_CONTINUOUS_READ                       \
        << SSI_SPI_CTRLR0_XIP_CMD_LSB) | \
    (ADDR_L << SSI_SPI_CTRLR0_ADDR_L_LSB) |        (WAIT_CYCLES << SSI_SPI_CTRLR0_WAIT_CYCLES_LSB) |     \
    (SSI_SPI_CTRLR0_INST_L_VALUE_NONE           \
        << SSI_SPI_CTRLR0_INST_L_LSB) | \
    (SSI_SPI_CTRLR0_TRANS_TYPE_VALUE_2C2A       \
        << SSI_SPI_CTRLR0_TRANS_TYPE_LSB)

    ldr r1, =(SPI_CTRLR0_XIP)
    ldr r0, =(XIP_SSI_BASE + SSI_SPI_CTRLR0_OFFSET)
    str r1, [r0]

    movs r1, #1
    str r1, [r3, #SSI_SSIENR_OFFSET]   // Re-enable SSI

// Bus accesses to the XIP window will now be transparently serviced by the
// external flash on cache miss. We are ready to run code from flash.

// Pull in standard exit routine
#include "asm/boot2_helpers/exit_from_boot2.S"

// Common functions
#include "asm/boot2_helpers/wait_ssi_ready.S"
#ifdef PROGRAM_STATUS_REG
#include "asm/boot2_helpers/read_flash_sreg.S"
#endif

.global literals
literals:
.ltorg

.end

*/
