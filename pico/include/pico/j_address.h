#ifndef J_PICO_ADDRESS_H
#define J_PICO_ADDRESS_H

#include "j_define.h"

    #define ROM hex(0000,0000, ROM:Ready Only Memory,16k,flash boot sequence)

    #define XIP hex(1000,0000, XIP:eXecute In Place,2M)

    #define RAM hex(2000,0000, RAM:Random Access Memory,264k, 6-bank, 64k * 4, 4k * 2)
        #define SRAM    hex(2000,0000, 256k==0x40000)
        #define SRAM_X  hex(2004,0000, 4k==0x1000)
        #define SRAM_Y  hex(2004,1000, 4k==0x1000)
        #define SRAM0   hex(2100,0000, non-stripted mirror,64k)
        #define SRAM1   hex(2101,0000, non-stripted mirror,64k)
        #define SRAM2   hex(2102,0000, non-stripted mirror,64k)
        #define SRAM3   hex(2103,0000, non-stripted mirror,64k)

    #define APB hex(4000,0000, APB:Advanced Peripheral Bus Bridge)
        #define SYSINFO     hex(4000,0000, APB)
        #define SYSCFG      hex(4000,4000, APB)
        #define CLOCKS      hex(4000,8000, APB)

        #define RESETS      hex(4000,c000, APB)
            #define RESETS_RESET hex(4000,c000, 0:(ADC),1:(BUSCTRL),2:(DMA),3:(I2C0),4:(I2C1),5:(IO_BANK0),6:(IO_QSPI),7:(JTAG),8:(PADS_BNAK0),9:(PADS_QSPI),10:(PIO0),11:(PIO1),12:(PLL_SYS),13:(PLL_USB),14:(PWM),15:(RTC),16:(SPI0),17:(SPI1),18:(SYSCFG),19:(SYSINFO),20:(TBMAN),21:(TIMER),22:(UART0),23:(UART1),24:(USB_CTRL))
            #define RESETS_WDSEL hex(4000,c004, 0:(ADC)...)
            #define RESETS_DONE  hex(4000,c008, 0:(ADC)...)

        #define PSM         hex(4001,0000, APB)
        #define IO_BANK0   hex(4001,4000, APB)
            #define IO_BANK0_STATUS_0_29 hex(4001,4000, inc +8,)
            #define IO_BANK0_CTRL_0_29 hex(4001,4004, inc +8, 4:0<FUNCSEL>,sio_func == 5)
            
        #define IO_QSPI     hex(4001,8000, APB)
        #define PADS_BNAK0 hex(4001,c000, APB)
            #define PADS_BNAK0_VSEL hex(4001,c000, 0:<0x0=3.3v ,0x1=1.8v>)
            #define PADS_BNAK0_CRTL_0_29 hex(4001,c004, 7:OD(output disable),6:IE(input enable)
            #define PADS_BNAK0_SWCLK hex(4001,c07c)
        #define PADS_QSPI   hex(4002,0000, APB)
        #define XOSC        hex(4002,4000, APB)
        #define PLL_SYS     hex(4002,8000, APB)
        #define PLL_USB     hex(4002,c000, APB)
        #define BUS_CTRL    hex(4003,0000, APB)
        #define UART_0      hex(4003,4000, APB)
        #define UART_1      hex(4003,8000, APB)
        #define SPI_0       hex(4003,c000, APB)
        #define SPI_1       hex(4004,0000, APB)

    #define AHB hex(5000,0000, AHB:Advanced High Bus)
        #define DMA hex(5000,0000,AHB)
        #define USB hex(5010,0000,AHB)
        #define PIO0 hex(5020,0000,AHB)
        #define PIO1 hex(5030,0000,AHB)

    #define SIO hex(e000,0000, SIO:Single cycle I/O)
        #define SIO_CPUID   hex(e000,0000, 31:0 <-(0 ~ 1), core 0, core 1)
        #define SIO_IN      hex(e000,0004, 29:0 <-(0 ~ 29), input value for gpio 0 ~ 29)
        #define SIO_HI_IN   hex(e000,0008,  5:0 <-(SCLK,SSn,SD0,SD1,SD2,SD3))
        #define SIO_OUT         hex(e000,0010, 29:0 <-(0~29), set output level(high,log))
        #define SIO_OUT_SET     hex(e000,0014, 29:0 value set)
        #define SIO_OUT_CLR     hex(e000,0018, 29:0 value clear)
        #define SIO_OUT_XOR     hex(e000,001c, 29:0 value toggle)
        #define SIO_OE          hex(e000,0020, 29:0 set output enalbe)
        #define SIO_OE_SET      hex(e000,0024, 29:0 value set)
        #define SIO_OE_CLR      hex(e000,0028, 29:0 value clear)
        #define SIO_OE_XOR      hex(e000,002c, 29:0 value toggle)

    #define PPB hex(e000,0000, PPB:Private Peripheral Bus)
        #define VTOR hex(e000,ed08,PPB)

#endif // end of J_DEFINE_H
