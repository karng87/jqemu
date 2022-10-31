# State Machine

### PIO
    Programmable I/O
    instruction set
### FIFO : First In First Out
    RX FIFO : Receiver
    TX FIFO : Transmitter

    [[CPU]] |32-bit word| |32-bit word| |32-bit word| |32-bit word| [[State Machine}]

    - whether the fifo(4*32-bit) is full or empty is detectiabble by our code
        this is the state machine
### Registers
    PC : Program counter register
    X: 32-bit size
    Y: 
    Shift Registers
        ISR In: Input Shift Register
        OSR Out: Output Shift Register
### Clock Divider

### IRQ
    Interrupt Request
    Each PIO has 8 interrupt flags, which can be used to synchronise the state machine

### I/O Mapping 
    the RP2040 has 30 I/Os, and with the I/O mapping(GP0 ~ GP29)
    we can connect them to our state machines
    Input pin: (32bit) 2-bit rest: 32 - 30 I/O
        - input base pin(e.g. GP05 = base pin)
            then this pin will be pin 0
        [GP01][GP02][GP03][GP04][GP05][GP6][GP7]--[GP27][GP28][GP29][GP30][GP31]
          28    29    30    31     0    1    2      23     24    25    26   27
        - state machines have the pin direction of all pins except for the input pins
```asm
    ; pioasm tool
    .program hello
    ; repeately get one word of data from the TX FIFO,
    ; stalling when the FIFO is empty.
    ; Write the least significant bit to the OUT pin group
    loop:
        pull
        out pins, 1
        jmp loop
```

    Output pin
    Set pin
    SideSet pin
   
### ISA : instruction Set Architecture
    1. SET dest,data
        dest: PINS PINDIRS X Y
            PINS: will allow us to write directly to I/O pins,
            PINDiRS: 0 <- input, 1 <- output
        data: 0 ~ 31
        - set pin, 1 ; would trun on the first mapped I/O
        - set pindirs, 1 ; would turn on the first mappend I/O into an output
        - set pindirs, 0 ; would turn on the first mappend I/O into an input
    2. JMP(condition) target
        conditon: 
            !X !Y  : if (!X) then jump
            X-- Y-- : if (X) then X-- and jmp
            X!=Y : if(x!=y) then jmp
            PIN : if (sm_config_set_jmp_pin)
            !OSRE : if !(Output Shift Register Empty)
        target: 0 ~ 31
            ```asm
                loop_start:
                    set pins, 0 ; the pins will be off for 1 cycle
                    set pins, 1 ; the pins will be on for 2 cycles
                    jmp loop_start
            ```
    3. MOV dest, src
        dest: PINS X Y EXEC PC ISR OSR
            PINS: 
            X:
            Y:
            EXEC : if we copy something into EXEC, it will be decoded as an instruction
                        and excuted next cycle, we can excute PIO code from external sources!
            ISR : Input Shift Register
            OSR : Output Shift Register
        src: PINS X Y NULL STATUS ISR OSR
            STATUS: is a specical register that can be configured to mean different thing
                        , such as FIFO full or empty 
            can prepend flags:
                ~
                or
                !
                :: -> bit reverse
    4. IN src, bitcount
        - will shift 'bitcount' bits from 'src' into ISR
        bitcount : 1 ~32
        src: PINS X Y NULL ISR OSR
    5. OUT dest, bitcount
        - allows us to shift 'bitcount' bits from the OSR into a dest
        bitcount: 1 ~ 32
        dest: PINS X Y NULL PINDIRS PC ISR EXEC
    6. PUSH(iffull)(block/noblock)
        - pushes whatever is in the ISR into the RXFIFO and clears ISR
        iffull : will only push if the ISR is considered full
                The ISR is considered full 
                    when a configurable threshold of bits has been shfited into it
        block(default) : will block in cases where the FIFO is full,
                and wait for the FIFO to have space before continuing excution
        nonblock: will never block 
                however if the FIFO is full, 
                    it will remain unchaged, but the ISR will be cleard.
    7. PULL(ifempty) block/noblock
        - pull from TXFIFO into OSR

    8. IRQ(option) irq_num(_rel)
        irq_num : 0 ~ 7
        option : set nowait wait clear

    9. WAIT polarity gpio num
       WAIT polarity pin num
       WAIT polarity irq num (rel)
        - waits until the gpio specified in num has the value specified in polarity.
        ```picoasm
            ; delay functionality
            again:
                set pins, 1 ; set I/O (1 cycle)
                set pins, 0    ; clear I/O (1 cycle)
                jmp again   (2 cyle)
            /*    _    _
                _| |__| |__
            */
            again:
                set pins, 1[1] ; [1] increase [n] cycle n: 0~31
                set pins, 0    ; clear I/O
                jmp again  
            /*     __    __    __
                __|  |__|  |__|  |__
            */
        ```

    Shift Register
          Pull from FIFO ->[OSR Out]-->[GP1] [GP0]
        |TX FIFO 11101010011|----------->  1     1

          Push into FIFO ->[ISR Out]<--[GP1] [GP0]
        |RX FIFO 000000000011|<----------  1     0

        - autopush
        - autopull
        - threshold : full or empty 

