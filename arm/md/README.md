# Raspberry pi pico
    • Dual Cortex M0+ processor cores, up to 133MHz
    • 264kB of embedded SRAM in 6 banks
    • 30 multifunction GPIO
    • 6 dedicated IO for SPI Flash (supporting XIP)
    • Dedicated hardware for commonly used peripherals
    • Programmable IO for extended peripheral support
    • 4 channel ADC with internal temperature sensor, 500ksps, 12-bit conversion
    • USB 1.1 Host/Device

# Boot Sequence
    - On power up, 
        - the core starts executing in the RP2040 boot ROM, 
            which reads 
                the first 256 bytes 
                    from the (off-chip, serial-attached) flash 
                    into SRAM. 
        - The last four bytes of that chunk 
            are reserved for a CRC32, 
                which must validate 
                    before the ROM will jump to it.

    - In a normal Pico C program, these 256 bytes are provided by the aforementioned bootloader. 
        Its job is to make the rest of the program ready to run. 

    - Whereas a typical bootloader might simply read more data from disk, 
        the Pico's bootloader can take advantage of the RP2040's execute-in-place functionality. 

        In short, 
        the external flash is fully memory-mapped, 
        and it's fast enough simply 
            to place the program counter in the flash memory range, and 
            let it rip. 

        Basically all the bootloader has to do here is 
            to configure the hardware to communicate with the flash (over serial) and 
            jump to the program
    
    - But for this first program, 
        I decided to try doing without the bootloader. 
        For one thing, using the bootloader was a soft violation of the only my code goal. 
        But moreover, using the bootloader would complicate my program: 
            it would require prepending it at build time, and 
            it also meant the main program needed an interrupt vector table 
            (since one thing the bootloader does is to replace the ROM's vector table with the program's). 
            And anyway, I was setting out to write a simple program 
                that could definitely fit into the 256 bytes 
                I could use before a bootloader was needed

## pad_checksum 
    this Python script takes a file containing the raw data, 
    pads it out to 256 bytes, 
    computes and appends the CRC, 
    and then writes out the result as a second assembler source file, 
    one that just uses data directives,

## GPIO Control
    On other board 
    this is usually just a matter of setting a few(usually memory-mapped) registers 

    SIO(Single-cycle I/O) interface

