# [Linker](https://embed-avr.tistory.com/86)

## linker
    input files : all objcet file

    input sections : sections in input files.

    linking -> output section
        input section들을 합쳐서 같은 종류의 섹션들을 하나의 섹션(output secction)으로 만듬 

## Memory (keyword)
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

## Commands
    ENTRY 
        Function that is used as entry point. 
        Address of this function is stored at address0x0000 0004.

    MEMORY 
        Used to specify the memory map.

    SECTIONS 
        'SECTIONS' 키워드 
            그 뒤에 symbol assignments과 
            output section 설명을 
        {}로 감싸서 쓴다.
            eg) SECTIONS{ .=0x1000; .text:{ *(.text)} }
                .text => output section .text 를 정의한다.
        Defines which sections go to which memory region.

```
   SECTIONS{ 
        . = 0x1000;
    }
```
Below is the linker script and the file is named stm32frr6re.ld. 
```
    ENTRY(Reset_Handler)

    MEMORY
    {
        flash (rx) : org = 0x08000000, len = 512k
        ram (wx) : org = 0x20000000, len = 112k /* SRAM1 */
    }
    _estack = ORIGIN(ram) + LENGTH(ram);


    SECTIONS
    {
        .isr_vector :
         {
             . = ALIGN(4);
             KEEP(*(.isr_vector))
             . = ALIGN(4);
         } >flash

        .text :
         {
             . = ALIGN(4);
             *(.text)
             *(.text*)
         } >flash
        .data :
         {
             . = ALIGN(4);
             _sdata = .;
             *(.data)
             *(.data*)
             . = ALIGN(4);
             _edata = .;
         } >ram AT> flash

        _sidata = LOADADDR(.data); // return abosolute LMA(local memory address)  of the .data's adress

        .bss :
         {
             _sbss = .;
             __bss_start__ = _sbss;
             *(.bss)
             *(.bss*)
             *(COMMON)
            _ebss = .;
             __bss_end__ = _ebss;
         } > ram
    }
```
