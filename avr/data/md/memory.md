# AVR Memory Space

    - Data Memory Map
        - Working Registers(32 개)
            Includes X, Y, and Z registers.

        - I/O Register Space
            64 I/O Registers
            160 Ext. I/O Reg

        - SRAM – Data Space
            Runtime Variables 과 Data를 저장 하는 공간과
            Stack space로 사용 된다.

    - Program Flash Memory Map
        - Program Flash Memory
            Interrupt Vectors,
            Program Code,
            Constant Data(Unchangeable)는 Program Flash Memory에 저장 된다.
        - Boot Program Flash Memory
    - EEPROM space
        -For non-volatile but alterable data

## Data Memory Map
    64 I/O Registers : 0x0020 ~ 0x005f
    160 Ext. I/O Res : 0x0060 ~ 0x00ff
    internal RAM     : 0x0100 ~ 0x10ff
    external RAM     : 0x1100 ~ 0xffff
## SRAM Memory Map
    
