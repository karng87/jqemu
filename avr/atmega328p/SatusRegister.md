# Register

### Status Register

    SREG : AVR Status Register
        I: Interrupt Enable 
        T: Bit Copy Storage
        H: Half Carry Flag
        S: Sign Bit ( N + V )
        V: oVerflow flag
        N: Negative flag
        Z: Zero flag
        C(0x3F): Carry flag

### General Purpose Register File
    R0: 0x00
    R1: 0x01
    ...
    R31: 0x1F

### Stack Pointer
    SPH : Stack Pointer High
    SPL : Stack Pointer Low
