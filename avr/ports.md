# Ports
    ports in the AVR are 
        gates from the CPU 
              to internal and external hardware and software components.
    - the CPU communicates with ports,
        reads from ports or write to ports 

## The most used port
    - flag register
        The most used port is the flag register, 
            where results of previous operations are written to
            and branch conditions are read from.

## Fixed Address
    - Ports have a fixed addrss, over which the CPU communicates
        the address is independent from the type of AVR(ld scripter)

    - the fixed address alias are provide from the producer.
        the include files have line defining ports
            .EQU PORTB, 0x18
        so we just have to remember the name of port B,
            not its location in the I/O space of the chip.
            .INCLUDE "/path/atmega328.inc"
