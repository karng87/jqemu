#pragma once
// APB Bridge - Advanced Peripherals Bus Splitter
    // GPIO(BANK0,QSPI(BANK1):for excute code from Falsh device, PADS), UART0, UART1, SPI0, SPI1, I2C0, I2C1, ADC, PWM, TIMER, RTC, Watch-dog..
#define APB_BASE _u(0x40000000)
//=====================================================
    #define SYSINFO_SEG 0x00
        #define CHIP_ID 0x00
        #define PLATFORM 0x04
        #define GITREF_RP2040 0x40
        
    #define SYSCFG_SEG 0x4000
        #define PROC0_NMI_MASK 0x00 // Non Maskable Interrupt

//=====================================================
    #define RESETS_SEG 0xc000
        #define RESET 0x0 // [31:25,24<USBCTRL>,]
                          // [23:<UART1>,22<UART0>,21<TIMER>,20<TBMAN>,19<SYSINFO>,18<SYSCFG>,17<SPI1>,16<SPI0>]
                          // [15<RTC>,14<PWM>,13<PLL_USB>,12<PLL_SYS,11<PIO1>,10<PIO0>,9<PADS_QSPI>,8<PADS_BANK0>]
                          // [7<JTAG>,6<IO_QSPI,5<IO_BANK0>,4<I2C1>,3<I2C0>,2<DMA>,1<BUSCTRL>,0<ADC>]
            #define IO_BANK0 5
            #define PADS_BANK0 8

        #define WDSEL 0x4 // Watchdog select
        #define RESET_DONE 0x8 
//=====================================================
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
//==================================================
    #define TBMAN 0x6c000 // Test Bench Manager
        #define PLATFORM_T 0x0


        
        



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

    #define IO_QSPI_SEG  0x18000

    #define PADS_BANK0_SEG 0x1c000
        #define VOLTAGE_SELECT 0x00
        #define GPIO00 0x04
        #define GPIO01 0x08
        // ...
        #define GPIO25 0x68
        // ...
        #define GPIO29 0x78
        #define SWCLK 0x7c
        #define SWD 0x80

    #define PADS_QSPI_SEG 0x20000

