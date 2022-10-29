#define SIO_SEG 0xD0000000
#define GPIO_OUT_SET 0x14
#define GPIO_OUT_CLR 0x18

#define GPIO_OE_SET 0x24
#define GPIO_OE_CLR 0x28
#define GPIO_FUNC_SIO 5

#define IO_BANK0_SEG 0x40014000
#define IO_QSPI_SEG 0x40018000

#define PADS_BANK0_SEG 0x4001C000
#define PADS_QSPI_SEG 0x40020000

#define PADS_BANK0_IE 6 // Input Enable
#define PADS_BANK0_OD 7 // Output Disable

unsigned int pin25 = 25;

int main(){

    *(volatile unsigned int*)((SIO_SEG) + GPIO_OE_CLR) = 1ul << pin25;
    *(volatile unsigned int*)((SIO_SEG) + GPIO_OUT_CLR) = 1ul << pin25;

    unsigned int pads_bank0_pin25= *(volatile unsigned int*)(PADS_BANK0_SEG + (pin25*4 + 4));
    pads_bank0_pin25 |= 1<<PADS_BANK0_IE;
    pads_bank0_pin25 &= ~(1<<PADS_BANK0_OD);
    *(volatile unsigned int*)(PADS_BANK0_SEG + (pin25*4 + 4)) = pads_bank0_pin25;

    *(volatile unsigned int*)(IO_BANK0_SEG + 0x0cc) = 5;

    *(volatile unsigned int*)(SIO_SEG + GPIO_OE_SET) = 1<< pin25;

    for(;1;){

        *(volatile unsigned int*)(SIO_SEG + GPIO_OUT_SET) |= 1<< pin25;

        for(volatile int i=0; i<0xffffff; i++);
        *(volatile unsigned int*)(SIO_SEG + GPIO_OUT_CLR) |= 1<< pin25;
        for(volatile int i=0; i<0xffffff; i++);
    }
    return 0;
}
