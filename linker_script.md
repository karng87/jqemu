# [Linker](https://embed-avr.tistory.com/86)

## linker
    input files : all objcet file

    input sections : sections in input files.

    linking -> output section
        input section들을 합쳐서 같은 종류의 섹션들을 하나의 섹션(output secction)으로 만듬 

## Memory
    Peripheral or device memory:
        external world inteface
    Flash:
        program from a host computer
    RAM(sram)

## Memory Map
    Sections
        DATA RODATA
        BSS
        HEAP
        STACK
        TEXT
        ISR_VECTOR

    ENTRY
        Reset handler

