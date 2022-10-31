# ROM (Read Only Memory)
    Flash Memroy
        None volatile Memory
        a program(binary image of code) 
            get stored 
                in Flash Memory(ROM)

    EEPROM

# RAM (Random Access Memory)
    SRAM
        register on chip
    DRAM
        desktop off chip

# Power On or Reset
    0x0000_0000 -> PC++
        : load value of this address and then store at MSP(main stack pointer)
            - enable c program
    0x0000_004 -> PC++
        : jmp Reset Handler function (Interrupt Service Routine)
    Reset_Handler:
        1. disable all interrupts
        2. data segment
        3. bss segment
        4. stack segment
        5. enable interrupts
        6. call main function -> now run our application

        - can move interrput vector tables from flash to RAM.

        


    vectors
        : need many interrupts
    
