#include<stdint.h>
#include "include/j_address.h"

extern void init_sys();
extern void init_timer();
extern void init_uart(unsigned int baud);

int main(){
    init_sys();
    init_timer();
    init_uart(115200);
    char* msg = "\nHello, Wolrd\n";
    while(*msg){
        while(p0x(APB_UART0_FR) & bitshift(1,posib_pu0f_TXFF,<TX FIFO FULL>));
        p0x(APB_UART0_DR)= *(msg++);
    }

    // GPIO 25 OUTPUT ENABLE
    *phex(d000,24,<SIO|OE_SET>) = bitshift(1,25,<25GPIO>);
    *phex_a(4000, 14000, cc,<APB|IO_BANK0|25GPIO<4+25*8=0xcc>>) = bitshift(5,0,<5:SIO FUNC|0:posib>);
    (void)main;

    // GPIO 25 OUTPUT CLEAR
    *phex(d000, 0018,<SIO|OUT_CLR>) = bitshift(1, 25,<led pin25>);
    (void)main;

    while(1){
        for(volatile int i = 0x10000 ; i!=0; i--);
        *phex(d000,1c,<SIO|OUT_XOR>) = bitshift(1, 25,<25GPIO>);
    }
    return 0;
}
