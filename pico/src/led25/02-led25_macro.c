#include<stdint.h>

#define hadd(x,y,z) (x+y+z)

#define hex(x,y,args...) hadd(0x ## x ## 0000 , 0x ## y,0)
#define hex3(x,y,z,args...) hadd(0x ## x ## 0000 , 0x ## y,  0x ## z)

#define phex(x, y, args...) (*((volatile unsigned int*)(hex(x,y))))
#define phex3(x, y, z, args...) (*((volatile unsigned int*)(hex3(x,y,z))))

#define p0x(x,args...) (*(volatile unsigned int*)(x))
#define p0x_a(x,a,args...) (*(volatile unsigned int*)hex(x,a))
#define p0x_xor(x,args...) (*(volatile unsigned int*)hex(x,0x1000))
#define p0x_set(x,args...) (*(volatile unsigned int*)hex(x,0x2000))
#define p0x_clr(x,args...) (*(volatile unsigned int*)hex(x,0x3000))


#define bitshift(x,y,args...) ((x) << (y))
#define bitmask(x,args...) (x)

int main(){
    phex3(4000, c000, 3000, APB Reset, CLR) = bitshift(1,5, posi_arr_IO_BANK0);
    while(1) if(phex(4000,c008, APB Reset Done) & bitshift(1,5, posi_ard_IO_BANK0)) break; 

    phex3(4000,c000, 3000,APB Reset , CLR) = bitshift(1,8,posi_ard_PADS_BANK0);

    while(1) if(phex(4000, c008, APB, Reset Done) & bitshift(1,8, posi_ard_PADS_BANK0)) break;

    phex(d000, 0028, SIO, OE_CLR) = bitshift(1, 25, led pin25);
    phex(d000, 0018, SIO, OUT_CLR) = bitshift(1, 25, led pin25);

    uint32_t pad25pin_reg = phex3(4000, 1c000, 68, APB, PADS_BANK0_BASE, 25pin GPIO);

    pad25pin_reg &= ~bitshift(1, 7, posib_apb_OD, Output Disable);
    pad25pin_reg &= ~bitshift(1, 6, posib_apb_IE, Input Enable);

    phex3(4000, 1c000, 1068, APB, PADS_BANK0, 25GPIO,Atomic XOR) = pad25pin_reg;

    phex3(4000, 14000, cc, APB IO_BANK,GPIO25) = bitshift(5,0,sio_func);

    phex(d000,24, SIO, OE_SET) = bitshift(1,25, pin25 bit set);
    while(1){
        for(volatile int i = 0x10000 ; i!=0; i--);
        phex(d000,1c, SIO,OUT_XOR) = bitshift(1, 25, 25 pin);
    }
    return 0;
}
