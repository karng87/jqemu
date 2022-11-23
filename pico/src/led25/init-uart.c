#include "include/j_address.h"

void init_uart(unsigned int baud){
    p0x_clr(APB_RESETS_RESET) = bitshift(1,posib_prr_UART0);
    while(1) if(p0x(APB_RESETS_DONE) & bitshift(1,posib_prr_UART0)) break;

    baud = (F_REF*4)/baud;
    p0x(APB_UART0_IBRD,<Integer Baud Rate Divider>) = baud / 64;
    p0x(APB_UART0_FBRD,<Fraction Baud Rate Divider>) = baud % 64;

    p0x(APB_UART0_LCR_H,<Line Conrol Reg>) = bitshift(3,posib_pu0l_WLEN,<WORD LENGTH>) | bitshift(1,posib_pu0l_FEN,<FIFO ENABLE>);
    p0x(APB_UART0_CR,<Control Reg>) = bitshift(1, posib_pu0c_EN) | bitshift(1,posib_pu0c_RXE) | bitshift(1,posib_pu0c_TXE);

    // TX init gpio-0
    p0x_a(APB_IO_BANK0_CTRL_0_29,0*8,<pin 0>) = bitshift(sel_pibc_funcsel_0_4_8_12_16_28_UART0_TX, posib_pibc_FUNCSEL,<2:UART0 TX|0:FUNCSEL>);
    (void)0;

    // RX init gpio-1
    p0x_a(APB_IO_BANK0_CTRL_0_29,1*8,<pin 1>) = bitshift(sel_pibc_funcsel_1_5_9_13_17_29_UART0_RX, posib_pibc_FUNCSEL,<2:UART0 RX|0:FUNCSEL>);
    (void)0;
}
