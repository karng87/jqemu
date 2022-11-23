#ifndef J_PICO_ADDRESS_H
#define J_PICO_ADDRESS_H

#include "j_define.h"

#define T_FAST    100000 // micro second = 0.1 sec
#define T_SLOW    500000 // micro second = 0.5 sec

#define F_REF          12000000  //  12 Mhz
#define F_CPU          120000000 // 120 Mhz
#define F_PER          120000000 // 120 Mhz
#define F_RTC          (F_REF / 256) // Run Time Clock
#define F_TICK         1000000       // Tick 1Mhz

#define ROM hex_r(0000,0000, ROM:Ready Only Memory,16k,flash boot sequence)

#define XIP hex(1000,0000, XIP:eXecute In Place,2M)
    #define XIP_SSI hex(1800,0000,<Synchronous Serial Interface>)
    #define XIP_SSI_CTRLR0 hex_r(1800,0000,00)
        #define posi_xsc0_DFS         bitmask( 0,<~3|Data Frame Size)
        #define posi_xsc0_FRF         bitmask( 4,<~5|FRame Format)
        #define posi_xsc0_SCPH        bitmask( 6,<~6|Serial Clock PHase)
        #define posi_xsc0_SCPOL       bitmask( 7,<~7|Serial Clock POLatiry)
        #define posi_xsc0_TMOD        bitmask( 8,<~9|TRANSFER MODE:8>|<0:both><1:tr only><2:re only><3:EEPROM read mode)>)
        #define posi_xsc0_SLV_OE      bitmask(10,<~10|SLaVe Output Enable)
        #define posi_xsc0_SLR         bitmask(11,<~11|Shift Register Loop)
        #define posi_xsc0_CFS         bitmask(12,<~15|Control Frame Size, n+1 clocks per frame)
        #define posi_xsc0_DFS_32      bitmask(16,<~20|DATA FRAME SIZE in 32b|<transfer mode:n+1 clocks per frame>)
        #define posi_xsc0_SPI_FRF     bitmask(21,<SPI FRame Format:21>, 0<<(1-bit per SCK), 1<<(2-bit per SCK), 2<<(4-bit per SCK), frame format>)
        #define posi_xsc0_SSTE        bitmask(24,<~24| Slave select toggle enable)

    #define XIP_SSI_CTRLR1 hex_r(1800,0004,00)
        #define posi_xsc1_NDF bitmask( 0,<~15|NUMBER of DATA FRAMES>)

    #define XIP_SSI_SSIENR hex_r(1800,0000,08,<Synchronous Serial Interface Enable reg>)
        #define posi_xss_SSI_EN bitmask(0,<~0|SSI Enable>)

    #define XIP_SSI_MWCR hex_r(1800,0000,0c, Microwire Control)

    #define XIP_SSI_SENR hex_r(1800,0000,10,<Slave Enable>)
        #define posi_xss_SEL bitmask(0, <~0|Slave Select, 0<<(not selected), 1<<(slave selected))

    #define XIP_SSI_BAUDR hex_r(1800,0000,14, Baud Rate)
        #define posi_xsb_SCKDV bitmask(0,<~15|ClocK DiVider>)

    #define XIP_SSI_TXFTLR hex_r(1800,0000,18, TX FIFO Threshold level)
        #define posi_xst_TFT bitmask(0,<~7| Transmit FIFO Threshold)

    #define XIP_SSI_RXFTLR hex_r(1800,0000,1c, RX FIFO Threshold level)
        #define posi_xsr_RFT bitmask(0,<~7| Recieve FIFO Threshold)

    #define XIP_SSI_TXFLR hex_r(1800,0000,20, TX FIFO level)
        #define posi_xst_TFL bitmask(0,<~7| Transmit FIFO Level)

    #define XIP_SSI_RXFLR hex_r(1800,0000,24, RX FIFO level)
        #define posi_xsr_RFL bitmask(0,<~7| Recieve FIFO Level)

    #define XIP_SSI_SR hex_r(1800,0000,28, Status Regiser)
        #define posi_xss_BUSY bitmask(0,<~0| SSI busy flag )
        #define posi_xss_TFNF bitmask(1,<~1| Transmit FIFO Not Full)
        #define posi_xss_TFE  bitmask(2,<~2| Transmit FIFO Empty)
        #define posi_xss_RFNE  bitmask(3,<~3| Recieve FIFO Not Empty)
        #define posi_xss_RFF  bitmask(4,<~4| Recieve FIFO Full)
        #define posi_xss_TXE  bitmask(5,<~5| Transmission Error)
        #define posi_xss_DCOL bitmask(6,<~6| Data COLlision error)

    #define XIP_SSI_IMR hex_r(1800,0000,2c,<Interrupt Mask Reg>)

    #define XIP_SSI_ISR hex_r(1800,0000,30,<Interrupt Status Res>)

    #define XIP_SSI_RISR hex_r(1800,0000,34,<Raw Interrupt Status Reg)

    #define XIP_SSI_DR0 hex_r(1800,0000,60,<Data Reg>)
        #define posi_xsd_DR bitmask(0,<~31| First Data regitster of 36)

    #define XIP_SSI_RX_SAMPLE_DLY hex_r(1800,0000,f0,<RX Sample Delay>)
        #define posi_xsrsd_RSD bitmask(0,<~7| SSI RX Sample Delay flag)

    #define XIP_SSI_SPI_CTRLR0 hex_r(1800,0000,f4,<Serial Peripheral Interface>)
        #define posi_xssc_TRANS_TYPE bitmask(0,<~1|Address and Instruction transfer format|<0x0,0x1,0x2>)
        #define posi_xssc_ADDR_L     bitmask(2,<~5|ADDRESS_LENGTH>)
        #define posi_xssc_INST_L     bitmask(8,<~9|INSTtruction Length)
        #define posi_xssc_WAIT_CYCLES bitmask(11,<~15|Wait cycles between control frame transmit and data reception)
        #define posi_xssc_DDR_EN bitmask(16,<~16|SPI DDR transfer enable) 
        #define posi_xssc_INST_DDR_EN bitmask(17,<~17|Instrcution DDR transfer enable) 
        #define posi_xssc_SPI_RXDS_EN bitmask(18,<~18|Read Data Strobe Enable) 
        #define posi_xssc_XIP_CMD bitmask(24,<~31|XIP COMMAND to send in XIP mode||INST_L = 8-bit or to append to Address (INST_L = 0-bit)>)


#define RAM hex(2000,0000,<RAM:Random Access Memory,264k, 6-bank, 64k * 4, 4k * 2>)
    #define SRAM    hex(2000,0000,<256k==0x40000>)
    #define SRAM_X  hex(2004,0000,<4k==0x1000>)
    #define SRAM_Y  hex(2004,1000,<4k==0x1000>)
    #define SRAM0   hex(2100,0000,<non-stripted mirror,64k>)
    #define SRAM1   hex(2101,0000,<non-stripted mirror,64k>)
    #define SRAM2   hex(2102,0000,<non-stripted mirror,64k>)
    #define SRAM3   hex(2103,0000,<non-stripted mirror,64k>)

#define APB hex(4000,0000,<APB:Advanced Peripheral Bus Bridge>)
    #define APB_SYSINFO hex(4000,0000)
    #define APB_SYSCFG  hex(4000,4000)

    #define APB_CLOCKS  hex(4000,8000)
        #define APB_CLK_REF_CTRL hex_r(4000,8000,30,<REFERENCE CLOCK CTRL>)
            #define posib_acr_SRC bitmask(0,<~1|SRC>)
                #define sb_rosc_clksrc_ph 0
                #define sb_clksrc_clk_ref_aux 1
                #define sb_xosc_clk_src 2

        #define APB_CLK_SYS_CTRL hex_r(4000,8000,3c,<SYSTEM CLOCK CTRL>)
            #define posib_acs_SRC bitmask(0,<~0|SRC||0=clk_ref,1=clksrc_clk_sys_aux>)
            #define posib_acs_AUXSRC bitmask(5,<~7|AUXSRC||0=clksrc_pll_sys,1=clksrc_pll_usb>)

        #define APB_CLK_PERI_CTRL hex_r(4000,8000,48)
                #define posib_acpc_AUXSRC bitmask(5,<~7||0:clk_sys,1:clksrc_pll_sys>)
                #define posib_acpc_KILL bitmask(10,<~10|Asynchronously kills the clock generator>)
                #define posib_acpc_ENABLE bitmask(11,<~11|starts and stops the clock generator cleanly>)

        #define APB_CLK_USB_CTRL hex_r(4000,8000,54)
                #define posib_acuc_AUXSRC bitmask(5,<~7|0:clksrc_pll_usb,1:clksrc_pll_sys>)
                #define posib_acuc_KILL bitmask(10,<~10|Asynchronously kills the clock generator>)
                #define posib_acuc_ENABLE bitmask(11,<~11|starts and stops the clock generator cleanly>)

        #define APB_CLK_ADC_CTRL hex_r(4000,8000,60)
                #define posib_acac_AUXSRC bitmask(5,<~7|0:clksrc_pll_usb,1:clksrc_pll_sys>)
                #define posib_acac_KILL bitmask(10,<~10|Asynchronously kills the clock generator>)
                #define posib_acac_ENABLE bitmask(11,<~11|starts and stops the clock generator cleanly>)

        #define APB_CLK_RTC_CTRL hex_r(4000,8000,6c)
                #define posib_acrc_AUXSRC bitmask(5,<~7||0:clksrc_pll_usb,1:clksrc_pll_sys,3:xosc_clksrc>)
                #define posib_acrc_KILL bitmask(10,<~10|Asynchronously kills the clock generator>)
                #define posib_acrc_ENABLE bitmask(11,<~11|starts and stops the clock generator cleanly>)

        #define APB_CLK_RTC_DIV hex_r(4000,8000,70)
                #define posib_acrd_FRAC bitmask(0,<~7|Fractiinal component of the divisor>)
                #define posib_acrd_INT bitmask(8,<~31|Integer component of the divisor|0:divide by 2^16>)

        #define APB_CLK_SYS_RESUS_CTRL hex_r(4000,8000,78,<SYSTEM RESUSCURE CTRL>)
            #define posb_acr_TIMEOUT bitmask(0,<~7>)
            #define posb_acr_ENABLE bitmask(8,<~8>)
            #define posb_acr_FRCE bitmask(12,<~8|Force resus>)
            #define posb_acr_CLEAR bitmask(16,<~16>)

    #define APB_XOSC             hex(4002,4000,<EXTERNAL OSCILATOR COUNTER>)
        #define APB_XOSC_CTRL    hex_r(4002,4000,00)
            #define posib_axc_FREQ_RANGE bitmask(0,<~11|Frequency Range|0xaa0:1~15MHz>)
            #define posib_axc_ENABLED bitmask(12,<~23|>)
                #define enable_ROSC bshift(0xfab,12,<Ring Oscillator Enable)
                #define disable_ROSC bshift(0xdle,12,<Ring Oscillator Disable)

        #define APB_XOSC_STATUS  hex_r(4002,4000,04)
            #define posib_axs_STABLE bitmask(31,<~31|Running and Stable>)

        #define APB_XOSC_STARTUP hex_r(4002,4000,0C)
            #define posib_axs_DELAY bitmask(0,<~13|Delay>)

    #define APB_RESETS  hex(4000,c000)
        #define APB_RESETS_RESET hex_r(4000,c000,00,<0:(ADC),1:(BUSCTRL),2:(DMA),3:(I2C0),4:(I2C1),5:(IO_BANK0),6:(IO_QSPI),7:(JTAG),8:(PADS_BNAK0),9:(PADS_QSPI),10:(PIO0),11:(PIO1),12:(PLL_SYS),13:(PLL_USB),14:(PWM),15:(RTC),16:(SPI0),17:(SPI1),18:(SYSCFG),19:(SYSINFO),20:(TBMAN),21:(TIMER),22:(UART0),23:(UART1),24:(USB_CTRL)>)
            #define posib_prr_IO_BANK0 bitmask(5,<1>)
            #define posib_prr_PADS_BANK0 bitmask(8,<1>)
            #define posib_prr_PLL_SYS bitmask(12,<1>)
            #define posib_prr_PLL_USB bitmask(13,<1>)
            #define posib_prr_UART0 bitmask(22,<1>)
            #define posib_prr_UART1 bitmask(23,<1>)


        #define APB_RESETS_WDSEL hex_r(4000,c000,04,<0:(ADC)...>)

        #define APB_RESETS_DONE  hex_r(4000,c000,08,<0:(ADC)...>)
            #define posib_prd_IO_BANK0 bitmask(5)
            #define posib_prd_PADS_BANK0 bitmask(8)
            #define posib_prd_PLL_SYS bitmask(12)
            #define posib_prd_PLL_USB bitmask(13)

    #define APB_PSM         hex(4000,10000, APB)
    #define APB_IO_BANK0    hex(4000,14000, APB)
        #define APB_IO_BANK0_STATUS_0_29 hex_r(4000,1400,000, inc +8,)
        #define APB_IO_BANK0_CTRL_0_29 hex_r(4000,1400,004, inc +8, sio_func == 5)
            #define posib_FUNCSEL bitmask(0,~4, Functon select 31==NULL)
        
    #define APB_IO_QSPI     hex(4000,18000, APB)
    #define APB_PADS_BNAK0  hex(4000,1c000, APB)
        #define APB_PADS_BNAK0_VSEL hex_r(4000,1c00,000, Voltage Select reg,0:<0x0=3.3v ,0x1=1.8v>)

        #define APB_PADS_BNAK0_GPIO_0_29 hex_r(4000,1c00,004, 7:OD(output disable),6:IE(input enable)
            #define posib_ppbgpio_IE bitmask(6, Input Enable)
            #define posib_ppbgpio_OD bitmask(7, Output Disable)

        #define APB_PADS_BNAK0_SWCLK hex_r(4000,1c00,07c)

    #define APB_PADS_QSPI   hex(4002,0000, APB)
        #define APB_PADS_QSPI_VOLTAGE hex_r(4002,0000,00,VOLTAGE SELECT R, 0:<0=2V5,1=1V8>)
        #define APB_PADS_QSPI_SCLK hex_r(4002,0000,04, Serial CLOCK)
            #define posib_ppqs_slew  bitmask(0, <~0| 0->slow, 1->fast,Slew rate control)
            #define posib_ppqs_drive bitmask(4, <~5| 0->2mA, 1->4mA, 2->8mA, 3->12mA>,,Drive strength)
        #define APB_PADS_QSPI_SD0 hex_r(4002,0000, 8, Serial Data 0)
            #define posib_ppqs_SLEW bitmask(0, <~0| 1->fast,0->slow)
            #define posib_ppqs_SCHMITT bitmask(1, <~1| Enable schmitt trigger)

        #define APB_PADS_QSPI_SD1 hex_r(4002,0000,0c, Serial Data 1)
        #define APB_PADS_QSPI_SD2 hex_r(4002,0000,10, Serial Data 2)
        #define APB_PADS_QSPI_SD3 hex_r(4002,0000,14, Serial Data 3)

    #define APB_PLL_SYS     hex(4002,8000, APB)
        #define APB_PLL_SYS_CS hex_r(4002,8000,00,<CONTROL and STATUS reg>)
            #define posib_ppsc_REFDIV bitmask(0,<~5|Divides the PLL input reference clock>)
            #define posib_ppsc_BYPASS bitmask(8,<~8|<passes the ref clock to the output>)
            #define posib_ppsc_LOCK   bitmask(31,<~31|<PLL is locked>)

        #define APB_PLL_SYS_PWR        hex_r(4002,8000,04,<POWER modes reg>)
            #define posib_ppsp_PD bitmask(0,<~0|PLL Power Down>)
            #define posib_ppsp_POSTDIVPD bitmask(3,<~3|PLL post divider power down>)
            #define posib_ppsp_VCOPD  bitmask(5,<~5|PLL Voltage Controlled Oscilator Power Down>)

        #define APB_PLL_SYS_FBDIV_INT  hex_r(4002,8000,08,<FEED BACK DEVISOR reg>)
            #define posib_ppsf_see  bitmask(0,<~11|interrupt:see ctrl reg description for constraints>)

        #define APB_PLL_SYS_PRIM       hex_r(4002,8000,0c,<PRIMARY OUTPUT reg,NOT SECONDARY OUTPUT>)
            #define posibb_ppsp_POSTDIV1 bitmask(12,<~14|divide by 1-7>)
            #define posibb_ppsp_POSTDIV2 bitmask(16,<18|divide by 1-7>)

    #define APB_PLL_USB     hex(4002,c000, APB)
        #define APB_PLL_USB_CS hex_r(4002,c000,00,<CONTROL and STATUS reg>)
            #define posib_ppuc_REFDIV bitmask(0,~5,<Divides the PLL input reference clock>)
            #define posib_ppuc_BYPASS bitmask(8,~8,<passes the ref clock to the output>)
            #define posib_ppuc_LOCK   bitmask(31,~31,<PLL is locked>)

        #define APB_PLL_USB_PWR        hex_r(4002,c000,04,<POWER modes reg>)
            #define posib_ppup_PD bitmask(0,<~0|PLL Power Down>)
            #define posib_ppup_POSTDIVPD bitmask(3,<~3|PLL post divider power down>)
            #define posib_ppup_VCOPD  bitmask(5,<~5|PLL Voltage Controlled Oscilator Power Down>)

        #define APB_PLL_USB_FBDIV_INT  hex_r(4002,c000,08,<FEED BACK DEVISOR reg>)
            #define posib_ppuf_see  bitmask(0,<~11|interrupt:see ctrl reg description for constraints>)

        #define APB_PLL_USB_PRIM       hex_r(4002,c000,0c,<PRIMARY output reg>)
            #define posibb_ppup_POSTDIV1 bitmask(12,<~14|divide by 1-7>)
            #define posibb_ppup_POSTDIV2 bitmask(16,<~18|divide by 1-7>)

    #define APB_BUS_CTRL    hex(4003,0000, APB)

    #define APB_UART0      hex(4003,4000, APB)
        #define APB_UART0_UARTDR hex_r(4003,4000,000,<Data Reg>)
        #define APB_UART0_UARTRSR hex_r(4003,4000,004,<Receive Status Reg>)
        #define APB_UART0_FR hex_r(4003,4000,018,<Flag Reg>)
        #define APB_UART0_ILPR hex_r(4003,4000,020,<IrDA Low-Power Counter Reg>)
        #define APB_UART0_IBRD hex_r(4003,4000,024,<Integer Baud Rate Divider Reg||quotient>)
        #define APB_UART0_FBRD hex_r(4003,4000,028,<Fractional Baud Rate Divider Reg||remainer>)
        #define APB_UART0_LCR_H hex_r(4003,4000,02c,<Line Control Reg>)
            #define posib_pul_BRK bitmask(0,<~0||1:Send Break||0:for nomal use)
            #define posib_pul_PEN bitmask(1,<~1||1:Parity enable||0:disable)
            #define posib_pul_EPS bitmask(2,<~2||1:even Parity Select||0:odd)
            #define posib_pul_STP2 bitmask(3,<~3||1:2 stop bit select)
            #define posib_pul_FEN bitmask(4,<~4||1:FIFO Enable)
            #define posib_pul_WLEN bitmask(5,<~6||3:8bits|2:7bits|1:6bit|0|5bit>)
            #define posib_pul_SPS bitmask(7,<~7||Stick Parity Select>)
        #define APB_UART0_CR hex_r(4003,4000,030,<Control Reg>)
            #define posib_puc_UARTEN bitmask(0,<~0|Uart Enable>)
            #define posib_puc_TXE bitmask(8,<~8|Recieve Enable>)
            #define posib_puc_RXE bitmask(8,<~8|Transmit Enable>)

    #define APB_UART1      hex(4003,8000, APB)
        #define APB_UART1_UARTDR hex_r(4003,8000,000,<Data Reg>)
        #define APB_UART1_UARTRSR hex_r(4003,8000,004,<Receive Status Reg>)
        #define APB_UART1_FR hex_r(4003,8000,018,<Flag Reg>)
        #define APB_UART1_ILPR hex_r(4003,8000,020,<IrDA Low-Power Counter Reg>)
        #define APB_UART1_IBRD hex_r(4003,8000,024,<Integer Baud Rate Divider Reg>)
        #define APB_UART1_FBRD hex_r(4003,8000,028,<Fractional Baud Rate Divider Reg>)
        #define APB_UART1_LCR_H hex_r(4003,8000,02c,<Line Control Reg>)
        #define APB_UART1_CR hex_r(4003,8000,030,<Control Reg>)

    #define APB_SPI0       hex(4003,c000, APB)
    #define APB_SPI1       hex(4004,0000, APB)

    #define APB_TIMER hex(4005,4000)
        #define APB_TIMER_TIMEHW hex_r(4005,4000,00,<HIGH WRITE>)
        #define APB_TIMER_TIMELW hex_r(4005,4000,04,<LOW WRITE)
        #define APB_TIMER_TIMEHR hex_r(4005,4000,08,<HIGH READ)
        #define APB_TIMER_TIMELR hex_r(4005,4000,0c,<LOW READ)
//----------- armed 무장하다 ----
// Arm alarm 0, and configure the time it will fire.
// Once armed, the alarm fires when TIMER_ALARM0 == TIMELR.
// The alarm will disarm itself once it fires, and can be disarmed 
//      early using the ARMED status register.
//----------------------------------
        #define APB_TIMER_ALAM0 hex_r(4005,4000,10,<Arm alam 0)
        #define APB_TIMER_ALAM1 hex_r(4005,4000,14,<Arm alam 1)
        #define APB_TIMER_ALAM2 hex_r(4005,4000,18,<Arm alam 1)
        #define APB_TIMER_ALAM3 hex_r(4005,4000,1c,<Arm alam 1)
        #define APB_TIMER_ARMED hex_r(4005,4000,20,<indicats the armed/disarmed status of each alarm>)
        #define APB_TIMER_INTE  hex_r(4005,4000,38,<Interrupt ENABLE|0:alarm0,1:alram1...>)

    #define APB_WATCHDOG hex(4005,8000)
        #define APB_WATCHDOG_TICK hex_r(4005,8000,2c)
            #define posb_awt_CYCLES bitmask(0,<~8|total number of clk_tick cycles before the next tick>)
            #define posb_awt_ENABLE bitmask(9,<~9|start/stop tick generation>)
            #define posb_awt_RUNNING bitmask(10,<~10|is the tick generator running?>)
            #define posb_awt_COUNT bitmask(11,<~19|Count down timer:remaining num clk_tick cyes before the next tick is genrated>)

#define AHB hex(5000,0000, AHB:Advanced High Bus)
    #define AHB_DMA hex(5000,0000,<Direct Memory Acess>)
        #define AHB_DMA_CH0_READ_ADDR hex_r(5000,0000,00,<DMA Channel 0 Read Address pointer>)
        #define AHB_DMA_INTR hex_r(5000,0000,400,<Interrupt Status (raw)>)
        #define AHB_DMA_TIMER0 hex_r(5000,0000,418,<Pacing(X/Y) Fractional Timer>)

    #define AHB_USB hex(5011,0000)
        #define AHB_USB_ADDR_ENDP hex_r(5011,0000,00)

    #define AHB_PIO0 hex(5020,0000,<Programmable I/O>)
    #define AHB_PIO1 hex(5030,0000)

#define SIO hex(d000,0000, SIO:Single cycle I/O)
    #define SIO_CPUID   hex_r(d000,0000,00, 31:0 <-(0 ~ 1), core 0, core 1)
    #define SIO_IN      hex_r(d000,0004,00, 29:0 <-(0 ~ 29), input value for gpio 0 ~ 29)
    #define SIO_HI_IN   hex_r(d000,0008,00,  5:0 <-(SCLK,SSn,SD0,SD1,SD2,SD3))
    #define SIO_OUT     hex_r(d000,0010,00, 29:0 <-(0~29), set output level(high,log))
    #define SIO_OUT_SET hex_r(d000,0014,00, 29:0 value set)
    #define SIO_OUT_CLR hex_r(d000,0018,00, 29:0 value clear)
    #define SIO_OUT_XOR hex_r(d000,001c,00, 29:0 value toggle)
    #define SIO_OE      hex_r(d000,0020,00, 29:0 set output enalbe)
    #define SIO_OE_SET  hex_r(d000,0024,00, 29:0 value set)
    #define SIO_OE_CLR  hex_r(d000,0028,00, 29:0 value clear)
    #define SIO_OE_XOR  hex_r(d000,002c,00, 29:0 value toggle)

#define PPB hex(e000,0000,<Private Peripheral Bus>)
#define M0PLUS hex(e000,0000,<Cortex-m0plus>)
    #define PPB_SYST_CSR hex_r(e000,e010,00,<Systic Control Status Reg)
        #define posib_msc_CNTEN bitmask(0,<~0|Counter Enable||0:disable,1:enable>)
        #define posib_msc_TICKINT bitmask(1,<~1|Tick Interrupt>)
        #define posib_msc_CLKSRC bitmask(2,<~2|<0~External Reference Clock,1:Processor Clock >)
        #define posib_msc_COUNT_FLAG bitmask(16,<~16|return 1 if timer coounted to 0>)

    #define PPB_SYST_RVR hex_r(e000,e014,00,<Systic Reload Value Reg>)

    #define PPB_SYST_CVR hex_r(e000,e018,00,<Systic Current Value Reg>)

    #define PPB_NVIC_ISER hex_r(e000,e100,00,<Nested Vector Interrupt Controller Set-Enable Reg>)

    #define PPB_NVIC_ICER hex_r(e000,e180,00,<Nested Vector Interrupt Controller Clear-Enable Reg>)

    #define PPB_NVIC_ISPR hex_r(e000,e200,00,<Nested Vector Interrupt Controller Set-Pending Reg>)

    #define PPB_NVIC_ICPR hex_r(e000,e200,00,<Nested Vector Interrupt Controller Clear-Pending Reg>)

    #define PPB_CPUID hex_r(e000,ed00,00,<CPUID Base Regsiter>)

    #define PPB_ICSR hex_r(e000,ed04,00,<Interrupt Control State Reg>)

    #define PPB_VTOR hex_r(e000,ed08,00,<Vector Table Offset Reg>)

    #define PPB_AIRCR hex_r(e000,ed0c,00,<Application Interrupt Reset Control Reg>)

    #define PPB_SCR hex_r(e000,ed10,00,<System Control Reg>)

    #define PPB_CCR hex_r(e000,ed10,00,<Configuration Control Reg>)

    #define PPB_MPU_RASR hex_r(e000,eda0,00,<MPU Region Attribute Size Reg>)


#endif // end of J_DEFINE_H
