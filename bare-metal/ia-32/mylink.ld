ENTRY(karng)

SECTIONS
{
    . = 0x40000000;
    .text :
    {
        *(.text)
        *(.before)
        KEEP(*(.keep))
        /* *(.keep) */
        *(.after)
    }
}

