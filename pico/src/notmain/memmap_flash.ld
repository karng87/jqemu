MEMORY
{
    FLASH : ORIGIN = 0x10000000, LENGTH = 0xfc /* 0xfc == 252 ; 256 - 4*/
}

SECTIONS
{
        .text : { *(.text*) } > FLASH
}
