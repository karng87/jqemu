#define hadd(x,y,z) ((x)+(y)+(z))
#define hex_reg(x,y,z,args...) (volatile unsigned int*)(hadd(0x ## x ## 0000, 0x ## y, 0x ## z))
//#define hex_base(x,y,args...) hex_reg(x,y,0)
#define bitshift(x,y,args...) ((x)<<(y))

void init_clock(){

    *hex_reg(4000,8000,78,<APB|CLOCKS|RESUS|CTRL>) = bitshift(0,0,<0:timeout||TIMEOUT:0~7>);

    *hex_reg(4002,4000,00,<APB|XOSC|CTRL>) = bitshift(0xaa0,0,<0xaa0:1~15MHz||FREQ_RANGE:0~11:>);
    *hex_reg(4002,4000,0c,<APB|XOSC|STARTUP:warming up>) = bitshift(47,0,<47||DELAY:0~13>);
    *hex_reg(4002,4000,2000,<APB|XOSC|CTRL|SET:atomic) = bitshift(0xfab,12,<0xfab:ENABLE||ENABLE:12~23>);
    while(1) if(*hex_reg(4002,4000,04,<APB|XOSC|STATUS>) & bitshift(1,31,<is_set:1||STABLE:31>)) break;
    *hex_reg(4000,8000,30,<APB|CLOCKS|REF|CTRL>) = bitshift(2,0,<xosc_clksrc:2||SRC:0~1);
    *hex_reg(4000,8000,3c,<APB|CLOCKS|SYS|CTRL>) = bitshift(0,0,<clk_ref:0||SRC:0>);
}

void do_delay(unsigned int x){
    for(unsigned int i=0;i<x;){
        if(*hex_reg(e000,0000,e010,<PPB|SYST|CSR>) & bitshift(1,16,<timer cnt == 0?||COUNTFLAG:16>)) i++; 
    }
}

int notmain(){

    init_clock();

    // reset gpio(IO_BANK0)
    *hex_reg(4000,c000,3000,<APB|RESETS|RESET|CLR>) = bitshift(1,5,<set||IO_BANK0:5>);
    while(1) if(*hex_reg(4000,c000,08,<APB|RESETS|DONE>) & bitshift(1,5,<set?||IO_BANK0:5>)) break;

    *hex_reg(d000,0000,28,<SIO|GPIO|OE_CLR>)  = bitshift(1,25,<25-PIN>);
    *hex_reg(d000,0000,18,<SIO|GPIO|OUT_CLR>) = bitshift(1,25,<25-PIN>);

    *hex_reg(4001,4000,cc,<APB|IO_BANK0|CTRL|25-GPIO-PIN>) = bitshift(5,0,<SIO:5||FUNCSEL:0>);
    *hex_reg(d000,0000,24,<SIO|GPIO|OE_SET>) = bitshift(1,25,<25-PIN>);


    *hex_reg(e000,0000,e010,<PPB|SYST|CSR) = bitshift(1,2,<processor clock:1||CLKSOURCE:2>);
    *hex_reg(e000,0000,e014,<PPB|SYST|RVR:Reload Value Reg) = bitshift(12000000-1,2,<f-1:12MHz||RELOAD:0~23:when cnt=0,reload to SYST_CVR>);
    *hex_reg(e000,0000,e018,<PPB|SYST|CVR:Current Value Reg) = bitshift(12000000-1,2,<any||CURRENT0~23: reads cnt value|when cnt=0,reload to SYST_CVR>);
    *hex_reg(e000,0000,e010,<PPB|SYST|CSR) = 
            bitshift(1,2,<processor clock:1||CLKSOURCE:2>) |
            bitshift(1,0,<cnt enable:1||ENABLE:0>);

    for(unsigned int i=0;i<100;i++){
        *hex_reg(d000,0000,1c,<SIO|GPIO|OUT|XOR>) = bitshift(1,25,<25-GPIO-pin>);
        do_delay(i%3);
    }
    return 0;
}
