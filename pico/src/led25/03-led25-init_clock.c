#include<stdint.h>

#define hadd(x,y) (x+y)
#define hex(w,y,args...) hadd(0x ## w ## 0000 , 0x ## y)
#define phex(w, y, args...) *((volatile unsigned int*)(hex(w,y)))

#define hadd3(x,y,z) (x+y+z)
#define phexa(w,y,atomic,args...) *((volatile unsigned int*)(hadd3(0x ## w ## 0000, 0x ## y , 0x ## atomic)))
#define pahex(w,b,y,args...) *((volatile unsigned int*)(hadd3(0x ## w ## 0000, 0x ## b ## 0000, 0x ## y)))

#define p0x(x,args...)  *((volatile unsigned int*)(x))
#define p0x_a(x,y,args...)  *((volatile unsigned int*)(hex(x,y)))
#define p0x_xor(x,args...)  *((volatile unsigned int*)(hex(x,1000)))
#define p0x_set(x,args...)  *((volatile unsigned int*)(hex(x,2000)))
#define p0x_clr(x,args...)  *((volatile unsigned int*)(hex(x,3000)))

#define bshift(x,y,args...) ((x) << (y))
extern void init_clock(void);
extern void delay(unsigned int);

int main(){
    init_clock();
    phexa(4000, c000, 3000,<APB|RESET|CLR>) = bshift(1,5,<posi_arr IO_BANK0>);
    while(1) if(phex(4000,c008,<APB|RESET DONE>) & bshift(1,5,<posi_ard IO_BANK0>)) break; 

    phexa(4000,c000, 3000,<APB|RESET|CLR>) = bshift(1,8,<posi_ard PADS_BANK0>);
    while(1) if(phex(4000, c008,<APB|RESET DONE>) & bshift(1,8,<posi_ard PADS_BANK0>)) break;

    phex(d000, 0028,<SIO|OE_CLR>) = bshift(1, 25,<led pin25>);
    phex(d000, 0018,<SIO|OUT_CLR>) = bshift(1, 25,<led pin25>);

    uint32_t pad25pin_reg = phexa(4000, 1c000, 68,<APB|PADS_BANK0_BASE|GPIO-25PIN>);

    pad25pin_reg &= ~bshift(1, 7,<posib_apb OD|Output Disable>);
    pad25pin_reg &= ~bshift(1, 6,<posib_apb IE|Input Enable>);

    phexa(4000, 1c000, 1068,<APB|PADS_BANK0|GPIO-25PIN|XOR>) = pad25pin_reg;

    phexa(4000, 14000, cc,<APB|IO_BANK|GPIO25>) = bshift(5,0,<SIO_FUNC>);
    phex(d000,24,<SIO|OE_SET>) = bshift(1,25,<PIN 25>);

    #define PPB_STK_CSR hex(e000,e010,<Systic Control Status Reg)
        #define posib_psc_CNTEN posib(0,:0<Counter Enable|0:disable,1:enable>)
        #define posib_psc_TICKINT posib(1,:1<Tick Interrupt>)
        #define posib_psc_CLKSRC posib(2,:2<0:External Reference Clock,1:Processor Clock >)
        #define posib_psc_COUNT_FLAG posib(16,:16<return 1 if timer coounted to 0>)

    #define PPB_STK_RVR hex(e000,e014,<Systic Reload Value Reg)
    #define PPB_STK_CVR hex(e000,e018,<Systic Current Value Reg)

    phex(e000,e010,<PPB|STK|CSR:control and status>) = bshift(1,4,<CLKSRC|1:Processor Clock>);
    phex(e000,e014,<PPB|STK|RVR:reload value>) = bshift(12000000-1,0,<RELOAD Value>);
    phex(e000,e018,<PPB|STK|CVR:current value>) = bshift(12000000-1,0,<CURRENT Value>);
    phex(e000,e010,<PPB|STK|CSR:control and status>) = bshift(1,0,<Counter Enable>) | bshift(1,4,<CLKSRC|1:Processor Clock>);

    for(unsigned int i=0;i<100;i++){
        phex(d000,1c,<SIO|OUT_XOR>) = bshift(1,25,<25 PIN>);
        delay(1);
    }
    return 0;
}
