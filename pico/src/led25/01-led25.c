#include<stdint.h>
int main(){
        #define APB_SEG (0x40000000)
        #define RESETS_BASE (0xc000)
        #define RESET_REG (0x0)
            #define io_bank0_bit (5) // RESET_REG[5-bit:-<io_bank0>] = 
        #define ATOMIC_CLR (0x3000)
    *(volatile uint32_t*)(APB_SEG+RESETS_BASE+RESET_REG | ATOMIC_CLR) = (1<<io_bank0_bit);
    while(1){
            #define RESET_DONE_REG (0x08)
        if((*(volatile uint32_t*)(APB_SEG+RESETS_BASE+RESET_DONE_REG)) & (1<<io_bank0_bit)) break;
    }

        #define pads_bank0_bit (8)
    *(volatile uint32_t*)((APB_SEG+RESETS_BASE+RESET_REG) | ATOMIC_CLR) = 1<<pads_bank0_bit;
    while(1)if((*(volatile uint32_t*)(0x40000000 + 0xc000 + RESET_DONE_REG)) & (1<<8)) break;

    unsigned int pin25 = 25;
    #define SIO_SEG (0xd0000000)
        #define SIO_OE_CLR_REG (0x28)
        #define SIO_OUT_CLR_REG (0x18)
    *(volatile uint32_t*)((SIO_SEG) + SIO_OE_CLR_REG) = 1ul << pin25;
    *(volatile uint32_t*)((SIO_SEG) + SIO_OUT_CLR_REG) = 1ul << pin25;

            #ifndef APB_SEG
            #define APB_SEG (0x40000000)
            #endif
            #define IO_BANK0_BASE (0x14000)
            #define PADS_BANK0_BASE (0x1c000)
                #define PADS_BANK0_25PIN_REG (0x68)
                    #define input_enable_bit (6)
                    #define output_disable_bit (7)
    uint32_t pad25pin_reg = *(volatile uint32_t*)(APB_SEG+PADS_BANK0_BASE+PADS_BANK0_25PIN_REG);
    //pad25pin_reg = (pad25pin_reg ^ (1<< input_enable_bit)) & (1<<input_enable_bit | 1<<output_disable_bit);
    pad25pin_reg &= ~(1<<output_disable_bit);
    pad25pin_reg &= ~(1<<input_enable_bit);

            #define ATOMIC_XOR (0x1000)
    *(volatile uint32_t*)(APB_SEG+PADS_BANK0_BASE+PADS_BANK0_25PIN_REG | ATOMIC_XOR) = pad25pin_reg;

            #ifndef IO_BANK0_BASE
            #define IO_BANK0_BASE (0x14000)
            #endif
                #define IO_BANK0_25PIN_CTRL_REG (0xcc)
                #define funcsel_bit (0b11111) // [4:0-<FUNCSEL>]
                    #define sio_func (5)
    *(volatile uint32_t*)(APB_SEG+IO_BANK0_BASE+IO_BANK0_25PIN_CTRL_REG) = sio_func;
    uint32_t v = *(volatile uint32_t*)(APB_SEG+IO_BANK0_BASE+IO_BANK0_25PIN_CTRL_REG);

            #ifndef SIO_SEG
                #define SIO_SEG (0xd0000000)
            #endif
                #define SIO_OE_SET_REG (0x24)
    *(volatile uint32_t*)(SIO_SEG+SIO_OE_SET_REG) = 1ul<< pin25;
    while(1){
        for(volatile int i = 10000; i!=0; i--);
            #define SIO_OUT_XOR_REG (0x1c)
        *(volatile uint32_t*)(SIO_SEG+SIO_OUT_XOR_REG) = 1ul << pin25;
    }
    return 0;
}
