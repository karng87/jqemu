#ifndef J_PICO_ADDRESS_H
#define J_PICO_ADDRESS_H

#include "pico/j_define.h"

    #define ROM hex(0000,0000, ROM:Ready Only Memory,16k,flash boot sequence)

    #define XIP hex(1000,0000, XIP:eXecute In Place,2M)
        #define XIP_SSI hex(1800,0000, Serial Interface)
            #define XIP_SSI_CTRL0 hex(1800,0000, Control register0)
                #define f_xsc0_DFS         fset( 0,:3,  Data Frame Size)
                #define f_xsc0_FRF         fset( 4,:5,  FRame Format)
                #define f_xsc0_SCPH        fset( 6,:6,  Serial Clock PHase)
                #define f_xsc0_SCPOL       fset( 7,:7,  Serial Clock POLatiry)
                #define f_xsc0_TMOD        fset( 8,:9,  Transfer MODe, 0<<(both),1<<(tr only), 2<<(re only),3<<(EEPROM rad mode))
                #define f_xsc0_SLV_OE      fset(10,:10, SLaVe Output Enable)
                #define f_xsc0_SLR         fset(11,:11, Shift Register Loop)
                #define f_xsc0_CFS         fset(12,:15, Control Frame Size, n+1 clocks per frame)
                #define f_xsc0_DFS_32      fset(16,:20, Data Frame Size in 32b transfer mode, n+1 clocks per frame)
                #define f_xsc0_SPI_FRF     fset(21,:22, SPI FRame Format, 0<<(1-bit per SCK), 1<<(2-bit per SCK), 2<<(4-bit per SCK), frame format)
                #define f_xsc0_SSTE        fset(24,:24, Slave select toggle enable)

            #define XIP_SSI_CTRL1 hex(1800,0004, Control register1)
                #define f_xsc1_NDF fset( 0,:15, Number of data frames)

            #define XIP_SSI_ENR hex(1800,0008, Enable register0)
                #define f_xse_SSI_EN fset(0,:0, SSI Enable)

            #define XIP_SSI_MWCR hex(1800,000c, Microwire Control)

            #define XIP_SSI_SENR hex(1800,0010, Slave Enable)
                #define f_xss_SEL fset(0, :0, Slave Select, 0<<(not selected), 1<<(slave selected))

            #define XIP_SSI_BAUDR hex(1800,0014, Baud Rate)
                #define f_xsb_SCKDV fset(0, :15, SSI ClocK DiVider)

            #define XIP_SSI_TXFTLR hex(1800,0018, TX FIFO Threshold level)
                #define f_xst_TFT fset(0, :7, Transmit FIFO Threshold)

            #define XIP_SSI_RXFTLR hex(1800,001c, RX FIFO Threshold level)
                #define f_xsr_RFT fset(0, :7, Recieve FIFO Threshold)

            #define XIP_SSI_TXFLR hex(1800,0020, TX FIFO level)
                #define f_xst_TFL fset(0, :7, Transmit FIFO Level)

            #define XIP_SSI_RXFLR hex(1800,0024, RX FIFO level)
                #define f_xsr_RFL fset(0, :7, Recieve FIFO Level)

            #define XIP_SSI_SR hex(1800,0028, Status Regiser)
                #define f_xss_BUSY fset(0, :0, SSI busy flag )
                #define f_xss_TFNF fset(1, :1, Transmit FIFO Not Full)
                #define f_xss_TFE  fset(2, :2, Transmit FIFO Empty)
                #define f_xss_RFNE  fset(3, :3, Recieve FIFO Not Empty)
                #define f_xss_RFF  fset(4, :4, Recieve FIFO Full)
                #define f_xss_TXE  fset(5, :5, Transmission Error)
                #define f_xss_DCOL fset(6, :6, Data COLlision error)

            #define XIP_SSI_IMR hex(1800,002c, Interrupt Mask R)

            #define XIP_SSI_ISR hex(1800,0030, Interrupt Status R)

            #define XIP_SSI_RISR hex(1800,0034, SPI Raw Interrupt Status R)

            #define XIP_SSI_DR0 hex(1800,0060, SPI Data R 0)
                #define f_xsd_DR fset(0, :31, First Data regitster of 36)

            #define XIP_SSI_RX_SAMPLE_DLY hex(1800,00f0, SPI RX Sample Delay R)
                #define f_xsrsd_RSD fset(0, :7, SSI RX Sample Delay flag)

            #define XIP_SSI_SPI_CTRLR0 hex(1800,00f4, SPI Control r 0)
                #define f_xssc_TRANS_TYPE fset(0, :1, TRANS_TYPE)
                #define f_xssc_ADDR_L     fset(2, :5, ADDRess Length)
                #define f_xssc_INST_L     fset(8, :9, INSTtruction Length)
                #define f_xssc_WAIT_CYCLES fset(11, :15, Wait cycles between control frame transmit and data reception)
                #define f_xssc_DDR_EN fset(16, :16, SPI DDR transfer enable) 
                #define f_xssc_INST_DDR_EN fset(17, :17, Instrcution DDR transfer enable) 
                #define f_xssc_SPI_RXDS_EN fset(18, :18, Read Data Strobe Enable) 
                #define f_xssc_XIP_CMD fset(24, :31, SPI Command to send in XIP mode (INST_L = 8-bit) or to append to Address (INST_L = 0-bit))


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
                
            #define APB_IO_QSPI     hex(4001,8000, APB)
            #define APB_PADS_BNAK0  hex(4001,c000, APB)
                #define APB_PADS_BNAK0_VSEL hex(4001,c000, 0:<0x0=3.3v ,0x1=1.8v>)
                #define APB_PADS_BNAK0_CRTL_0_29 hex(4001,c004, 7:OD(output disable),6:IE(input enable)
                #define APB_PADS_BNAK0_SWCLK hex(4001,c07c)

            #define APB_PADS_QSPI   hex(4002,0000, APB)
                #define APB_PADS_QSPI_VOLTAGE hex(4002,0000,VOLTAGE SELECT R, 0:<0=2V5,1=1V8>)
                #define APB_PADS_QSPI_SCLK hex(4002,0004, Serial CLOCK)
                    #define f_apqs_slew  fset(0, :0, 0->slow, 1->fast,Slew rate control)
                    #define f_apqs_drive fset(4, :5, 0->2mA, 1->4mA, 2->8mA, 3->12mA>,,Drive strength)
                #define APB_PADS_QSPI_SD0 hex(4002,0008, Serial Data 0)
                    #define apqs_SLEW fset(0, :0, 1->fast,0->slow)
                #define apqs_SCHMITT fset(1, :1, Enable schmitt trigger)
            #define APB_PADS_QSPI_SD1 hex(4002,000c, Serial Data 1)
            #define APB_PADS_QSPI_SD2 hex(4002,0010, Serial Data 2)
            #define APB_PADS_QSPI_SD3 hex(4002,0014, Serial Data 3)

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