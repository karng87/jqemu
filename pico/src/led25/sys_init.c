#define posib(x, args...) (x) // position bit set
#define bshift(x, y, args...) ((x) << (y))

#define hadd(x, y) (x+y)
#define hex(x, y, args...) hadd(0x ## x ## 0000 , 0x ## y)
#define phex(x, y, args...) *((volatile unsigned int*)hex(x,y))

#define had3(x, y, z) (x+y+z)
#define hex3(x, y, z,args...) had3(0x ## x ## 0000 , 0x ## y, 0x ## z)
#define phex3(x, y, z,args...) *((volatile unsigned int*)hex3(x,y,z))

#define p0x(x,args...) *((volatile unsigned int*)(x))
#define p0x_a(x,y,args...) p0x(hadd(x,y))
#define p0x_xor(x,args...) p0x_a(x,0x1000)
#define p0x_set(x,args...) p0x_a(x,0x2000)
#define p0x_clr(x,args...) p0x_a(x,0x3000)

void sys_init(void){

    // Enable XOSC external Oscillator
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

    p0x(APB_XOSC_CTRL) = bshift(0xaa0,0,<1~15MHz|posib_axc FREQ_RANGE>); // 1 - 15MHz
    p0x(APB_XOSC_STARTUP) =  bshift(47,0,<posib_axs DELAY>); // ~1ms @12MHz
    p0x_set(APB_XOSC_CTRL,<+Atomic SET>) = bshift(0xfab,12,<Ring Oscillator Enaable>);
    while(1) if(p0x(APB_XOSC_STATUS)&bshift(1,31,<posib_axs STABLE>)) break;

    // Setup SYS PLL for 12MHz * 40 / 4 / 1= 120MHz
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

    p0x_clr(APB_RESETS_RESET,<+CLR>) = bshift(1,12,<PLL_SYS:12-posib>);
    while(1) if(p0x(APB_RESETS_DONE)&bshift(1,12,<PLL_SYS>)) break;
   
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

    p0x(APB_PLL_SYS_CS) = bshift(1,0,<REFDIV:divides ref clock>);
        // 12Mh * 40
    p0x(APB_PLL_SYS_FBDIV_INT)= bshift(40,0,<see ctrl reg with interrput>);
        // (12Mhz *40)/4  /1  1
    p0x(APB_PLL_SYS_PRIM) = bshift(4,12,<POSTDIV1>) | bshift(1,16,<POSTDIV2>);
    p0x_clr(APB_PLL_SYS_PWR) = bshift(1,5,<VCOPD>) | bshift(1,0,<PD:power down>);
    while(1) if(p0x(APB_PLL_SYS_CS)&bshift(1,31,<LOCK:PLL is locked>)) break;
    p0x_clr(APB_PLL_SYS_PWR) = bshift(1,3,<POSTDIVPD>);

    // Setup USB PLL for 12MHz *36/3/3 = 48MHz
    p0x_clr(APB_RESETS_RESET,<+CLR>) = bshift(1,13,<PLL_USB:13-posib>);
    while(1) if(p0x(APB_RESETS_DONE)&bshift(1,13,<PLL_USB>)) break;

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

    p0x(APB_PLL_USB_CS) = bshift(1,0,<REFDIV:divides ref clock>);
        // 12Mh *36 
    p0x(APB_PLL_USB_FBDIV_INT)= bshift(36,0,<see ctrl reg with interrput>);
        // (12Mhz*36) /3 /3 = 48MHz 
    p0x(APB_PLL_USB_PRIM) = bshift(3,12,<POSTDIV1>) | bshift(3,16,<POSTDIV2>);

    p0x_clr(APB_PLL_USB_PWR) = bshift(1,5,<VCOPD>) | bshift(1,0,<PD:power down>);
    while(1) if(p0x(APB_PLL_USB_CS)&bshift(1,31,<LOCK:PLL is locked>)) break;
    p0x_clr(APB_PLL_USB_PWR) = bshift(1,3,<POSTDIVPD>);

    // Switch clock to their final sources
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

    p0x(APB_CLK_REF_CTRL) = bshift(2,0,<2:xosc_clk_src>|SRC);
    p0x(APB_CLK_SYS_CTRL) = bshift(0,5,<0:clksrc_pll_sys|AUXSRC>);
    p0x_set(APB_CLK_SYS_CTRL) = bshift(1,0,<1:clksrc_clk_sys_aux|SRC);

    p0x(APB_CLK_PERI_CTRL) = bshift(1,11,<ENABLE>) | bshift(0,5,<clk_sys|AUXSRC>);
    p0x(APB_CLK_USB_CTRL) = bshift(1,11,<ENABLE>) | bshift(0,5,<clksrc_pll_usb|AUXSRC>);
    p0x(APB_CLK_ADC_CTRL) = bshift(1,11,<ENABLE>) | bshift(0,5,<clksrc_pll_usb|AUXSRC>);

    p0x(APB_CLK_RTC_DIV) = bshift(255,8,<12MHz / 256 = 46875Hz|INT);
    p0x(APB_CLK_RTC_CTRL) = bshift(1,11,<ENABLE>) | bshift(3,5,<xosc_clksrc|AUXSRC);

    // Configure 1 us tick for watchdog and timer
    #define APB_WATCHDOG hex(4005,8000)
        #define APB_WATCHDOG_TICK hex(4005,8002c)
            #define posb_awt_CYCLES posb(0,~8<total number of clk_tick cycles before the next tick>)
            #define posb_awt_ENABLE posb(9,~9<start/stop tick generation>)
            #define posb_awt_RUNNING posb(10,~10<is the tick generator running?>)
            #define posb_awt_COUNT posb(11,~19<Count down timer:remaining num clk_tick cyes before the next tick is genrated>)

#define PERIOD_FAST    100000
#define PERIOD_SLOW    500000

#define F_REF          12000000
#define F_CPU          120000000
#define F_PER          120000000
#define F_RTC          (F_REF / 256)
#define F_TICK         1000000
    p0x(APB_WATCHDOG_TICK) = bshift((F_REF/F_TICK),0,<CYCLES>) | bshift(1,9,<ENABLE>);

    // Enable GPIOs
    p0x_clr(APB_RESETS_RESET) = bshift(1,5,IO_BANK0)|bshift(1,8,<PADS_BNAK0);
    while(1) if(p0x(APB_RESETS_DONE) & bshift(1,5) && p0x(APB_RESETS_DONE) & bshift(1,8)) break;
}

void delay(unsigned int t){
    for(unsigned int i=0; i<t;){
    #define PPB_STK_CSR hex(e000,e010,<Systic Control Status Reg)
        #define posib_psc_COUNT_FLAG posib(16,:16<return 1 if timer coounted to 0>)
        if(p0x(PPB_STK_CSR) & bshift(1,16,<COUNTER FLAG>)) i++;
    }
}
