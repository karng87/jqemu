# Memory Model
    - Random Access Memory (RAM), 
    - Peripherals, 
    - Devices 
        all are assigned a memory location 
        so that processor can interact with it. 
### Memory map 
    refers to layout indicating different memory regions 
        for different periherals, devices or internal memories.

### To run a C program, 
we need to understand its memory requirement 
    to store different types of variables

    - Different memory regions required 
        are called sections or segment. 
    - Following are major segments
        - Text or Code segment used to store executable code.
        - Data segment used to store initialized variables.
        - BSS segment used to store uninitialized data.
        - Heap is used to contain dynamically allocated memory. 
            Heap keep increasing in address value as more data is allocated.
        - Stack is used to store temporary variables, 
            input arguments and return addresses of functions. 
            Stack start from a higher address and keeps decrementing 
                as more data is stored.
