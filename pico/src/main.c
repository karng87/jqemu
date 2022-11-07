/* SPDX-License-Identifier: MIT */
#include <stdint.h>

#define OP_RW  (0x0000)
#define OP_XOR (0x1000)
#define OP_SET (0x2000)
#define OP_CLR (0x3000)

#define RESETS_BASE                 (0x4000C000)

#define RESETS_RESET             (RESETS_BASE+0x0)
#define RESETS_RESET_DONE        (RESETS_BASE+0x8)

#define SIO_BASE (0xD0000000)

#define SIO_GPIO_OUT_SET (SIO_BASE+0x14)
#define SIO_GPIO_OUT_CLR (SIO_BASE+0x18)
#define SIO_GPIO_OUT_XOR (SIO_BASE+0x1C)
#define SIO_GPIO_OE_SET (SIO_BASE+0x24)
#define SIO_GPIO_OE_CLR (SIO_BASE+0x28)

#define PADS_BANK0_BASE (0x4001C000)
#define PADS_BANK0_GPIO (0x68)

#define PADS_GPIO25 (PADS_BANK0_BASE + PADS_BANK0_GPIO)

#define IO_BANK0_BASE (0x40014000)
#define IO_BANK_GPIO25_CTRL (0xCC)

#define IO_GPIO25_CTRL (IO_BANK0_BASE + IO_BANK_GPIO25_CTRL)

uint32_t read_reg(uint32_t addr) {
        return (*((volatile uint32_t *)addr));
}

void write_reg(uint32_t addr, uint32_t value) {
        *((volatile uint32_t *)addr) = value;
}

void write_reg_op(uint32_t addr, uint32_t value, uint32_t op) {
        write_reg(addr | op, value);
}

int main(void) {

        /////////////////////
        // This initialise code is ported from https://github.com/dwelch67/raspberrypi-pico/blob/master/blinker00/notmain.c
        // release reset on IO_BANK0
        write_reg_op(RESETS_RESET, 1<<5, OP_CLR); //IO_BANK0
        //wait for reset to be done
        while(1) {
                if((read_reg(RESETS_RESET_DONE)&(1<<5))!=0) break;
        }
        write_reg_op(RESETS_RESET, (1<<8), OP_CLR); //PADS_BANK0
        while(1) {
                if((read_reg(RESETS_RESET_DONE)&(1<<8))!=0) break;
        }
        /////////////////////

        // GPIO init
        write_reg(SIO_GPIO_OE_CLR, (1ul<<25));
        write_reg(SIO_GPIO_OUT_CLR, (1ul<<25));
        uint32_t ra = read_reg(PADS_GPIO25);
        write_reg_op(PADS_GPIO25, (ra^0x40)&0xC0, OP_XOR);

        write_reg(IO_GPIO25_CTRL, 0x5);
        uint32_t v = read_reg(IO_GPIO25_CTRL);

        // Blink
        write_reg(SIO_GPIO_OE_SET, (1ul<<25));
        while (1) {
                for (int i = 100000; i != 0; i--) ;
                write_reg(SIO_GPIO_OUT_XOR, (1ul<<25));
        }
        return 0;
}
