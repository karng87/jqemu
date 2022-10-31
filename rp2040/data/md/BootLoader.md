# Boot process
    1. power up
    2. pico bootloader
        the core starts executing in the RP2040 boot ROM
            reads the first 256 bytes 
                from the(off-chip,serial-attached) flash(ROM)
                into SRAM
            the last 4 byte are reserved for a CRC32,
                which must validate before the ROM will jump to SRAM.
                (IBM PC: 55 aa)
        make the rest of the program ready to run

        cf) typical bootloader:
                might simply read more data from disk,
        pico bootloader:
           RP2040's XIP functionality
               - the external flash is fully memory-mapped
                   - to place  the pc in the flash memory range,
                        and let it rip(let it go).

