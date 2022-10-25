## Cross Toolchain
    arm-none-eabi-gcc
        eabi: embedded Application Binary Interface
        compiler, linker, assembler
    arm-none-eabi-as
        assembler
    arm-none-eabi-ld
        linker
    arm-none-eabi-objcopy
        format converter

    arm-none-eabi-objdump
    arm-none-eabi-readelf
    arm-none-eabi-nm

## build proccess
    - pre-processing stage (substitude)
        arm-none-eabi-gcc -E main.c
        *.c -> *.i
        All pre-processing directives(macro) will be resolved

    - code-generate stage (translating)
        arm-none-eabi-gcc -S main.c
        *.i -> *.s
        Higher level language code statement 
            will be converted into 
                processor architectural level mnemonics

    - assembler stage (relocatable object file)
        arm-none-eabi-gcc -c main.s
        *.s -> *.o
        Assembly level mnemonics 
            are converted into 
                opcodes (processor architectural machine codes for instructions)
    - elf state(Excutable Linkable format)
        arm-none-eabi-ld main.o led.o ... -o main.elf
        Linking the object file with other libraries(std, 3rd party object file)
        and then create a Excutable and Debuging format file

    - binary format, intel hex format
        *.elf -> *.bin(*.ihex)
        arm-none-eabi-objcopy main.elf main.bin

## file format

    - o: relocatable object files
        - doesn't contain any absolute address for data and code

    - elf: excutable and Linkable format
        - staandard format in gcc
        - data, read-only data
        - code
        - uninitialized data ...

    - coff: common object file format
        - by unix system v

    - aif: Arm Image Format
        - by arm

    - srecord:
        - by motorola

        
# -T option
    gcc

# Command

### ENTRY command
    - set "entry point address"
    - Entry(_symbol_name__)
        ex) Entry(MY_Reset)

### MEMORY
    - assign addresses to merged sections
    - syntax:
        MEMORY
        {
            name(attr): ORIGIN=0x___, LENGTH=0x___
        }

        - attr: 
            R: Read-only sections
            W: Read and Write sections
            X: Sections containing excutable code.
            A: Allocated section
            I: Initialized sections
            L: Same as 'I'
            !: Invert 

# Start Up File
    - is responsible for setting up 
        the right environment 
            for the main user code to run
        startup file runs before main() so startup file calls main().

    - take care of vector table placement in code memory
        as requied by the ARM Processor

    - take care of stack reinitialization

    - is responsible of .data .bss section Initialization in SRAM

    1. create a vector table
    2. write .data .bss in SRAM
    3. call main()



