# Cortex-M0+
    32bit Processor 
        2^32 = 4GB

# Memory Map (total 4 GB)
    +------------------------------------------|
    | 0x_0000_0000 ~ 0x_1fff_ffff(0.5GB=512MB)
    |     2^29 = 0.5GB
    |     Code Area(Falsh Memory)
    | -----------------------------------------|
    | 0x_2000_0000 ~ 0x_3fff_ffff(0.5GB)
    |     SRAM
    | -----------------------------------------|
    | 0x_4000_0000 ~ 0x_5fff_ffff(0.5GB)
    |     Peripheral device
    | -----------------------------------------|
    | 0x_6000_0000 ~ 0x_9fff_ffff(1GB)
    |     External RAM
    | -----------------------------------------|
    | 0x_a000_0000 ~ 0x_Dfff_ffff(1GB)
    |     External Device
    | -----------------------------------------|
    | 0x_E000_0000 ~ 0xffff_ffff (0.5G)
    |     Echo System
    |         PPB(Private Peripheral Bus)
    |         ----------------------------
    |         SCS(System Control ..)
    |         ----------------------------
    +------------------------------------------|

# Exceptions
    Interrupt

    1, RESET
    2. NMI(Non Maskable Interrupt)
    3. Hard fault
    11. SVCall(Supervisor call)
    14. PendSV(Pendable SerVice call
    15. SysTick(System Tick)
    16 ~ 47. IRQ0 ~ IRB31
        Interrupt <- source, internal peripheral device

# Vector Table

