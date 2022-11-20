
MEMORY
{
    FLASH : ORIGIN = 0x10000000, LENGTH = 0xfc /* 0xfc == 252 ; 256 - 4*/
    SRAM : ORIGIN = 0x2000000, LENGTH = 0xfc /* 252  = 256 -4*/
}

SECTIONS
{
        .text : { *(.text*) } > FLASH
}
