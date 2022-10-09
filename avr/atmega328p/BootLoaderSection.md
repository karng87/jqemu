# Boot Loader Section

## Flash Memroy
    A code can be programed into 
        - Application Section
            runs normally
            is used for common applications

        - BLS(Boot Lorder Section)
            is proviced with some special features
            can execute SPM(Self Program Mode) insturctions 
                which are blocked for the code running int application section
            BLS is normally used for storing the boot loader code

                - Boot-Loader 
                    can be used for initializing the peripherals in the mcu
                    initialize the device connected mcu
                    load the selected application to the application section
                    jump to the application section
                    excute the application

## SRAM
    Stack
        is allocated in the SRAM
        - SP(stack pointer) is read/write accessible in thte I/O space
    Interrupt Vector Table
        have priority in accordance with their interrupt vector position
            the lower the interrupt vector address, the higher the priority

## IO Sapce
    All ATmega328p I/Os and peripherals
        are in the I/O space.
    All I/O locations
        may be accessed by LD/LDS/LDD, ST/STS/STD instruction
            : transfering data between the 32 general purpose registers and the I/O space
    Memory address
        "0x00 - 0x3F" : IO OUT command
            extended I/O space : 
        "0x60 - 0xFF" in SRAM

            When using the I/O specific commands IN and OUT, 
                the I/O addresses 
        "0x00 - 0x3F" 
                must be used.
            When addressing I/O registers as data space 
                using LD and ST instructions, 
        "+ 0x20" 
            must be added to these addresses

    contains 64 addresses for CPU peripheral functions as control retisters, SPI, and other I/O functions.
    0x20 - 0x5F: can be accessed directly
    0x60 - 0xFF: (Atmega328p) in SRAM where only the ST/STS/STD LD/LDS/LDD insruction can be used.
    - IO Registers 
        within the address range 0x00 - 0x1F 
            are directly bit-accessible using the SBI, CBI instruction
    - IO port
        Pxn :
            x : represents the numbering letter for the port
            n : represents the it number
            PORTxn(PORTB3) : bit nnumber 3 in port B 
        data register           : PORTx
        data direction register : DDRx
        the port input pins     : PINx
            read only

## EEPROM : Electronic Erased Programmable Read Only Memory
    single bytes can be read and written
