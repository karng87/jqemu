#define COMPILER_BARRIER  __asm volatile ("":::"memory")

#define hadd(x,y,z) (x+y+z)
#define hex(x,y,args...) hadd(0x ## x ## 0000, 0x ## y, 0)

#define hex3(x,y,z,args...) hadd(0x ## x ## 0000, 0x ## y, 0x ## z)

#define p0x(x,args...) (*(volatile unsigned int*)(x))
#define p0x_a(x,y) p0x(hadd(x,y,0))
#define p0x_xor(x,args...) p0x_a(x,0x1000)
#define p0x_set(x,args...) p0x_a(x,0x2000)
#define p0x_clr(x,args...) p0x_a(x,0x3000)

#define bitshift(x,y,args...)  ((x)<<(y))
#define bitmask(x,args...) (x)

#include<stdint.h>

typedef enum {
/* =======================================  ARM Cortex-M0+ Specific Interrupt Numbers  ======================================= */
  Reset_IRQn                = -15,              /*!< -15 Reset Vector, invoked on Power up and warm reset */
  NonMaskableInt_IRQn       = -14,              /*!< -14 Non maskable Interrupt, cannot be stopped or preempted */
  HardFault_IRQn            = -13,              /*!< -13 Hard Fault, all classes of Fault */
  SVCall_IRQn               =  -5,              /*!< -5 System Service Call via SVC instruction */
  PendSV_IRQn               =  -2,              /*!< -2 Pendable request for system service */
  SysTick_IRQn              =  -1,              /*!< -1 System Tick Timer */
/* ===========================================  rp2040 Specific Interrupt Numbers  =========================================== */
  TIMER_IRQ_0_IRQn          =   0,              /*!< 0 TIMER_IRQ_0 */
  TIMER_IRQ_1_IRQn          =   1,              /*!< 1 TIMER_IRQ_1 */
  TIMER_IRQ_2_IRQn          =   2,              /*!< 2 TIMER_IRQ_2 */
  TIMER_IRQ_3_IRQn          =   3,              /*!< 3 TIMER_IRQ_3 */
  PWM_IRQ_WRAP_IRQn         =   4,              /*!< 4 PWM_IRQ_WRAP */
  USBCTRL_IRQ_IRQn          =   5,              /*!< 5 USBCTRL_IRQ */
  XIP_IRQ_IRQn              =   6,              /*!< 6 XIP_IRQ */
  PIO0_IRQ_0_IRQn           =   7,              /*!< 7 PIO0_IRQ_0 */
  PIO0_IRQ_1_IRQn           =   8,              /*!< 8 PIO0_IRQ_1 */
  PIO1_IRQ_0_IRQn           =   9,              /*!< 9 PIO1_IRQ_0 */
  PIO1_IRQ_1_IRQn           =  10,              /*!< 10 PIO1_IRQ_1 */
  DMA_IRQ_0_IRQn            =  11,              /*!< 11 DMA_IRQ_0 */
  DMA_IRQ_1_IRQn            =  12,              /*!< 12 DMA_IRQ_1 */
  IO_IRQ_BANK0_IRQn         =  13,              /*!< 13 IO_IRQ_BANK0 */
  IO_IRQ_QSPI_IRQn          =  14,              /*!< 14 IO_IRQ_QSPI */
  SIO_IRQ_PROC0_IRQn        =  15,              /*!< 15 SIO_IRQ_PROC0 */
  SIO_IRQ_PROC1_IRQn        =  16,              /*!< 16 SIO_IRQ_PROC1 */
  CLOCKS_IRQ_IRQn           =  17,              /*!< 17 CLOCKS_IRQ */
  SPI0_IRQ_IRQn             =  18,              /*!< 18 SPI0_IRQ */
  SPI1_IRQ_IRQn             =  19,              /*!< 19 SPI1_IRQ */
  UART0_IRQ_IRQn            =  20,              /*!< 20 UART0_IRQ */
  UART1_IRQ_IRQn            =  21,              /*!< 21 UART1_IRQ */
  ADC_IRQ_FIFO_IRQn         =  22,              /*!< 22 ADC_IRQ_FIFO */
  I2C0_IRQ_IRQn             =  23,              /*!< 23 I2C0_IRQ */
  I2C1_IRQ_IRQn             =  24,              /*!< 24 I2C1_IRQ */
  RTC_IRQ_IRQn              =  25               /*!< 25 RTC_IRQ */
} IRQn_Type;

typedef struct
{
  uint32_t ISER[1U];               /*!< Offset: 0x000 (R/W)  Interrupt Set Enable Register */
  uint32_t RESERVED0[31U];
  uint32_t ICER[1U];               /*!< Offset: 0x080 (R/W)  Interrupt Clear Enable Register */
  uint32_t RESERVED1[31U];
  uint32_t ISPR[1U];               /*!< Offset: 0x100 (R/W)  Interrupt Set Pending Register */
  uint32_t RESERVED2[31U];
  uint32_t ICPR[1U];               /*!< Offset: 0x180 (R/W)  Interrupt Clear Pending Register */
  uint32_t RESERVED3[31U];
  uint32_t RESERVED4[64U];
  uint32_t IP[8U];                 /*!< Offset: 0x300 (R/W)  Interrupt Priority Register */
}  NVIC_Type;

/*
__STATIC_INLINE void __NVIC_EnableIRQ(IRQn_Type IRQn)
    {
      if ((int32_t)(IRQn) >= 0)
      {
        __COMPILER_BARRIER();
        NVIC->ISER[0U] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
        __COMPILER_BARRIER();
      }
    }
*/
void nvic_enableIRQ(int IRQn){
    if(IRQn>=0){
        (void)0;
        #define PPB_SYST_CSR hex(e000,e010,<SysTick Control and Status Reg>)
        #define PPB_NVIC_ISER hex(e000,e100,<Interrupt Set Enable Reg)
            #define pisb_pni_SETENA bitmask(0,<~31|Interrupt set-enable bits Write: Read:)
        #define PPB_NVIC_ICER hex(e000,e180,<Interrupt Clear Enable Reg)
        #define PPB_NVIC_ISPR hex(e000,e200,<Interrupt Set-Pending Reg)
        #define PPB_NVIC_ICPR hex(e000,e280,<Interrupt Clear-Pending Reg)
        // __NVIC_EnableIRQ(IRQn);
        __asm volatile("":::"memory");
        p0x(PPB_NVIC_ISER) = bitshift(1,0,<TIMER_IRQ_0_IRQn>);
        (void)0; // __asm volatile ("":::"memory");
    }
}
void init_timer(){

        #define APB_RESETS_RESET hex(4000,c000,<0:(ADC),1:(BUSCTRL),2:(DMA),3:(I2C0),4:(I2C1),5:(IO_BANK0),6:(IO_QSPI),7:(JTAG),8:(PADS_BNAK0),9:(PADS_QSPI),10:(PIO0),11:(PIO1),12:(PLL_SYS),13:(PLL_USB),14:(PWM),15:(RTC),16:(SPI0),17:(SPI1),18:(SYSCFG),19:(SYSINFO),20:(TBMAN),21:(TIMER),22:(UART0),23:(UART1),24:(USB_CTRL)>)
            #define posib_arr_IO_BANK0 bitmask(5)
            #define posib_arr_PADS_BANK0 bitmask(8)
            #define posib_arr_PLL_SYS bitmask(12)
            #define posib_arr_PLL_USB bitmask(13)
            #define posib_arr_TIMER bitmask(21)

        #define APB_RESETS_WDSEL hex(4000,c004,<0:(ADC)...>)

        #define APB_RESETS_DONE  hex(4000,c008,<0:(ADC)...>)
            #define posib_ard_IO_BANK0 bitmask(5)
            #define posib_ard_PADS_BANK0 bitmask(8)
            #define posib_ard_PLL_SYS bitmask(12)
            #define posib_ard_PLL_USB bitmask(13)
            #define posib_ard_TIMER bitmask(21)

    p0x(APB_RESETS_RESET) = bitshift(1,21,<TIMER:21>);
    while(1) if(p0x(APB_RESETS_DONE) & bitshift(1,21,<TIMER>)) break;
#define PERIOD_FAST    100000
#define PERIOD_SLOW    500000

#define F_REF          12000000
#define F_CPU          120000000
#define F_PER          120000000
#define F_RTC          (F_REF / 256)
#define F_TICK         1000000
    #define APB_TIMER hex(4005,4000)
        #define APB_TIMER_TIMEHW hex3(4005,4000,00,<HIGH WRITE>)
        #define APB_TIMER_TIMELW hex3(4005,4000,04,<LOW WRITE)
        #define APB_TIMER_TIMEHR hex3(4005,4000,08,<HIGH READ)
        #define APB_TIMER_TIMELR hex3(4005,4000,0c,<LOW READ)
//----------- armed 무장하다 ----
// Arm alarm 0, and configure the time it will fire.
// Once armed, the alarm fires when TIMER_ALARM0 == TIMELR.
// The alarm will disarm itself once it fires, and can be disarmed 
//      early using the ARMED status register.
//----------------------------------
        #define APB_TIMER_ALAM0 hex3(4005,4000,10,<Arm alam 0)
        #define APB_TIMER_ALAM1 hex3(4005,4000,14,<Arm alam 1)
        #define APB_TIMER_ARMED hex3(4005,4000,20,<indicats the armed/disarmed status of each alarm>)
        #define APB_TIMER_INTE  hex3(4005,4000,38,<Interrupt ENABLE|0:alarm0,1:alram1...>)

    p0x(APB_TIMER_ALAM0) = p0x(APB_TIMER_TIMELR) + PERIOD_SLOW;
    p0x(APB_TIMER_INTE,<Interrupt Enable) = bitshift(1,0);

     __asm volatile("":::"memory");
     p0x(PPB_NVIC_ISER) = bitshift(1,0,<TIMER_IRQ_0_IRQn>);
     (void)0; // __asm volatile ("":::"memory");
}
