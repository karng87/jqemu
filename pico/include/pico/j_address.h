#ifndef J_PICO_ADDRESS_H
#define J_PICO_ADDRESS_H

#include "j_define.h"

#define ROM hex(0000,0000, ROM:Ready Only Memory,16k,flash boot sequence)

#define XIP hex(1000,0000, XIP:eXecute In Place,2M)
    #define XIP_SSI hex(1800,0000,<Synchronous Serial Interface>)
    #define XIP_SSI_CTRLR0 hex(1800,0000)
        #define posi_xsc0_DFS         posib( 0,:3,Data Frame Size)
        #define posi_xsc0_FRF         posib( 4,:5,FRame Format)
        #define posi_xsc0_SCPH        posib( 6,:6,Serial Clock PHase)
        #define posi_xsc0_SCPOL       posib( 7,:7,Serial Clock POLatiry)
        #define posi_xsc0_TMOD        posib( 8,<TRANSFER MODE:8>|<0:both><1:tr only><2:re only><3:EEPROM read mode)>)
        #define posi_xsc0_SLV_OE      posib(10,:10,SLaVe Output Enable)
        #define posi_xsc0_SLR         posib(11,:11,Shift Register Loop)
        #define posi_xsc0_CFS         posib(12,:15,Control Frame Size, n+1 clocks per frame)
        #define posi_xsc0_DFS_32      posib(16,<DATA FRAME SIZE in 32b:16~20>|<transfer mode:n+1 clocks per frame>)
        #define posi_xsc0_SPI_FRF     posib(21,<SPI FRame Format:21>, 0<<(1-bit per SCK), 1<<(2-bit per SCK), 2<<(4-bit per SCK), frame format>)
        #define posi_xsc0_SSTE        posib(24,:24, Slave select toggle enable)

    #define XIP_SSI_CTRLR1 hex(1800,0004)
        #define posi_xsc1_NDF posib( 0,<NUMBER of DATA FRAMES:0~15>)

    #define XIP_SSI_SSIENR hex(1800,0008,<Synchronous Serial Interface Enable reg>)
        #define posi_xss_SSI_EN posib(0,<SSI Enable:0>)

    #define XIP_SSI_MWCR hex(1800,000c, Microwire Control)

    #define XIP_SSI_SENR hex(1800,0010,<Slave Enable>)
        #define posi_xss_SEL posib(0, :0, Slave Select, 0<<(not selected), 1<<(slave selected))

    #define XIP_SSI_BAUDR hex(1800,0014, Baud Rate)
        #define posi_xsb_SCKDV posib(0,<ClocK DiVider:0~15>)

    #define XIP_SSI_TXFTLR hex(1800,0018, TX FIFO Threshold level)
        #define posi_xst_TFT posib(0, :7, Transmit FIFO Threshold)

    #define XIP_SSI_RXFTLR hex(1800,001c, RX FIFO Threshold level)
        #define posi_xsr_RFT posib(0, :7, Recieve FIFO Threshold)

    #define XIP_SSI_TXFLR hex(1800,0020, TX FIFO level)
        #define posi_xst_TFL posib(0, :7, Transmit FIFO Level)

    #define XIP_SSI_RXFLR hex(1800,0024, RX FIFO level)
        #define posi_xsr_RFL posib(0, :7, Recieve FIFO Level)

    #define XIP_SSI_SR hex(1800,0028, Status Regiser)
        #define posi_xss_BUSY posib(0, :0, SSI busy flag )
        #define posi_xss_TFNF posib(1, :1, Transmit FIFO Not Full)
        #define posi_xss_TFE  posib(2, :2, Transmit FIFO Empty)
        #define posi_xss_RFNE  posib(3, :3, Recieve FIFO Not Empty)
        #define posi_xss_RFF  posib(4, :4, Recieve FIFO Full)
        #define posi_xss_TXE  posib(5, :5, Transmission Error)
        #define posi_xss_DCOL posib(6, :6, Data COLlision error)

    #define XIP_SSI_IMR hex(1800,002c,<Interrupt Mask Reg>)

    #define XIP_SSI_ISR hex(1800,0030,<Interrupt Status Res>)

    #define XIP_SSI_RISR hex(1800,0034,<Raw Interrupt Status Reg)

    #define XIP_SSI_DR0 hex(1800,0060,<Data Reg>)
        #define posi_xsd_DR posib(0, :31, First Data regitster of 36)

    #define XIP_SSI_RX_SAMPLE_DLY hex(1800,00f0,<RX Sample Delay>)
        #define posi_xsrsd_RSD posib(0, :7, SSI RX Sample Delay flag)

    #define XIP_SSI_SPI_CTRLR0 hex(1800,00f4,<Serial Peripheral Interface>)
        #define posi_xssc_TRANS_TYPE posib(0,<Address and Instruction transfer format:0~1>|<0x0,0x1,0x2>)
        #define posi_xssc_ADDR_L     posib(2,<ADDRESS_LENGTH:2~5>)
        #define posi_xssc_INST_L     posib(8, :9, INSTtruction Length)
        #define posi_xssc_WAIT_CYCLES posib(11, :15, Wait cycles between control frame transmit and data reception)
        #define posi_xssc_DDR_EN posib(16, :16, SPI DDR transfer enable) 
        #define posi_xssc_INST_DDR_EN posib(17, :17, Instrcution DDR transfer enable) 
        #define posi_xssc_SPI_RXDS_EN posib(18, :18, Read Data Strobe Enable) 
        #define posi_xssc_XIP_CMD posib(24,<XIP COMMAND to send in XIP mode:24~31><INST_L = 8-bit or to append to Address (INST_L = 0-bit)>)


#define RAM hex(2000,0000, RAM:Random Access Memory,264k, 6-bank, 64k * 4, 4k * 2)
    #define SRAM    hex(2000,0000,<256k==0x40000>)
    #define SRAM_X  hex(2004,0000,<4k==0x1000>)
    #define SRAM_Y  hex(2004,1000,<4k==0x1000>)
    #define SRAM0   hex(2100,0000,<non-stripted mirror,64k>)
    #define SRAM1   hex(2101,0000,<non-stripted mirror,64k>)
    #define SRAM2   hex(2102,0000,<non-stripted mirror,64k>)
    #define SRAM3   hex(2103,0000,<non-stripted mirror,64k>)

#define APB hex(4000,0000,<APB:Advanced Peripheral Bus Bridge>)
    #define APB_SYSINFO hex(4000,0000,)
    #define APB_SYSCFG  hex(4000,4000,)

    #define APB_CLOCKS  hex(4000,8000)
        #define APB_CLK_REF_CTRL hex(4000,8030,<REFERENCE CLOCK CTRL>)
            #define posib_acr_SRC posib(0,~1<SRC>)
                #define sb_rosc_clksrc_ph 0
                #define sb_clksrc_clk_ref_aux 1
                #define sb_xosc_clk_src 2

        #define APB_CLK_SYS_CTRL hex(4000,803c,<SYSTEM CLOCK CTRL>)
            #define posib_acs_SRC posib(0,~0<SRC|0=clk_ref,1=clksrc_clk_sys_aux>)
            #define posib_acs_AUXSRC posib(5,~7<AUXSRC|0=clksrc_pll_sys,1=clksrc_pll_usb>)

        #define APB_CLK_PERI_CTRL hex(4000,8048)
                #define posib_acpc_AUXSRC posb(5,~7<0:clk_sys,1:clksrc_pll_sys>)
                #define posib_acpc_KILL posb(10,~10<Asynchronously kills the clock generator>)
                #define posib_acpc_ENABLE posb(11,~11<starts and stops the clock generator cleanly>)

        #define APB_CLK_USB_CTRL hex(4000,8054)
                #define posib_acuc_AUXSRC posb(5,~7<0:clksrc_pll_usb,1:clksrc_pll_sys>)
                #define posib_acuc_KILL posb(10,~10<Asynchronously kills the clock generator>)
                #define posib_acuc_ENABLE posb(11,~11<starts and stops the clock generator cleanly>)

        #define APB_CLK_ADC_CTRL hex(4000,8060)
                #define posib_acac_AUXSRC posb(5,~7<0:clksrc_pll_usb,1:clksrc_pll_sys>)
                #define posib_acac_KILL posb(10,~10<Asynchronously kills the clock generator>)
                #define posib_acac_ENABLE posb(11,~11<starts and stops the clock generator cleanly>)

        #define APB_CLK_RTC_CTRL hex(4000,806c)
                #define posib_acrc_AUXSRC posb(5,~7<0:clksrc_pll_usb,1:clksrc_pll_sys,3:xosc_clksrc>)
                #define posib_acrc_KILL posb(10,~10<Asynchronously kills the clock generator>)
                #define posib_acrc_ENABLE posb(11,~11<starts and stops the clock generator cleanly>)

        #define APB_CLK_RTC_DIV hex(4000,8070)
                #define posib_acrd_FRAC posb(0,~7<Fractiinal component of the divisor>)
                #define posib_acrd_INT posb(8,~31<Integer component of the divisor|0:divide by 2^16>)

        #define APB_CLK_SYS_RESUS_CTRL hex(4000,8078,<SYSTEM RESUSCURE CTRL>)
            #define posb_acr_TIMEOUT posib(0,:7<>)
            #define posb_acr_ENABLE posib(8,:8<>)
            #define posb_acr_FRCE posib(12,:8<Force resus>)
            #define posb_acr_CLEAR posib(16,:16<>)

    #define APB_XOSC             hex(4002,4000,<EXTERNAL OSCILATOR COUNTER>)
        #define APB_XOSC_CTRL    hex(4002,4000)
            #define posib_axc_FREQ_RANGE posib(0,~11<Frequency Range|0xaa0:1~15MHz>)
            #define posib_axc_ENABLED posib(12,~23<>)
                #define enable_ROSC bshift(0xfab,12,<Ring Oscillator Enable)
                #define disable_ROSC bshift(0xdle,12,<Ring Oscillator Disable)

        #define APB_XOSC_STATUS  hex(4002,4004)
            #define posib_axs_STABLE posib(31,~31<Running and Stable>)

        #define APB_XOSC_STARTUP hex(4002,400C)
            #define posib_axs_DELAY posib(0,~13<Delay>)

    #define APB_RESETS  hex(4000,c000)
        #define APB_RESETS_RESET hex(4000,c000,<0:(ADC),1:(BUSCTRL),2:(DMA),3:(I2C0),4:(I2C1),5:(IO_BANK0),6:(IO_QSPI),7:(JTAG),8:(PADS_BNAK0),9:(PADS_QSPI),10:(PIO0),11:(PIO1),12:(PLL_SYS),13:(PLL_USB),14:(PWM),15:(RTC),16:(SPI0),17:(SPI1),18:(SYSCFG),19:(SYSINFO),20:(TBMAN),21:(TIMER),22:(UART0),23:(UART1),24:(USB_CTRL)>)
            #define posib_arr_IO_BANK0 posb(5)
            #define posib_arr_PADS_BANK0 posb(8)
            #define posib_arr_PLL_SYS posb(12)
            #define posib_arr_PLL_USB posb(13)

        #define APB_RESETS_WDSEL hex(4000,c004,<0:(ADC)...>)

        #define APB_RESETS_DONE  hex(4000,c008,<0:(ADC)...>)
            #define posib_ard_IO_BANK0 posb(5)
            #define posib_ard_PADS_BANK0 posb(8)
            #define posib_ard_PLL_SYS posb(12)
            #define posib_ard_PLL_USB posb(13)

    #define APB_PSM         hex(4000,10000, APB)
    #define APB_IO_BANK0    hex(4000,14000, APB)
        #define APB_IO_BANK0_STATUS_0_29 hex(4000,14000, inc +8,)
        #define APB_IO_BANK0_CTRL_0_29 hex(4000,14004, inc +8, sio_func == 5)
            #define posib_FUNCSEL posib(0,~4, Functon select 31==NULL)
        
    #define APB_IO_QSPI     hex(4000,18000, APB)
    #define APB_PADS_BNAK0  hex(4000,1c000, APB)
        #define APB_PADS_BNAK0_VSEL hex(4000,1c000, Voltage Select reg,0:<0x0=3.3v ,0x1=1.8v>)

        #define APB_PADS_BNAK0_GPIO_0_29 hex(4000,1c004, 7:OD(output disable),6:IE(input enable)
            #define posib_apbgpio_IE posib(6, Input Enable)
            #define posib_apbgpio_OD posib(7, Output Disable)

        #define APB_PADS_BNAK0_SWCLK hex(4000,1c07c)

    #define APB_PADS_QSPI   hex(4002,0000, APB)
        #define APB_PADS_QSPI_VOLTAGE hex(4002,0000,VOLTAGE SELECT R, 0:<0=2V5,1=1V8>)
        #define APB_PADS_QSPI_SCLK hex(4002,0004, Serial CLOCK)
            #define posib_apqs_slew  posib(0, :0, 0->slow, 1->fast,Slew rate control)
            #define posib_apqs_drive posib(4, :5, 0->2mA, 1->4mA, 2->8mA, 3->12mA>,,Drive strength)
        #define APB_PADS_QSPI_SD0 hex(4002,0008, Serial Data 0)
            #define apqs_SLEW posib(0, :0, 1->fast,0->slow)
        #define apqs_SCHMITT posib(1, :1, Enable schmitt trigger)

    #define APB_PADS_QSPI_SD1 hex(4002,000c, Serial Data 1)
    #define APB_PADS_QSPI_SD2 hex(4002,0010, Serial Data 2)
    #define APB_PADS_QSPI_SD3 hex(4002,0014, Serial Data 3)

    #define APB_PLL_SYS     hex(4002,8000, APB)

    #define APB_PLL_SYS     hex(4002,8000, APB)
        #define APB_PLL_SYS_CS hex3(4002,8000,0,<CONTROL and STATUS reg>)
            #define posib_apsc_REFDIV posb(0,<~5|Divides the PLL input reference clock>)
            #define posib_apsc_BYPASS posb(8,<~8|<passes the ref clock to the output>)
            #define posib_apsc_LOCK   posb(31,<~31|<PLL is locked>)

        #define APB_PLL_SYS_PWR        hex3(4002,8000,4,<POWER modes reg>)
            #define posib_apsp_PD posb(0,~0<PLL Power Down>)
            #define posib_apsp_POSTDIVPD posb(3,<~3|PLL post divider power down>)
            #define posib_apsp_VCOPD  posb(5,<~5|PLL Voltage Controlled Oscilator Power Down>)

        #define APB_PLL_SYS_FBDIV_INT  hex3(4002,8000,8,<FEED BACK DEVISOR reg>)
            #define posib_apsf_see  posb(0,<~11|interrupt:see ctrl reg description for constraints>)

        #define APB_PLL_SYS_PRIM       hex3(4002,8000,c,<PRIMARY OUTPUT reg,NOT SECONDARY OUTPUT>)
            #define posibb_apsp_POSTDIV1 posb(12,<~14|divide by 1-7>)
            #define posibb_apsp_POSTDIV2 posb(16,<18|divide by 1-7>)

    #define APB_PLL_USB     hex(4002,c000, APB)
        #define APB_PLL_USB_CS hex3(4002,c000,00,<CONTROL and STATUS reg>)
            #define posib_apuc_REFDIV posb(0,~5,<Divides the PLL input reference clock>)
            #define posib_apuc_BYPASS posb(8,~8,<passes the ref clock to the output>)
            #define posib_apuc_LOCK   posb(31,~31,<PLL is locked>)

        #define APB_PLL_USB_PWR        hex3(4002,c000,04,<POWER modes reg>)
            #define posib_apup_PD posb(0,~0<PLL Power Down>)
            #define posib_apup_POSTDIVPD posb(3,~3<PLL post divider power down>)
            #define posib_apup_VCOPD  posb(5,~5<PLL Voltage Controlled Oscilator Power Down>)

        #define APB_PLL_USB_FBDIV_INT  hex3(4002,c000,08,<FEED BACK DEVISOR reg>)
            #define posib_apuf_see  posb(0,~11<interrupt:see ctrl reg description for constraints>)

        #define APB_PLL_USB_PRIM       hex3(4002,c000,0c,<PRIMARY output reg>)
            #define posibb_apup_POSTDIV1 posb(12,~14<divide by 1-7>)
            #define posibb_apup_POSTDIV2 posb(16,~18<divide by 1-7>)

    #define APB_BUS_CTRL    hex(4003,0000, APB)
    #define APB_UART_0      hex(4003,4000, APB)
    #define APB_UART_1      hex(4003,8000, APB)
    #define APB_SPI_0       hex(4003,c000, APB)
    #define APB_SPI_1       hex(4004,0000, APB)

    #define APB_WATCHDOG hex(4005,8000)
        #define APB_WATCHDOG_TICK hex(4005,8002c)
            #define posb_awt_CYCLES posb(0,~8<total number of clk_tick cycles before the next tick>)
            #define posb_awt_ENABLE posb(9,~9<start/stop tick generation>)
            #define posb_awt_RUNNING posb(10,~10<is the tick generator running?>)
            #define posb_awt_COUNT posb(11,~19<Count down timer:remaining num clk_tick cyes before the next tick is genrated>)

#define AHB hex(5000,0000, AHB:Advanced High Bus)
    #define DMA hex(5000,0000,AHB)
    #define USB hex(5010,0000,AHB)
    #define PIO0 hex(5020,0000,AHB)
    #define PIO1 hex(5030,0000,AHB)

#define SIO hex(d000,0000, SIO:Single cycle I/O)
    #define SIO_CPUID   hex(d000,0000, 31:0 <-(0 ~ 1), core 0, core 1)
    #define SIO_IN      hex(d000,0004, 29:0 <-(0 ~ 29), input value for gpio 0 ~ 29)
    #define SIO_HI_IN   hex(d000,0008,  5:0 <-(SCLK,SSn,SD0,SD1,SD2,SD3))
    #define SIO_OUT         hex(d000,0010, 29:0 <-(0~29), set output level(high,log))
    #define SIO_OUT_SET     hex(d000,0014, 29:0 value set)
    #define SIO_OUT_CLR     hex(d000,0018, 29:0 value clear)
    #define SIO_OUT_XOR     hex(d000,001c, 29:0 value toggle)
    #define SIO_OE          hex(d000,0020, 29:0 set output enalbe)
    #define SIO_OE_SET      hex(d000,0024, 29:0 value set)
    #define SIO_OE_CLR      hex(d000,0028, 29:0 value clear)
    #define SIO_OE_XOR      hex(d000,002c, 29:0 value toggle)

#define PPB hex(e000,0000, PPB:Private Peripheral Bus)
    #define PPB_VTOR hex(e000,ed08,PPB)
    #define PPB_STK_CSR hex(e000,e010,<Systic Control Status Reg)
        #define posib_psc_CNTEN posib(0,:0<Counter Enable|0:disable,1:enable>)
        #define posib_psc_TICKINT posib(1,:1<Tick Interrupt>)
        #define posib_psc_CLKSRC posib(2,:2<0:External Reference Clock,1:Processor Clock >)
        #define posib_psc_COUNT_FLAG posib(16,:16<return 1 if timer coounted to 0>)

    #define PPB_STK_RVR hex(e000,e014,<Systic Reload Value Reg)
    #define PPB_STK_CVR hex(e000,e018,<Systic Current Value Reg)

#endif // end of J_DEFINE_H
