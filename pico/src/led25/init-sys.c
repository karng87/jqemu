#include<pico/j_address.h>

#define PERIOD_FAST    100000
#define PERIOD_SLOW    500000

#define F_REF          12000000
#define F_CPU          120000000
#define F_PER          120000000
#define F_RTC          (F_REF / 256)
#define F_TICK         1000000

void init_sys(void){

    p0x(APB_XOSC_CTRL) = bitshift(0xaa0,0,<1~15MHz|posib_axc FREQ_RANGE>); // 1 - 15MHz
    p0x(APB_XOSC_STARTUP) =  bitshift(47,0,<posib_axs DELAY>); // ~1ms @12MHz
    p0x_set(APB_XOSC_CTRL,<+Atomic SET>) = bitshift(0xfab,12,<Ring Oscillator Enaable>);
    while(1) if(p0x(APB_XOSC_STATUS) & bitshift(1,31,<posib_axs STABLE>)) break;
    p0x_clr(APB_RESETS_RESET) = bitshift(1,12,<PLL_SYS:12-posib>);
    while(1) if(p0x(APB_RESETS_DONE) & bitshift(1,12,<PLL_SYS>)) break;

    p0x(APB_PLL_SYS_CS) = bitshift(1,0,<REFDIV:divides ref clock>);
        // 12Mh * 40
    p0x(APB_PLL_SYS_FBDIV_INT,feedback divider)= bitshift(40,0,<see ctrl reg with interrput>);
        // (12Mhz *40)/4  /1  1
    p0x(APB_PLL_SYS_PRIM) = bitshift(4,12,<POSTDIV1>) | bitshift(1,16,<POSTDIV2>);

    p0x_clr(APB_PLL_SYS_PWR) = bitshift(1,5,<VCO PowerDown>) | bitshift(1,0,<PD:power down>);
    while(1) if(p0x(APB_PLL_SYS_CS) & bitshift(1,31,<LOCK:PLL is locked>)) break;

    p0x_clr(APB_PLL_SYS_PWR) = bitshift(1,3,<POSTDIVPD>);

    // Setup USB PLL for 12MHz *36/3/3 = 48MHz
    p0x_clr(APB_RESETS_RESET,<+CLR>) = bitshift(1,13,<PLL_USB:13-posib>);
    while(1) if(p0x(APB_RESETS_DONE)&bitshift(1,13,<PLL_USB>)) break;

    p0x(APB_PLL_USB_CS) = bitshift(1,0,<REFDIV:divides ref clock>);
        // 12Mh *36 
    p0x(APB_PLL_USB_FBDIV_INT)= bitshift(36,0,<see ctrl reg with interrput>);
        // (12Mhz*36) /3 /3 = 48MHz 
    p0x(APB_PLL_USB_PRIM) = bitshift(3,12,<POSTDIV1>) | bitshift(3,16,<POSTDIV2>);

    p0x_clr(APB_PLL_USB_PWR) = bitshift(1,5,<VCOPD>) | bitshift(1,0,<PD:power down>);
    while(1) if(p0x(APB_PLL_USB_CS) & bitshift(1,31,<LOCK:PLL is locked>)) break;

    p0x_clr(APB_PLL_USB_PWR) = bitshift(1,3,<POSTDIVPD>);
    p0x(APB_CLK_REF_CTRL) = bitshift(2,0,<2:xosc_clk_src>|SRC);

    p0x(APB_CLK_SYS_CTRL) = bitshift(0,5,<0:clksrc_pll_sys|AUXSRC>);
    p0x_set(APB_CLK_SYS_CTRL) = bitshift(1,0,<1:clksrc_clk_sys_aux|SRC);

    p0x(APB_CLK_PERI_CTRL) = bitshift(1,11,<ENABLE>) | bitshift(0,5,<clk_sys|AUXSRC>);

    p0x(APB_CLK_USB_CTRL) = bitshift(1,11,<ENABLE>) | bitshift(0,5,<clksrc_pll_usb|AUXSRC>);

    p0x(APB_CLK_ADC_CTRL) = bitshift(1,11,<ENABLE>) | bitshift(0,5,<clksrc_pll_usb|AUXSRC>);

    p0x(APB_CLK_RTC_DIV) = bitshift(255,8,<12MHz / 256 = 46875Hz|INT);
    p0x(APB_CLK_RTC_CTRL) = bitshift(1,11,<ENABLE>) | bitshift(3,5,<xosc_clksrc|AUXSRC);

    p0x(APB_WATCHDOG_TICK) = bitshift((F_REF/F_TICK),0,<CYCLES>) | bitshift(1,9,<ENABLE>);

    // Enable GPIOs
    p0x_clr(APB_RESETS_RESET) = bitshift(1,5,IO_BANK0)|bitshift(1,8,<PADS_BNAK0);
    while(1) if((p0x(APB_RESETS_DONE) & bitshift(1,5)) || (p0x(APB_RESETS_DONE) & bitshift(1,8))) break;
}

void delay(unsigned int t){
    for(unsigned int i=0; i<t;){
        if(p0x(PPB_SYST_CSR) & bitshift(1,16,<COUNTER FLAG>)) i++;
    }
}
