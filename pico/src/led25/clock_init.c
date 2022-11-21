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

void clock_init(void){
    #define APB_CLOCKS  hex(4000,8000)
        #define APB_CLK_REF_CTRL hex(4000,8030,<REFERENCE CLOCK CTRL>)
            #define posib_acr_SRC posib(0,:1<Select SRC>)
                #define sb_rosc_clksrc_ph 0
                #define sb_clksrc_clk_ref_aux 1
                #define sb_xosc_clk_src 2

        #define APB_CLK_SYS_CTRL hex(4000,803c,<SYSTEM CLOCK CTRL>)
            #define posib_acs_SRC posib(0,:0<Select CLK SRC|0=clk_ref,1=clssrc_sys_aux>)
        #define APB_CLK_SYS_RESUS_CTRL hex(4000,8078,<SYSTEM RESUSCURE CTRL>)
            #define posb_acr_TIMEOUT posib(0,:7<>)
            #define posb_acr_ENABLE posib(8,:8<>)
            #define posb_acr_FRCE posib(12,:8<Force resus>)
            #define posb_acr_CLEAR posib(16,:16<>)

    p0x(APB_CLK_SYS_RESUS_CTRL) = 0;
    //p0x(APB_CLK_REF_CTRL) = 0;
    //p0x(APB_SYS_CTRL_CTRL) = 0;

    #define APB_XOSC             hex(4002,4000,<EXTERNAL OSCILATOR COUNTER>)
        #define APB_XOSC_CTRL    hex(4002,4000)
            #define posib_axc_FREQ_RANGE posib(0,:11<Frequency Range|0xaa0:1~15MHz>)
                #define set_1_15MHz bshift(0xaa0 << 0)
            #define posib_axc_ENABLED posib(12,:23<>)
                #define enable_ROSC bshift(0xfab,12,<Ring Oscillator Enable)
                #define disable_ROSC bshift(0xdle,12,<Ring Oscillator Disable)
        #define APB_XOSC_STATUS  hex(4002,4004)
            #define posib_axs_STABLE posib(31,:31<Running and Stable>)
        #define APB_XOSC_STARTUP hex(4002,400C)
            #define posib_axs_DELAY posib(0,:13<Delay>)
    p0x(APB_XOSC_CTRL) = bshift(0xaa0,0,<1~15MHz|posib_axc FREQ_RANGE>); // 1 - 15MHz
    p0x(APB_XOSC_STARTUP) =  bshift(47,0,<posib_axs DELAY>);
    p0x_set(APB_XOSC_CTRL) = bshift(0xfab,12,<Ring Oscillator Enaable>);

    while(1) if(p0x(APB_XOSC_STATUS)&(1<<31)) break;
    p0x(APB_CLK_REF_CTRL) = bshift(2,0,<Select REFERENCE CLK SRC|set xosc_clk_src>);
    p0x(APB_CLK_SYS_CTRL) = bshift(0,0,<Select SYSTEM CLK SRC|clk_ref>);
}

void delay(unsigned int t){
    for(unsigned int i=0; i<t;){
    #define PPB_STK_CSR hex(e000,e010,<Systic Control Status Reg)
        #define posib_psc_COUNT_FLAG posib(16,:16<return 1 if timer coounted to 0>)
        if(p0x(PPB_STK_CSR) & bshift(1,16,<COUNTER FLAG>)) i++;
    }
}
