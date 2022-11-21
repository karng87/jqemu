#include<stdint.h>

#define hadd(x,y) (x+y)
#define h0x(w,y,args...) hadd(0x ## w ## 0000 , 0x ## y)
#define p0x(w, y, args...) *((volatile unsigned int*)(h0x(w,y)))

#define had3(x,y,z) (x+y+z)

#define h0xa(w,y,atomic,args...) had3(0x ## w ## 0000 , 0x ## y, 0x ## atomic)
#define ha0x(w,atomic,y,args...) had3(0x ## w ## 0000 , 0x ## atomic ## 0000, 0x ## y)

#define p0xa(x,y,atomic,args...) *((volatile unsigned int*)(h0xa(x,y,atomic)))
#define pa0x(x,atomic,y,args...) *((volatile unsigned int*)(ha0x(x,atomic,y)))

#define bshift(x,y,args...) ((x) << (y))

int main(void){
    p0xa(4000, c000, 3000,<APB|RSET|ATOMIC CLR>) = bshift(1,5,<posi_arr IO_BANK0>);
    while(1) if(p0x(4000,c008,<APB|RESET_DONE>) & bshift(1,5,<posi_ard IO_BANK0>)) break; 

    p0xa(4000,c000, 3000,<APB|RESET|ATOMIC CLR>) = bshift(1,8,<posi_ard PADS_BANK0>);
    while(1) if(p0x(4000, c008,<APB|RESET_DONE>) & bshift(1,8,<posi_ard PADS_BANK0>)) break;

    p0x(d000, 0028,<SIO|OE_CLR>) = bshift(1, 25,<led PIN25>);
    p0x(d000, 0018,<SIO|OUT_CLR>) = bshift(1, 25,<led PIN25>);

    uint32_t pad25pin_reg = p0xa(4000, 1c000, 68,<APB|PADS_BANK0_BASE|GPIO25 pin>);

    pad25pin_reg &= ~bshift(1, 7,<posib_apb OD = Output Disable>);
    pad25pin_reg &= ~bshift(1, 6,<posib_apb IE = Input Enable>);

    p0xa(4000, 1c000, 1068,<APB|PADS_BANK0|25GPIO|Atomic XOR>) = pad25pin_reg;

    p0xa(4000, 14000, cc,<APB|IO_BANK|GPIO25>) = bshift(5,0,<SIO_FUNC:5>);

    p0x(d000,24,<SIO|OE_SET>) = bshift(1,25,<led PIN25:25>);
    while(1){
        for(volatile int i = 0x10000 ; i!=0; i--);
        p0x(d000,1c,<SIO|OUT_XOR>) = bshift(1, 25,<led PIN25>);
    }
    return 0;
}
