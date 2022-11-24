
#include<stdint.h>
#include "include/j_address.h"

int main(){
    // IO_BANK0 reset
    *phex_r(4000, c000, 3000,<APB|RESETS|RESET|CLR>)
        = bitshift(1,5,<||5:posib_arr IO_BANK0>);
    while(1)
        if(*phex(4000,c008,<APB|RESETS|DONE>) & bitshift(1,5,<||5:posi_ard_IO_BANK0>)) break; 

    // PADS_BANK0 reset
    *phex_r(4000,c000, 3000,<APB|RESETS|RESET|CLR>)
        = bitshift(1,8,<||8:posi_ard PADS_BANK0>);
    while(1)
        if(*phex(4000, c008,<APB|RESETS|DONE>) & bitshift(1,8,<posi_ard PADS_BANK0>)) break;

    *phex_r(d000, 0000,28,<SIO|OE_CLR>) = bitshift(1, 25,<||25GPIO>);
    *phex_r(d000, 0000,18,<SIO|OUT_CLR>) = bitshift(1, 25,<||25GPIO>);

    uint32_t pad25pin_reg = *phex_r(4000, 1c000, 68,<APB|PADS_BANK0|25GPIO:4+(4*25)=0x68>);
    pad25pin_reg &= ~bitshift(1, 7,<posib_apb OD|OUTPUT DISABLE);
    pad25pin_reg &= ~bitshift(1, 6,<posib_apb IE}INPUT ENABLE);

    *phex_r(4000, 1c000, 1068, <APB|PADS_BANK0|25GPIO|Atomic XOR>) = pad25pin_reg;

    *phex_r(4000, 14000, cc, <APB|IO_BANK|25GPIO) = bitshift(5,0,<5:SIO_FUNC>);

    *phex_r(d000,0000,24,<SIO|OE_SET>) = bitshift(1,25,<25-PIN>);
    while(1){
        for(volatile int i = 0x100000 ; i!=0; i--);
        *phex_r(d000,0000,1c,<SIO|OUT_XOR>) = bitshift(1, 25,<25-PIN>);
    }
    return 0;
}
