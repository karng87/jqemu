# Booting Process
Booting sequence starts when

    - Power is applied
    - Reset pin is set/cleared

### Microcontroller starts reading from memory location 0x0000 0000
    - The first information in starting address 0x0000 0000 
            is stack pointer. 
        Microcontroller sets up the Stack Pointer register 
            from the value taken from this. 
        This is usually the last address of RAM. 

        All C program use stack memory region 
            to store temporary variables, 
            input arguments and 
            return addresses of functions.

    - At next address at 0x0000 0004 
        is a pointer to reset handler function. 
        Microcontroller reads this address and jumps to reset handler function.

### Reset Handler 
is usually written in assembly code and does the following

        - Initialize .data section by moving the contents from flash to RAM. 
            data section is used to store initialized variables in C program.
        - Initialize .bss section by moving zeros to this space in RAM.
        - Now the environment is set-up to run a simple C function. 
            So, reset handler calls a C function such as main()
