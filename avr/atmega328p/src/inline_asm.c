/*
MEMORY-POINTER:
    ```asm

    foo: .byte 0x3 
    .lcom buffer 12
    ```
    foo <- value
    $foo <- address

    100 <- address
    %100 <- literal

    (%ebx) <- *%ebx
    segment:displacement(base,index,scale)
        
        

MOV:
    b -> byte(1byte)
    w -> word(2byte)
    l -> long(4byte = int)
    q -> quad(8byte)

DATA_TYPE:
    .byte
    .short
    .int
    .long
    .quad

    .single -> single precision
    .float -> single precision
    .double -> double precision

    .ascii
    .asciz -> null terminated string

DIRECTIVE:
    .equ symbol, vaule
    .comm symbol, length
    .fill

    .section
        .data
        .bss
        .text

    .global
    LABEL:

JUMP:
    SHORT: less than 128 bytes, in offset memory model
    FAR:   go to another segment, in segmented memory model
    NEAR:   for all other jump

INSTRUCTION:
    ADDC: along with the value contained in the carry flag from a previos ADD instruction
   
*/
#include <stdio.h>

int main(void){
    int a = 2;
    int b = 5;
    int result;
    __asm__(
            "imul %1, %2;"
            "movl %2, %0;"
            :"=r"(result)
            :"r"(a), "r"(b)
            :);

    printf("%d\n",result);
}
