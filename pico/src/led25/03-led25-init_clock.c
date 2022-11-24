#include<stdint.h>
#include "include/j_address.h"

extern void init_clock(void);
extern void delay(unsigned int);

int main(){
    init_clock();

    // IO_BANK0 reset
    *phex_r(4000, c000, 3000,<APB|RESETS|RESET|CLR>)
            = bitshift(1,5,<||5:posib_arr IO_BANK0>);
    // IO_BANK0 reset done
    while(1)
        if(*phex(4000,c008,<APB|RESETS|DONE>) & bitshift(1,5,<||5:posi_ard_IO_BANK0>)) break; 

    // disable outpue
    *phex_r(d000, 0000,28,<SIO|OE_CLR=output disable>)
            = bitshift(1, 25,<||25GPIO>);

    // set low to 25GPIO_PIN
    *phex_r(d000, 0000,18,<SIO|OUT_CLR=set low:value clear>)
            = bitshift(1, 25,<||25GPIO>);
    // set SIO funcsel
    *phex_r(4000, 14000, cc, <APB|IO_BANK|25GPIO)
            = bitshift(5,0,<5:SIO_FUNC>);
    // enable output
    *phex_r(d000,0000,24,<SIO|OE_SET|output enable>)
            = bitshift(1,25,<select 25GPIO_PIN>);

    #define PPB_STK_CSR hex(e000,e010,<Systic Control Status Reg)
        #define posib_psc_CNTEN posib(0,:0<Counter Enable|0:disable,1:enable>)
        #define posib_psc_TICKINT posib(1,:1<Tick Interrupt>)
        #define posib_psc_CLKSRC posib(2,:2<0:External Reference Clock,1:Processor Clock >)
        #define posib_psc_COUNT_FLAG posib(16,:16<return 1 if timer coounted to 0>)

    #define PPB_STK_RVR hex(e000,e014,<Systic Reload Value Reg)
    #define PPB_STK_CVR hex(e000,e018,<Systic Current Value Reg)

    *phex_r(e000,e000,010,<PPB|SYST|CSR>)
        = bitshift(1,2,<0:external reference clock|1:proceessor clock||CLKSRC:2~2>);

    *phex_r(e000,e000,014,<PPB|SYST|RVR:RELOAD into CVR when the counter reachs to 0>) // 
        = bitshift(500000-1,0,<0~23:RELOAD Value>); // reload to 12 MHz,so fire per 1 sec.

    // set 0 CURRENT value
    *phex_r(e000,e000,018,<PPB|SYST|CVR:current value>)
        = bitshift(500000-1,0,<||0~23:CURRENT|write-clear|writing with any val clears to 0>);

    *phex_r(e000,e000,010,<PPB|STK|CSR:control and status>)
        =   bitshift(1,0,<||0~0:ENABLE>) 
          | bitshift(1,4,<1:Processor clock||2~2:CLKSRC>);

    for(unsigned int i=0;i<10;i++){
        *phex_r(d000,0000,1c,<SIO|OUT_XOR>)
            = bitshift(1,25,<25 PIN>);
        while(1) if(*phex_r(e000,e000,10,<CSR>) & bitshift(1,16,<||COUNTFLAG>)) break; 
    }
    return 0;
}
