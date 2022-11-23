#include "include/j_address.h"

#ifndef PERIOD_SLOW
#define PERIOD_SLOW    500000
#endif

void init_timer(){
    p0x(APB_RESETS_RESET) = bitshift(1,21,<TIMER:21>);
    while(1) if(p0x(APB_RESETS_DONE) & bitshift(1,21,<TIMER>)) break;
    p0x(APB_TIMER_ALAM0) = p0x(APB_TIMER_TIMELR) + PERIOD_SLOW;
    p0x(APB_TIMER_INTE,<Interrupt Enable) = bitshift(1,0);

     __asm volatile("":::"memory");
     p0x(PPB_NVIC_ISER) = bitshift(1,0,<TIMER_IRQ_0_IRQn>);
     (void)0; // __asm volatile ("":::"memory");
}
