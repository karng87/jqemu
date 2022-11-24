#include "include/j_address.h"

#ifndef PERIOD_SLOW
#define PERIOD_SLOW    500000
#endif

void init_timer(){

    *phex_r(4000,c000,3000,<APB|RESETS|RESET|atomic CLR>)
        = bitshift(1,21,<TIMER:21>);

    while(1) if(*phex_r(4000,c000,08,<APB|RESETS|DONE>)
                & bitshift(1,21,<||21:TIMER>)) break;

    volatile unsigned int timer_period = PERIOD_SLOW;

    *phex_r(4005,4000,10,<APB|TIMER|ALAM0|the alarm fires when TIMER_ALARM0 == TIMELR>)
        = *phex_r(4005,4000,0c,<APB|TIMER|LR:Low value Read>) + timer_period;
    *phex_r(4005,4000,38,<APB|TIMER|INTE:interrupt enable>)
        = bitshift(1,0,<||0:ALAM0||1:ALAM1||2:ALAM2||3:ALAM3>);
     __asm volatile("":::"memory");
     *phex_r(e000,e000,100,<PPB|NVIC|ISER:Interrupt Set Enable Reg)
         = bitshift(1,0,<1:enable interrupt||0:31::SETEN:Interrupt Set enable>);
     (void)0; // __asm volatile ("":::"memory");

}
