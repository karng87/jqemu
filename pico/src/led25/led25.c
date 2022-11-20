#include<stdint.h>

#define hadd(x,y) (x+y)
#define hex(w,y,args...) hadd(0x ## w ## 0000 , 0x ## y)
#define phex(w, y, args...) *((volatile unsigned int*)(hex(w,y)))

#define hadd3(x,y,z) (x+y+z)
#define phexa(w,y,atomic,args...) *((volatile unsigned int*)(hadd3(0x ## w ## 0000, 0x ## y , 0x ## atomic)))
#define pahex(w,b,y,args...) *((volatile unsigned int*)(hadd3(0x ## w ## 0000, 0x ## b ## 0000, 0x ## y)))

#define bshift(x,y,args...) ((x) << (y))

int notmain(){
    phexa(4000, c000, 3000, APB Reset, CLR) = bshift(1,5, posi_arr_IO_BANK0);
    while(1) if(phex(4000,c008, APB Reset Done) & bshift(1,5, posi_ard_IO_BANK0)) break; 

    phexa(4000,c000, 3000,APB Reset , CLR) = bshift(1,8,posi_ard_PADS_BANK0);

    while(1) if(phex(4000, c008, APB, Reset Done) & bshift(1,8, posi_ard_PADS_BANK0)) break;

    phex(d000, 0028, SIO, OE_CLR) = bshift(1, 25, led pin25);
    phex(d000, 0018, SIO, OUT_CLR) = bshift(1, 25, led pin25);

    uint32_t pad25pin_reg = phexa(4000, 1c000, 68, APB, PADS_BANK0_BASE, 25pin GPIO);

    pad25pin_reg &= ~bshift(1, 7, posib_apb_OD, Output Disable);
    pad25pin_reg &= ~bshift(1, 6, posib_apb_IE, Input Enable);

    phexa(4000, 1c000, 1068, APB, PADS_BANK0, 25GPIO,Atomic XOR) = pad25pin_reg;

    phexa(4000, 14000, cc, APB IO_BANK,GPIO25) = bshift(5,0,sio_func);

    phex(d000,24, SIO, OE_SET) = bshift(1,25, pin25 bit set);
    while(1){
        for(volatile int i = 0x100000 ; i!=0; i--);
        phex(d000,1c, SIO,OUT_XOR) = bshift(1, 25, 25 pin);
    }
    return 0;
}
