
// For board detection
    #define RASPBERRYPI_PICO

// --- UART ---
    #ifndef PICO_DEFAULT_UART
        #define PICO_DEFAULT_UART 0
    #endif
    #ifndef PICO_DEFAULT_UART_TX_PIN
        #define PICO_DEFAULT_UART_TX_PIN 0
    #endif
    #ifndef PICO_DEFAULT_UART_RX_PIN
        #define PICO_DEFAULT_UART_RX_PIN 1
    #endif

// --- LED ---
    #ifndef PICO_DEFAULT_LED_PIN
        #define PICO_DEFAULT_LED_PIN 25
    #endif
// no PICO_DEFAULT_WS2812_PIN

// --- I2C ---
    #ifndef PICO_DEFAULT_I2C
        #define PICO_DEFAULT_I2C 0
    #endif
    #ifndef PICO_DEFAULT_I2C_SDA_PIN
        #define PICO_DEFAULT_I2C_SDA_PIN 4
    #endif
    #ifndef PICO_DEFAULT_I2C_SCL_PIN
        #define PICO_DEFAULT_I2C_SCL_PIN 5
    #endif

// --- SPI ---
    #ifndef PICO_DEFAULT_SPI
        #define PICO_DEFAULT_SPI 0
    #endif
    #ifndef PICO_DEFAULT_SPI_SCK_PIN
        #define PICO_DEFAULT_SPI_SCK_PIN 18
    #endif
    #ifndef PICO_DEFAULT_SPI_TX_PIN
        #define PICO_DEFAULT_SPI_TX_PIN 19
    #endif
    #ifndef PICO_DEFAULT_SPI_RX_PIN
        #define PICO_DEFAULT_SPI_RX_PIN 16
    #endif
    #ifndef PICO_DEFAULT_SPI_CSN_PIN
        #define PICO_DEFAULT_SPI_CSN_PIN 17
    #endif

// --- FLASH ---

    #define PICO_BOOT_STAGE2_CHOOSE_W25Q080 1

    #ifndef PICO_FLASH_SPI_CLKDIV
        #define PICO_FLASH_SPI_CLKDIV 2
    #endif

    #ifndef PICO_FLASH_SIZE_BYTES
        #define PICO_FLASH_SIZE_BYTES (2 * 1024 * 1024)
    #endif

// Drive high to force power supply into PWM mode (lower ripple on 3V3 at light loads)
    #define PICO_SMPS_MODE_PIN 23

    #ifndef PICO_RP2040_B0_SUPPORTED
        #define PICO_RP2040_B0_SUPPORTED 1
    #endif

//------------------------------------------
// based on PICO_RP2040_CONFIG_HEADER_FILES:
//------------------------------------------
    #if LIB_CMSIS_CORE
        // PICO_CONFIG: PICO_CMSIS_RENAME_EXCEPTIONS, Whether to rename SDK exceptions such as isr_nmi to their CMSIS equivalent i.e. NMI_Handler, type=bool, default=1, group=cmsis_core

        // Note that since this header is included at the config stage, if you wish to override this you should do so via build compiler define
        #ifndef PICO_CMSIS_RENAME_EXCEPTIONS
            #define PICO_CMSIS_RENAME_EXCEPTIONS 1
        #endif

        #if PICO_CMSIS_RENAME_EXCEPTIONS
            #define isr_nmi NMI_Handler
            #define isr_hardfault HardFault_Handler
            #define isr_svcall SVC_Handler
            #define isr_pendsv PendSV_Handler
            #define isr_systick SysTick_Handler
            #define isr_irq0 TIMER_IRQ_0_Handler
            #define isr_irq1 TIMER_IRQ_1_Handler
            #define isr_irq2 TIMER_IRQ_2_Handler
            #define isr_irq3 TIMER_IRQ_3_Handler
            #define isr_irq4 PWM_IRQ_WRAP_Handler
            #define isr_irq5 USBCTRL_IRQ_Handler
            #define isr_irq6 XIP_IRQ_Handler
            #define isr_irq7 PIO0_IRQ_0_Handler
            #define isr_irq8 PIO0_IRQ_1_Handler
            #define isr_irq9 PIO1_IRQ_0_Handler
            #define isr_irq10 PIO1_IRQ_1_Handler
            #define isr_irq11 DMA_IRQ_0_Handler
            #define isr_irq12 DMA_IRQ_1_Handler
            #define isr_irq13 IO_IRQ_BANK0_Handler
            #define isr_irq14 IO_IRQ_QSPI_Handler
            #define isr_irq15 SIO_IRQ_PROC0_Handler
            #define isr_irq16 SIO_IRQ_PROC1_Handler
            #define isr_irq17 CLOCKS_IRQ_Handler
            #define isr_irq18 SPI0_IRQ_Handler
            #define isr_irq19 SPI1_IRQ_Handler
            #define isr_irq20 UART0_IRQ_Handler
            #define isr_irq21 UART1_IRQ_Handler
            #define isr_irq22 ADC_IRQ_FIFO_Handler
            #define isr_irq23 I2C0_IRQ_Handler
            #define isr_irq24 I2C1_IRQ_Handler
            #define isr_irq25 RTC_IRQ_Handler
        #endif
    #endif

    // PICO_CONFIG: PICO_CONFIG_RTOS_ADAPTER_HEADER, unquoted path to header include in the default pico/config.h for RTOS integration defines that must be included in all sources, group=pico_base
    #ifdef PICO_CONFIG_RTOS_ADAPTER_HEADER
    #include __PICO_XSTRING(PICO_CONFIG_RTOS_ADAPTER_HEADER)
    #endif

    // PICO_CONFIG: PICO_BUILD_BOOT_STAGE2_NAME, The name of the boot stage 2 if selected by the build, group=boot_stage2
    #ifdef PICO_BUILD_BOOT_STAGE2_NAME
        #define _BOOT_STAGE2_SELECTED
    #else
    // check that multiple boot stage 2 options haven't been set...
    
    // PICO_CONFIG: PICO_BOOT_STAGE2_CHOOSE_IS25LP080, Select boot2_is25lp080 as the boot stage 2 when no boot stage 2 selection is made by the CMake build, type=bool, default=0, group=boot_stage2
    #ifndef PICO_BOOT_STAGE2_CHOOSE_IS25LP080
        #define PICO_BOOT_STAGE2_CHOOSE_IS25LP080 0
    #elif PICO_BOOT_STAGE2_CHOOSE_IS25LP080
        #ifdef _BOOT_STAGE2_SELECTED
            #error multiple boot stage 2 options chosen
        #endif
        #define _BOOT_STAGE2_SELECTED
    #endif
    // PICO_CONFIG: PICO_BOOT_STAGE2_CHOOSE_W25Q080, Select boot2_w25q080 as the boot stage 2 when no boot stage 2 selection is made by the CMake build, type=bool, default=0, group=boot_stage2
    #ifndef PICO_BOOT_STAGE2_CHOOSE_W25Q080
        #define PICO_BOOT_STAGE2_CHOOSE_W25Q080 0
    #elif PICO_BOOT_STAGE2_CHOOSE_W25Q080
        #ifdef _BOOT_STAGE2_SELECTED
            #error multiple boot stage 2 options chosen
        #endif
        #define _BOOT_STAGE2_SELECTED
    #endif

    // PICO_CONFIG: PICO_BOOT_STAGE2_CHOOSE_W25X10CL, Select boot2_w25x10cl as the boot stage 2 when no boot stage 2 selection is made by the CMake build, type=bool, default=0, group=boot_stage2
    #ifndef PICO_BOOT_STAGE2_CHOOSE_W25X10CL
        #define PICO_BOOT_STAGE2_CHOOSE_W25X10CL 0
    #elif PICO_BOOT_STAGE2_CHOOSE_W25X10CL
        #ifdef _BOOT_STAGE2_SELECTED
            #error multiple boot stage 2 options chosen
        #endif
        #define _BOOT_STAGE2_SELECTED
    #endif

    // PICO_CONFIG: PICO_BOOT_STAGE2_CHOOSE_AT25SF128A, Select boot2_at25sf128a as the boot stage 2 when no boot stage 2 selection is made by the CMake build, type=bool, default=0, group=boot_stage2
    #ifndef PICO_BOOT_STAGE2_CHOOSE_AT25SF128A
        #define PICO_BOOT_STAGE2_CHOOSE_AT25SF128A 0
    #elif PICO_BOOT_STAGE2_CHOOSE_AT25SF128A
        #ifdef _BOOT_STAGE2_SELECTED
            #error multiple boot stage 2 options chosen
        #endif
        #define _BOOT_STAGE2_SELECTED
    #endif
    
    // PICO_CONFIG: PICO_BOOT_STAGE2_CHOOSE_GENERIC_03H, Select boot2_generic_03h as the boot stage 2 when no boot stage 2 selection is made by the CMake build, type=bool, default=1, group=boot_stage2
    #if defined(PICO_BOOT_STAGE2_CHOOSE_GENERIC_03H) && PICO_BOOT_STAGE2_CHOOSE_GENERIC_03H
        #ifdef _BOOT_STAGE2_SELECTED
            #error multiple boot stage 2 options chosen
        #endif
        #define _BOOT_STAGE2_SELECTED
    #endif
    
    #endif // PICO_BUILD_BOOT_STAGE2_NAME

    #ifdef PICO_BUILD_BOOT_STAGE2_NAME
        // boot stage 2 is configured by cmake, so use the name specified there
        #define PICO_BOOT_STAGE2_NAME PICO_BUILD_BOOT_STAGE2_NAME
    #else
        // boot stage 2 is selected by board config header, so we have to do some work
        #if PICO_BOOT_STAGE2_CHOOSE_IS25LP080
            #define _BOOT_STAGE2 boot2_is25lp080
        #elif PICO_BOOT_STAGE2_CHOOSE_W25Q080
            #define _BOOT_STAGE2 boot2_w25q080
        #elif PICO_BOOT_STAGE2_CHOOSE_W25X10CL
            #define _BOOT_STAGE2 boot2_w25x10cl
        #elif PICO_BOOT_STAGE2_CHOOSE_AT25SF128A
            #define _BOOT_STAGE2 boot2_at25sf128a
        #elif !defined(PICO_BOOT_STAGE2_CHOOSE_GENERIC_03H) || PICO_BOOT_STAGE2_CHOOSE_GENERIC_03H
            #undef PICO_BOOT_STAGE2_CHOOSE_GENERIC_03H
            #define PICO_BOOT_STAGE2_CHOOSE_GENERIC_03H 1
            #define _BOOT_STAGE2 boot2_generic_03h
        #else
            #error no boot stage 2 is defined by PICO_BOOT_STAGE2_CHOOSE_ macro
        #endif
        // we can't include cdefs in assembly, so define our own, but avoid conflict with real ones for c inclusion
        #define _PICO__STRING(x) #x
        #define _PICO__XSTRING(x) _PICO__STRING(x)
        #define _PICO__CONCAT1(x, y) x ## y
        #define PICO_BOOT_STAGE2_NAME _PICO__XSTRING(_BOOT_STAGE2)
        #define PICO_BOOT_STAGE2_ASM _PICO__XSTRING(_PICO__CONCAT1(_BOOT_STAGE2,.S))
    #endif

#ifdef PICO_BUILD_BOOT_STAGE2_NAME // boot stage 2 is configured by cmake, so use the name specified there
    #error PICO_BUILD_BOOT_STAGE2_NAME should not be defined for compile_time_choice builds
#else
    // boot stage 2 is selected by board config header, and PICO_BOOT_STAGE2_ASM is set in boot_stage2/config.h
    //#include PICO_BOOT_STAGE2_ASM
// ----------------------------------------------------------------------------
// Second stage boot code
// Copyright (c) 2019-2021 Raspberry Pi (Trading) Ltd.
// SPDX-License-Identifier: BSD-3-Clause
//
// Device:      Winbond W25Q080
//              Also supports W25Q16JV (which has some different SR instructions)
//              Also supports AT25SF081
//              Also supports S25FL132K0
//
// Description: Configures W25Q080 to run in Quad I/O continuous read XIP mode
//
// Details:     * Check status register 2 to determine if QSPI mode is enabled,
//                and perform an SR2 programming cycle if necessary.
                // QSPI SR2
//              * Use SSI to perform a dummy 0xEB read command, with the mode
//                continuation bits set, so that the flash will not require
//                0xEB instruction prefix on subsequent reads.
//              * Configure SSI to write address, mode bits, but no instruction.
//                SSI + flash are now jointly in a state where continuous reads
//                can take place.
//              * Jump to exit pointer passed in via lr. Bootrom passes null,
//                in which case this code uses a default 256 byte flash offset
//
// Building:    * This code must be position-independent, and use stack only
//              * The code will be padded to a size of 256 bytes, including a
//                4-byte checksum. Therefore code size cannot exceed 252 bytes.
// ----------------------------------------------------------------------------

#include "pico/asm_helper.S"
#include "hardware/regs/addressmap.h"
#include "hardware/regs/ssi.h"
#include "hardware/regs/pads_qspi.h"

// ----------------------------------------------------------------------------
// Config section
// ----------------------------------------------------------------------------
// It should be possible to support most flash devices by modifying this section

// The serial flash interface will run at clk_sys/PICO_FLASH_SPI_CLKDIV.
// This must be a positive, even integer.
// The bootrom is very conservative with SPI frequency, but here we should be
// as aggressive as possible.

#ifndef PICO_FLASH_SPI_CLKDIV
#define PICO_FLASH_SPI_CLKDIV 4
#endif
#if PICO_FLASH_SPI_CLKDIV & 1
#error PICO_FLASH_SPI_CLKDIV must be even
#endif

// Define interface width: single/dual/quad IO
#define FRAME_FORMAT SSI_CTRLR0_SPI_FRF_VALUE_QUAD

// For W25Q080 this is the "Read data fast quad IO" instruction:
#define CMD_READ 0xeb

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

#endif
