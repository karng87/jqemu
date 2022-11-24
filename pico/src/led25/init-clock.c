#include "include/j_address.h"

void init_clock(void){
    // set auto resuscitatioon mode if sys_clk stoped
    *phex_r(4000,8000,78,<APB|CLKS|SYS_RESUS_CTRL>) = 0;
    //*phex_r(4000,8000,30,<APB|CLKS|REF_CTRL) = 0;
    //*phex_r(4000,8000,3c,<APB|CLKS|SYS_CTRL>) = 0;

    *phex_r(4002,4000,00,<APB|XOSC|CTRL||<FREQ_RANGE|ENABLE>>)
        = bitshift(0xaa0,0,<0xaa0:1~15MHz||0:posib_axc FREQ_RANGE>); // 1 - 15MHz

/*--- Usage XOSC vs ROSC ---
    - The XOSC is disabled on chip startup
        RP2040 boots using the Ring Oscillator(ROSC)
    - must  set the APB_XOSC_CTRL:ENABLE
    - take time for XOSC to build to sufficient amplitude 
    - Startup Delay Register ---
        specifies how many clock clycles must be seen from the crystal
        before it can be used.
        - APB_XOSC_STATSUS:STABLE
            When the timer expires, this flag will be seted
        - F_xoc * Stable_t + 256
            - 12MHz(crystal) * 1ms(default) + 256 = 47(startup delay value)
    - APB_XOSC_COUNT register
        porvides a method of managing short software delays
        - Writing a value to the COUNTER reg
            triggers it to start counting down to 0 at XOSC frequency
*/
    *phex_r(4002,4000,0c,<APB|XOSC|STARTUP||<DELAY|x4>>)
        = bitshift(47,0,<posib_axs DELAY>);

    *phex_r(4002,4000,2000,<APB|XOSC|CTRL|atomic SET>) = bitshift(0xfab,12,<0xfab:ENABLE|12~23:posib ENAABLE>);

    while(1) if(*phex_r(4002,4000,04,<APB|XOSC|STATUS>) & bitshift(1,31,<||31:posib_pxs STABLE>)) break;

/*----- Clock -----
    - clock source
        ROSC(Ring Oscillator)
            - on chip, run automatically from power up
            - useed to clock the chip during the initial boot stages
            - 6Mhz(4~8 Mhz)
            - for low cost app
                - the chip can continue to run from the ROSC
        XOSC(Crystal Oscillator)
            - on power up, the XOSC is inactive
                - must be enabled in software
                - STABLE flag must be set <APB_XOSC_STATUS:31>
            - provides a precise, stable clock "reference(기준)"
            - range (1 ~ 15)Mhz
                - 12MHz in RP2040
        External clocks from GPIOs
            - can be input GPIN_0 GPIN_1 GPIO Inputs and
                on the XIN(crystal int) input to the XOSC
        the PLL
            - fast clock
            - USB PLL
                - 48MHz

*/
    // set REFerence clock:: clk_ref <- src <- XOSC
    *phex_r(4000,8000,30,<APB|CLKS|REF_CTRL||<SRC|AUXSRC>>) = bitshift(2,0,<2:xosc_clksrc||0:posib_pcr SRC>);
    *phex_r(4000,8000,3c,<APB|CLKS|SYS_CTRL||<SRC|AUXSRC>>) = bitshift(0,0,<0:clk_ref||0:posib_pcs SRC>);
}

void delay(unsigned int t){
    for(unsigned int i=0; i<t;){
        if(*phex_r(e000,e000,010,<PPB|SYST_CSR|SysTic Constrol Status Reg>)
                & bitshift(1,16,<||16:COUNTFLAG|if to 0 then set>))
            i++;
    }
}
