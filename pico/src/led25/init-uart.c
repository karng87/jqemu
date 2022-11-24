#include "include/j_address.h"

void init_uart(unsigned int baud){
    *phex_r(4000,c000,3000,<APB|RESETS|RESET|atomic CLR>)
        = bitshift(1,22,<||22:posib_prr_UART0);

    while(1) if(*phex_r(4000,c000,08,<APB|RESETS|DONE>)
                & bitshift(1,22,<||22:posib_prr_UART0>)) break;

    baud = (F_REF*4)/baud;

    *phex_r(4003,4000,024,<APB|UART0|IBRD:Integer<quotient> Baud Rate Divider>) = baud / 64;
    *phex_r(4003,4000,028,<APB|UART0|FBRD:Fraction<remainder> Baud Rate Divider>) = baud % 64;

    *phex_r(4003,4000,02c,<APB|UART0|LCR_H:Line Control Reg>)
        = bitshift(3,5,<2^3||4:6|posib_pu0l WLEN:WORD LENGTH>)
        | bitshift(1,4,<||4:|posib_pu0l FEN:FIFO ENABLE>);

    *phex_r(4003,4000,030,<APB|UART0|CR>)
        = bitshift(1,0,<||0:|posib_pu0c EN|uart enable>)
        | bitshift(1,9,<||9:|posib_pu0c RXE:Receive Enable>)
        | bitshift(1,8,<||8:|posib_pu0c TX enable>);

        #define APB_IO_BANK0_CTRL_0_29 hex_r(4000,1400,004, inc +8<25*8+4>, sio_func == 5)
                #define sel_pibc_funcsel_0_4_8_12_16_28_UART0_TX bitsel(2,<gpio-0,4,8,12,16,28>)
                #define sel_pibc_funcsel_1_5_9_13_17_29_UART0_RX bitsel(2,<gpio-1,5,9,13,17,29>)
                #define sel_pibc_funcsel_SIO bitsel(5,<gpio-0~29|Single-Cycle I/O>)
    // TX init gpio-0
    *phex_r(4000,1400,004,<APB|IO_BANK0|CTRL_0_29|0GPIO pin|04+pin0*8>)
        = bitshift(2,0,<UART0_TX||0:posib_pibc FUNCSEL>);
    (void)0;

    // RX init gpio-1
    p0x_a(4000,1400,00c)APB_IO_BANK0_CTRL_0_29|04+pin1*8>)
        = bitshift(2,0,<sel_pibc_funcsel_1_5_9_13_17_29 UART0 RX||0:posib_pibc FUNCSEL);
    (void)0;
}
