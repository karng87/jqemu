# UAL(Unified Assemble Language)
    .unified
    .thumb (.code16)

# Prefix
    S => update APSR  
    
# Instruction
    OP{Condition codes}{S} Rd, Rn, Operand2

## Condition codes(2 letter)

    codei       suffix      Description                 flags   
    0b0000      EQ          Equal                       Z
    0b0001      NE          Not equal                   !Z
    0b0010      CS          Carry set                   C
                HS          unsigned <=                 C     
    0b0011      CC          Carry clear                 !C
                LO          unsigned <                  !C
    0b0100      MI          Minus                       N
    0b0101      PL          Plus                        !N
    0b0110      VS          oVerflow Set                V
    0b0111      VC          oVerflow Clear              !V
    0b1000      HI          Unsigned <                  C and !Z
    0b1001      LS          Unsigned <                  !C or Z
    0b1010      GE          Signed   >=                 N == V
    0b1011      LT          Signed   <                  N != V
    0b1100      GT          Signed   >                  !Z and (N == V)
    0b1101      LE          Singned  <=                 Z or (N!=V)
    0b1110      AL          Always (default)            any
    

## Multiple Instruction
    Before | After

    STMIA R0, {R1-R3}
        Before (r0) After
        (r0)   <- R1
        (r0+4) <- R2
        (R0+8) <- R3
        : STore Multiinstruction Increment Afer
            Increment with word size

    STMDB R3, {R2,R5-R7}
        Before (r3) After
        (r0-4)  <- R7
        (r0-8)  <- R6
        (r0-12) <- R5
        (r0-16) <- R2
        : STore Multiinstruction Decrement Before 
            Decrement with word size

### Stack Instructions
    sp! : after evaluate and then update sp pointer
    F: Full > (sp!) 시작 주소를 비우고 다음 주소부터 채우기 시작 
        <- Full < sp! < Full -> 

    E: Empty (sp!) 주소를 채우면서 시작
        <- Empty = sp! = Empty -> 

    STMFD sp!, {r0-r5}
        push onto a full descending Stack
