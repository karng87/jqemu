#include "include/j_address.h"

#define PERIOD_FAST    100000
#define PERIOD_SLOW    500000

#define F_REF          12000000
#define F_CPU          120000000
#define F_PER          120000000
#define F_RTC          (F_REF / 256)
#define F_TICK         1000000

void O1_enable_XOSC(){
    // Enable XOSC: 12Mhz; warmming up time(47); enable;
    *phex_r(4002,4000,00,<APB|XOSC|CTRL|slect XOSC 12Mhz>)
        = bitshift(0xaa0,0,<0xaa0:1~15MHz>||<0:11:posib_axc FREQ_RANGE>); // 12Mhz(1-15)
    *phex_r(4002,4000,0c,<APB|XOSC|STARTUP|warmming up>)
        = bitshift(47,0,<posib_axs DELAY>); // ~1ms @12MHz
    // Eanble xosc
    *phex_r(4002,4000,2000,APB_XOSC_CTRL,<+Atomic SET>)
        = bitshift(0xfab,12,<0xfab:ENABLE|0xdle:DISABLE||12:23:ENABLE>);
    // warmming up
    while(1) if(*phex_r(4002,4000,04,<APB|XOSC|STATUS>) 
                & bitshift(1,31,<||31:posib_pxs STABLE>)) break;
}
void O2_set_PLL_SYS(){
    // reset pll_sys pll_sys: used to generate up to a 133MHz system clock
    *phex_r(4000,c000,3000,APB|RESETS|RESET|atomic CLR)
        = bitshift(1,12,<||12:PLL_SYS>);
    while(1) if(*phex_r(4000,c000,08,<APB|RESETS|DONE>)
            & bitshift(1,12,<||12:PLL_SYS>)) break;

    // set sys_pll  REFDIV = 1;
    *phex_r(4002,8000,00,<APB|PLL_SYS|CS:Control Status>)
        = bitshift(1,0,<1:F_REF/1||0:REFDIV:divides the pll input ref clock:before using it,wait for lock=1>);

    // 12Mh(XOSC in RP2040) * 40(FBDIV_INT) / 4(POSTDIV1) / 1(POSTDIV2) = 120MHz
    *phex_r(4002,8000,08,<APB|PLL_SYS|FBDIV_INT>)
        = bitshift(40,0,<||0:11::FEEDBACK DIVISOR>);
    *phex_r(4002,8000,0c,APB|PLL_SYS|PRIM:<Primary Output Hz>)
        = bitshift(4,12,  <||12:14::POSTDIV1>) 
          | bitshift(1,16,<||16:18::POSTDIV2>);

    *phex_r(4002,8000,3004,<APB|PLL_SYS|PWR:Power Reg|atomic CLR>)
        = bitshift(1,5,<||5::VCO PowerDown|to save power>)
        | bitshift(1,0,<||0::PD:power down>);
    while(1) if(*phex_r(4002,8000,00,<APB|PLL_SYS|CS>)
                & bitshift(1,31,<||31:LOCK:wait for lock=1,before using it>)) break;

    *phex_r(4002,8000,3004,<APB|PLL_SYS|PWR|atomic CLR>)
        = bitshift(1,3,<||3::POSTDIVPD|post divider powerdown when output not required or bypass=1>);

}
void O3_set_PLL_USB(){
    // Setup USB PLL for 12MHz *36/3/3 = 48MHz
    *phex_r(4000,c000,3000,<APB|RESETS|RESET|atomic CLR>>)
        = bitshift(1,13,<||PLL_USB:13-posib>);
    while(1) if(*phex_r(4000,c000,08,<APB|RESETS|DONE>)
                & bitshift(1,13,<||13:PLL_USB>)) break;

    *phex_r(4002,c000,00,<APB|PLL_USB|CS>)
        = bitshift(1,0,<||0:5::REFDIV:divides ref clock>);
        // 12Mh *36 
    *phex_r(4002,c000,08,<APB|PLL_USB|FBDIV_INT>)
        = bitshift(36,0,<||0:11::Feed back devisor>);
    *phex_r(4002,c000,0c,<APB|PLL_USB|PRIM>)
        = bitshift(3,16,<||16:18::POSTDIV1|1~7>)
        | bitshift(3,12,<||12:14::POSTDIV2|1~7>);

    *phex_r(4002,c000,3004,<APB|PLL_USB|PWR|atomic CLR>)
        = bitshift(1,5,<||5:VCOPD>)
        | bitshift(1,0,<||0:PD:power down>);
    while(1) if(*phex_r(4002,c000,00,<APB|PLL_USB|CS>)
                & bitshift(1,31,<||31::LOCK:wait for lock=1>)) break;

    *phex_r(4002,c000,3004,<APB|PLL_USB|PWR|atomic CLR>)
        = bitshift(1,3,<POSTDIVPD>);
}

void O4_XOSC_CLOCK(){
    // XOSC clock select
    *phex_r(4000,8000,30,<APB|CLKS|REF_CTRL>)
        = bitshift(2,0,<2:xosc_clk_src||0:1::SRC>);

    *phex_r(4000,8000,3c,<APB|CLKS|SYS_CTRL>)
        = bitshift(0,5,<0:clksrc_pll_sys||5:7::AUXSRC>);
    *phex_r(4000,8000,203c,<APB|CLKS|SYS_CTRL|atomic SET>)
        = bitshift(1,0,<1:clksrc_clk_sys_aux||0:SRC);

    *phex_r(4000,8000,48,<APB|CLKS|PERI_CTRL>)
        = bitshift(1,11,<||11:ENABLE>)
        | bitshift(0,5,<0:clk_sys||5:7::AUXSRC>);

    *phex_r(4000,8000,54,<APB|CLKS|USB_CTRL>)
        = bitshift(1,11,<||11:ENABLE>)
        | bitshift(0,5,<0x0:clksrc_pll_usb||5:7::AUXSRC>);

    *phex_r(4000,8000,60,<APB|CLKS|ADC_CTRL)
        = bitshift(1,11,<||11:ENABLE>)
        | bitshift(0,5,<0:clksrc_pll_usb||5:7::AUXSRC>);

    *phex_r(4000,8000,70,<APB|CLKS|RTC_DIV>)
        = bitshift(256,8,<12MHz/256=46875Hz||8:31::INT);
    *phex_r(4000,8000,6c,<APB|CLKS|RTC_CTRL>)
        = bitshift(1,11,<||11:ENABLE>)
        | bitshift(3,5,<0x3:xosc_clksrc||5:7AUXSRC);

    *phex_r(4005,8000,2c,<APB|WATCHDOG|TICK>)
        = bitshift((F_REF/F_TICK),0,<||0:8::CYCLES>)
        | bitshift(1,9,<||9:ENABLE>);
}

void O5_enable_GPIO(void){
    // Enable GPIOs
    *phex_r(4000,c000,3000,<APB|RESETS|RESET|atomic CLR>)
        = bitshift(1,5,<||5:IO_BANK0)
        | bitshift(1,8,<||8:PADS_BNAK0);
    while(1) if((*phex_r(4000,c000,08,<APB|RESETS|DONE>) & bitshift(1,5,<||5:IO_BANK0>))
                || (*phex_r(4000,c000,08,<APB|RESETS|DONE>) & bitshift(1,8,<||8:PADS_BNAK0))) break;
}
int main(){
    O1_enable_XOSC();
    O2_set_PLL_SYS();
    O3_set_PLL_USB();
    O4_XOSC_CLOCK();
    O5_enable_GPIO();

    *phex_r(d000,0000,24,<SIO|OE_SET>) = bitshift(1,25,<25GPIO);
    *phex_r(4000,1400,cc,<APH|IO_BANK0|CTRL|25GPIO>) = bitshift(5,0,<5:SIO_FUNC||0:FUNCSEL>);
    *phex_r(d000,0000,18,<SIO|OUT_CLR>) = bitshift(1,25,<||25GPIO);
    while(1){
        for(volatile int i = 0x100000 ; i!=0; i--);
        *phex_r(d000,0000,1c,<SIO|OUT_XOR>) = bitshift(1, 25,<25-PIN>);
    }
    return 0;
}
