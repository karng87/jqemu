
#pragma once

#define SIO_BASE 0xd00000000 // IO Block Single-cycle 
    #define CPUID 0x000
    #define SIO_IN 0x004
    #define SIO_HI_IN 0x008 // QSPI pins

    #define SIO_OUT 0x10 

    #define SIO_OUT_SET 0x14 
    #define SIO_OUT_CLR 0x18 
    #define SIO_OUT_XOR 0x1c 
    #define SIO_OE 0x20 
    #define SIO_OE_SET 0x24 
    #define SIO_OE_CLR 0x28 
    #define SIO_OE_XOR 0x2c 
    #define SIO_HI_OUT 0x30 
    #define SIO_HI_OUT_SET 0x34 
    #define SIO_HI_OUT_CLR 0x38 
    #define SIO_HI_OUT_XOR 0x3c 
    #define SIO_HI_OE 0x40 
    #define SIO_HI_OE_SET 0x44 
    #define SIO_HI_OE_CLR 0x48 
    #define SIO_HI_OE_XOR 0x4c 
    // ...
