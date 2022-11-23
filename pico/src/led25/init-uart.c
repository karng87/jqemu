#include<pico/j_address.h>

void init_uart(unsigned int baud){
    p0x_clr(APB_RESETS_RESET) = bitshift(1,posib_prr_UART0);
    while(1) if(p0x(APB_RESETS_DONE) & bitshift(1,posib_prr_UART0)) break;

    baud = (F_REF*4)/baud;
    p0x(APB_UART0_IBRD) = baud / 64;
    p0x(APB_UART0_FBRD) = baud % 64;

    p0x(APB_UART0_LCR_H) = bitshift(3,posib_pul_WLEN,<WORD LENGTH>) | bitshift(1,posib_pul_FEN,<FIFO ENABLE>);
    p0x(APB_UART0_CR) = bitshift(1, posib_puc_UARTEN) | bitshift(1,posib_puc_RXE) | bitshift(1,posib_puc_TXE);

    p0x(

}unsigned
