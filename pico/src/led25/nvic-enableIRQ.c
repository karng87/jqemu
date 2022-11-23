#include<pico/j_address.h>

void nvic_enableIRQ(int IRQn){
    if(IRQn>=0){
        (void)0;
        __asm volatile("":::"memory");
        *phex(e000,e100,<PPB_NVIC_ISER>) = bitshift(1,0,<TIMER_IRQ_0_IRQn>);
        (void)0; // __asm volatile ("":::"memory");
    }
}
