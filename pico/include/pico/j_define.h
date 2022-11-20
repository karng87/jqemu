#ifndef J_PICO_DEFINE_H
#define J_PICO_DEFINE_H

#include<stdint.h>

#define REG(x)

#define posib(x, args...) (x) // position bit set
#define bshift(x, y, args...) ((x) << (y))

#define hadd(x, y) (x+y)
#define hex(x, y, args...) hadd(0x ## x ## 0000 , 0x ## y)
#define phex(x, y, args...) *((volatile unsigned int*)hadd(0x ## x ## 0000, 0x ## y))

#define haddr3(x, y, z) (x+y+z)
#define phexa(x, y, atomic, args...) *((volatile unsigned int*)(hadd3(0x ## x ## 0000, 0x ## y , 0x ## atomic)))
#define pahex(x, atomic, y, args...) *((volatile unsigned int*)(hadd3(0x ## x ## 0000, 0x ## atomic ## 0000, 0x ## y)))


typedef volatile uint32_t io_rw_32;
typedef const volatile uint32_t io_ro_32;
typedef volatile uint32_t io_wo_32;

#endif // end of J_DEFINE_H
