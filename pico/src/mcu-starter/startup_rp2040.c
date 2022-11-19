#include<stdint.h>

#define hex(x,y,args...) (0x ## x ## y)
#define hexp(x,y,args...) *(volatile unsigned int*)(0x ## x ## y)
#define bshift(x,y,args...) ((x) << (y))
//-----------------------------------------------------------------------------
#define DUMMY __attribute__ ((weak, alias ("irq_handler_dummy")))
//
//------- weak --------
//  useful in defining lib functions that can be overridden in user code
//
//------- alias --------
//  emit as an alias for another symbol
//
//------- used --------
//  must be emitted for the function
//      even if it appears that the function is not referenced.
//-----------------------------------------------------------------------------

DUMMY void irq_handler_nmi(void);
DUMMY void irq_handler_hard_fault(void);
DUMMY void irq_handler_sv_call(void);
DUMMY void irq_handler_pend_sv(void);
DUMMY void irq_handler_sys_tick(void);

DUMMY void irq_handler_timer_0(void);
DUMMY void irq_handler_timer_1(void);
DUMMY void irq_handler_timer_2(void);
DUMMY void irq_handler_timer_3(void);
DUMMY void irq_handler_pwm(void);
DUMMY void irq_handler_usbctrl(void);
DUMMY void irq_handler_xip(void);
DUMMY void irq_handler_pio0_0(void);
DUMMY void irq_handler_pio0_1(void);
DUMMY void irq_handler_pio1_0(void);
DUMMY void irq_handler_pio1_1(void);
DUMMY void irq_handler_dma_0(void);
DUMMY void irq_handler_dma_1(void);
DUMMY void irq_handler_io_bank0(void);
DUMMY void irq_handler_io_qspi(void);
DUMMY void irq_handler_sio_proc0(void);
DUMMY void irq_handler_sio_proc1(void);
DUMMY void irq_handler_clocks(void);
DUMMY void irq_handler_spi0(void);
DUMMY void irq_handler_spi1(void);
DUMMY void irq_handler_uart0(void);
DUMMY void irq_handler_uart1(void);
DUMMY void irq_handler_adc_fifo(void);
DUMMY void irq_handler_i2c0(void);
DUMMY void irq_handler_i2c1(void);
DUMMY void irq_handler_rtc(void);

extern int main(void);

extern uint32_t _text_start;
extern uint32_t _stack_top;
extern uint32_t _text;
extern uint32_t _etext;
extern uint32_t _data;
extern uint32_t _edata;
extern uint32_t _bss;
extern uint32_t _ebss;

//-----------------------------------------------------------------------------
// Note: Vector table does not need to be placed in a separate section on this MCU,
//       but we do so anyway to ensure alignment at 128 byte boundary without
//       potentially wasting space with automatic alignment.
__attribute__ (( used, section(".vectors")))
void(* const vectors[])(void) =
{
  0,                             // 0 - Initial Stack Pointer Value (unused)

  // Cortex-M0+ handlers
  0,                             // 1 - Reset (unused)
  irq_handler_nmi,               // 2 - NMI
  irq_handler_hard_fault,        // 3 - Hard Fault
  0,                             // 4 - Reserved
  0,                             // 5 - Reserved
  0,                             // 6 - Reserved
  0,                             // 7 - Reserved
  0,                             // 8 - Reserved
  0,                             // 9 - Reserved
  0,                             // 10 - Reserved
  irq_handler_sv_call,           // 11 - SVCall
  0,                             // 12 - Reserved
  0,                             // 13 - Reserved
  irq_handler_pend_sv,           // 14 - PendSV
  irq_handler_sys_tick,          // 15 - SysTick

  // Peripheral handlers
  irq_handler_timer_0,           // 0 - timer_irq_0
  irq_handler_timer_1,           // 1 - timer_irq_1
  irq_handler_timer_2,           // 2 - timer_irq_2
  irq_handler_timer_3,           // 3 - timer_irq_3
  irq_handler_pwm,               // 4 - pwm_irq_wrap
  irq_handler_usbctrl,           // 5 - usbctrl_irq
  irq_handler_xip,               // 6 - xip_irq
  irq_handler_pio0_0,            // 7 - pio0_irq_0
  irq_handler_pio0_1,            // 8 - pio0_irq_1
  irq_handler_pio1_0,            // 9 - pio1_irq_0
  irq_handler_pio1_1,            // 10 - pio1_irq_1
  irq_handler_dma_0,             // 11 - dma_irq_0
  irq_handler_dma_1,             // 12 - dma_irq_1
  irq_handler_io_bank0,          // 13 - io_irq_bank0
  irq_handler_io_qspi,           // 14 - io_irq_qspi
  irq_handler_sio_proc0,         // 15 - sio_irq_proc0
  irq_handler_sio_proc1,         // 16 - sio_irq_proc1
  irq_handler_clocks,            // 17 - clocks_irq
  irq_handler_spi0,              // 18 - spi0_irq
  irq_handler_spi1,              // 19 - spi1_irq
  irq_handler_uart0,             // 20 - uart0_irq
  irq_handler_uart1,             // 21 - uart1_irq
  irq_handler_adc_fifo,          // 22 - adc_irq_fifo
  irq_handler_i2c0,              // 23 - i2c0_irq
  irq_handler_i2c1,              // 24 - i2c1_irq
  irq_handler_rtc,               // 25 - rtc_irq
};

//--------
void irq_handler_dummy(void){
    while(1);
}

//-----------------------------------------------------------------------------
__attribute__((naked, used, noreturn, section(".boot.entry"))) void boot_entry(void)
{
  // Note: This code must be position independent, it is linked at 0x10000000, but
  //       loaded at 0x20041f00.


      //#define XIP_SSI_ENR hex(1800,0008, Enable register0)
                //#define f_xse_SSI_EN fset(0,:0, SSI Enable)
          //XIP_SSI->SSIENR = 0;
          //*(volatile uint32_t *)(hex(1800,0008)) = 0;
  hexp(1800,0008,SSIENR, Enable Reg) = 0;

      //#define XIP_SSI_BAUDR hex(1800,0014, Baud Rate)
                //#define f_xsb_SCKDV fset(0, :15, SSI ClocK DiVider)
  //XIP_SSI->BAUDR = 2; // Must be even
  hexp(1800,0014,BAUDR, baud rate) = 2; // /2


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
  //XIP_SSI->CTRLR0 = (XIP_SSI_CTRLR0_SPI_FRF_STD << XIP_SSI_CTRLR0_SPI_FRF_Pos) | (XIP_SSI_CTRLR0_TMOD_EEPROM_READ << XIP_SSI_CTRLR0_TMOD_Pos) | ((32-1) << XIP_SSI_CTRLR0_DFS_32_Pos);
  hexp(1800,0000, XIP_SSI_CTRLR0) = bshift(0,21, 1-bit SPI frame, SPI_FRF) |
                                bshift(3,8, EEPROM_READ,TMOD) | bshift(32-1,16, DFS_32);
            //#define XIP_SSI_CTRLR1 hex(1800,0004, Control register1)
                //#define posi_xsc1_NDF posib( 0,:15, Number of data frames)
  //XIP_SSI->CTRLR1 = (0 << XIP_SSI_CTRLR1_NDF_Pos);
  hexp(1800,0004) = bshift(0,0, NDF,Number of Data Frame);

            //#define XIP_SSI_SPI_CTRLR0 hex(1800,00f4, SPI Control r 0)
                //#define posi_xssc_TRANS_TYPE posib(0, :1, TRANS_TYPE)
                //#define posi_xssc_ADDR_L     posib(2, :5, ADDRess Length)
                //#define posi_xssc_INST_L     posib(8, :9, INSTtruction Length)
                //#define posi_xssc_WAIT_CYCLES posib(11, :15, Wait cycles between control frame transmit and data reception)
                //#define posi_xssc_DDR_EN posib(16, :16, SPI DDR transfer enable) 
                //#define posi_xssc_INST_DDR_EN posib(17, :17, Instrcution DDR transfer enable) 
                //#define posi_xssc_SPI_RXDS_EN posib(18, :18, Read Data Strobe Enable) 
                //#define posi_xssc_XIP_CMD posib(24, :31, SPI Command to send in XIP mode (INST_L = 8-bit) or to append to Address (INST_L = 0-bit))

  //XIP_SSI->SPI_CTRLR0 = (0x03/*READ_DATA*/ << XIP_SSI_SPI_CTRLR0_XIP_CMD_Pos) |
    //((24 / 4) << XIP_SSI_SPI_CTRLR0_ADDR_L_Pos) |
    //(XIP_SSI_SPI_CTRLR0_INST_L_8B << XIP_SSI_SPI_CTRLR0_INST_L_Pos) |
    //(XIP_SSI_SPI_CTRLR0_TRANS_TYPE_1C1A << XIP_SSI_SPI_CTRLR0_TRANS_TYPE_Pos);
  hexp(1800,00f4) = bshift(0x03,24, Command to send in XIP mode)
                    | bshift(24/4,2, Address length)
                    | bshift(0,0,Transfer Type);


            //#define XIP_SSI_SENR hex(1800,0010, Slave Enable)
                //#define posi_xss_SEL posib(0, :0, Slave Select, 0<<(not selected), 1<<(slave selected))
  //XIP_SSI->SSIENR = XIP_SSI_SSIENR_SSI_EN_Msk;
  hexp(1800,0010, XIP_SSI_SPI_CTRLR0) = 1;

  uint32_t *src = &_text_start;
  uint32_t *dst = &_text;

  while (dst < &_edata)
    *dst++ = *src++;

  dst = &_bss;
  while (dst < &_ebss)
    *dst++ = 0;

    //#define PPB hex(e000,0000, PPB:Private Peripheral Bus)
        //#define VTOR hex(e000,ed08,PPB)
  //SCB->VTOR = (uint32_t)vectors;
  hexp(e000,ed08,, PPB Vector Offset Register) = (uint32_t)vectors;

  asm (R"asm(
    msr    msp, %[sp] // move status register <> master stack pointer <> &_stack_top
    bx     %[reset] // branch exchange <> main
    )asm"
    :: [sp] "r" (&_stack_top), [reset] "r" (main)
  );

  __builtin_unreachable();
}
