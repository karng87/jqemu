/**
 * Copyright (c) 2021 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
#ifndef _ADDRESSMAP_H_
#define _ADDRESSMAP_H_

#define _u(x) (x ## UL)

// each  Peripherals register block is allocated 4KB(0x1000) of address space
#define NORMAL_RW_BITS  (0x0u << 12u) // Normal Read Write: 0x0000
#define ATOMIC_XOR_BITS (0x1u << 12u) // Atomic XOR  : 0x1000
#define ATOMIC_SET_BITS (0x2u << 12u) // Atomic Write: 0x2000
#define ATOMIC_CLR_BITS (0x3u << 12u) // Atomic Write: 0x3000

// ROM(BIOS): 16KB BIOS
#define ROM_BASE _u(0x00000000)

// Flash XIP:2MB with XIP(provided by SSI SPI(DSPI,QSPI))
    // SSI: FIFO-based SPI master
#define XIP_BASE _u(0x10000000)
#define XIP_MAIN_BASE _u(0x10000000)
#define XIP_NOALLOC_BASE _u(0x11000000)
#define XIP_NOCACHE_BASE _u(0x12000000)
#define XIP_NOCACHE_NOALLOC_BASE _u(0x13000000)
#define XIP_CTRL_BASE _u(0x14000000)
#define XIP_SRAM_BASE _u(0x15000000)
#define XIP_SRAM_END _u(0x15004000)
#define XIP_SSI_BASE _u(0x18000000)

// SRAM(Factory RAM):256KB :Banks(4x64KB + 2x4KB)
#define SRAM_BASE _u(0x20000000)
#define SRAM_STRIPED_BASE _u(0x20000000)
#define SRAM_STRIPED_END _u(0x20040000)
#define SRAM4_BASE _u(0x20040000)
#define SRAM5_BASE _u(0x20041000)
#define SRAM_END _u(0x20042000)
#define SRAM0_BASE _u(0x21000000)
#define SRAM1_BASE _u(0x21010000)
#define SRAM2_BASE _u(0x21020000)
#define SRAM3_BASE _u(0x21030000)

// APB Bridge - Advanced Peripherals Bus Splitter
    // GPIO(BANK0,QSPI(BANK1):for excute code from Falsh device, PADS), UART0, UART1, SPI0, SPI1, I2C0, I2C1, ADC, PWM, TIMER, RTC, Watch-dog..
#define APB_BASE _u(0x40000000)
    #define SYSCFG_SEG 0x4000

    #define CLOCKS_SEG 0x8000
        #define CLK_CPOUT0_CTRL 0x00
        #define CLK_CPOUT0_DIV 0x04
        #define CLK_CPOUT0_SELECTED 0x08
        // ... 
        #define CLK_CPOUT3_CTRL 0x24
        #define CLK_CPOUT3_DIV 0x28
        #define CLK_CPOUT3_SELECTED 0x2c
        //------------------------
        #define CLK_REF_CTRL 0x30
        #define CLK_SYS_CTRL 0x3c
        #define CLK_PERI_CTRL 0x48
        #define CLK_USB_CTRL 0x54
        #define CLK_ADC_CTRL 0x60
        #define CLK_RTC_CTRL 0x6c
        //----------------------------
        #define CLK_SYS_RESUS_CTRL 0x74
        #define CLK_SYS_RESUS_STATUS 0x7c
        //----------------
        #define FC0_REF_KHZ 0x80
        #define FC0_MIN_KHZ 0x84
        #define FC0_MAX_KHZ 0x88
        #define FC0_DELAY 0x8c
        #define FC0_INTERVAL 0x90
        #define FC0_SRC 0x94
        #define FC0_STATUS 0x98
        #define FC0_RESULT 0x9c
        #define WAKE_EN0 0xa0
        #define WAKE_EN1 0xa4
        #define SLEEP_EN0 0xa8
        #define SLEEP_EN1 0xac
        #define ENABLED0 0xb0
        #define ENABLED1 0xb4
        #define INTR 0xb8 // Raw Interrupt
        #define INTE 0xbc
        #define INTF 0xc0
        #define INTS 0xc4

        
        

    #define RESETS_SEG 0xc000
        #define RESET 0x0
        #define WDSEL 0x4 // Watchdog select
        #define RESET_DONE 0x8 


    #define PSM_SEG 0x10000 // Power-on State Machine

    #define IO_BANK0_SEG 0x14000
        #define GPIO0_STATUS 0x000
        #define GPIO0_CTRL 0x004
        #define GPIO29_STATUS 0x0e8
        #define GPIO29_CTRL 0x0ec
        // ---------------
        #define INTR0 0x0f0
        #define INTR3 0x0fc
        //-----------------
        #define PROC0_INTE0 0x100 // Interrupt Enable
        #define PROC0_INTE3 0x10c
        //-----------------
        #define PROC0_INTF0 0x100 // Interrupt Force
        #define PROC0_INTF3 0x10c
        //-----------------
        #define PROC0_INTS0 0x100 // Interrupt Status 
        #define PROC0_INTS3 0x10c
        //-----------------
        #define PROC1_INTE0 0x130 // Interrupt Enable
        #define PROC1_INTS3 0x15c
        //-----------------
        #define DORMANT_WAKE_INTE0 0x160 // Dormant_wake (sleep mode wake)
        #define DORMANT_WAKE_INTF0 0x170
        #define DORMANT_WAKE_INTS0 0x180
        #define DORMANT_WAKE_INTS3 0x18c
        //***** START: GPIOx_CTRL*****//
            #define GPIO_FUNCSEL(x) *(volatile unsigned int*)GPIO0_CTRL |= (x << 0)
                #define FUNC_SPI0_RX 1
                #define FUNC_UART0_TX 2
                #define FUNC_I2C0_SDA 3
                #define FUNC_PWM0_A 4
                #define FUNC_SIO 5
                #define FUNC_PIO0 6
                #define FUNC_PIO1 7
                #define FUNC_USB_OVCUR_DET 9
            #define GPIO_OUTOVER(x) *(volatile unsigned int*)GPIO0_CTRL |= (x << 8)
            #define GPIO_OEOVER(x) *(volatile unsigned int*)GPIO0_CTRL |= (x << 12)
            #define GPIO_INOVER(x) *(volatile unsigned int*)GPIO0_CTRL |= (x << 16)
            #define GPIO_IRQOVER(x) *(volatile unsigned int*)GPIO0_CTRL |= (x << 28)
        //***** END: GPIOx_CTRL*****//

    #define IO_QSPI_BASE _u(APB_BASE + 0x18000)

    #define PADS_BANK0_BASE _u(APB_BASE + 0x1c000)
        #define VOLTAGE_SELECT (PADS_BANK0_BASE + 0x00)

    #define PADS_QSPI_BASE _u(APB_BASE + 0x20000)


#define XOSC_BASE _u(0x40024000)
#define PLL_SYS_BASE _u(0x40028000)
#define PLL_USB_BASE _u(0x4002c000)
#define BUSCTRL_BASE _u(0x40030000)
#define UART0_BASE _u(0x40034000)
#define UART1_BASE _u(0x40038000)
#define SPI0_BASE _u(0x4003c000)
#define SPI1_BASE _u(0x40040000)
#define I2C0_BASE _u(0x40044000)
#define I2C1_BASE _u(0x40048000)
#define ADC_BASE _u(0x4004c000)
#define PWM_BASE _u(0x40050000)
#define TIMER_BASE _u(0x40054000)
#define WATCHDOG_BASE _u(0x40058000)
#define RTC_BASE _u(0x4005c000)
#define ROSC_BASE _u(0x40060000)
#define VREG_AND_CHIP_RESET_BASE _u(0x40064000)
#define TBMAN_BASE _u(0x4006c000)

//  AHB-Lite Advanced High Bus Lite Splitter (DMA)
    // Flash XIP, PIO0, PIO1, USB
#define DMA_BASE _u(0x50000000)
#define AHB_BASE _u(0x50000000)
#define USBCTRL_DPRAM_BASE _u(0x50100000)
#define USBCTRL_BASE _u(0x50100000)
#define USBCTRL_REGS_BASE _u(0x50110000)
#define PIO0_BASE _u(0x50200000)
#define PIO1_BASE _u(0x50300000)
#define XIP_AUX_BASE _u(0x50400000)

// I/O port Registers Single-cycle I/O
#define SIO_BASE _u(0xd0000000)

// Cortex-M0+ internal registers
#define M0PLUS_BASE _u(0xe0000000)
    #define SYST_CSR 0xe010 // SysTick Control Status Register
    // ..
    #define VTOR 0xed08 // Vector Table Offset Register

#endif // _ADDRESSMAP_H_
