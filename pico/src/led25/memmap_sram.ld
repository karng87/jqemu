MEMORY
{
    SRAM : ORIGIN = 0x2000000, LENGTH = 0xfc /* 252  = 256 -4*/
}
SECTIONS
{
    .text : { *(.text*) } > SRAM
}
