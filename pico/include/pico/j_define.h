#ifndef J_PICO_DEFINE_H
#define J_PICO_DEFINE_H

#include<stdint.h>

#define REG(x)

#define hex(x,y,args...) (0x ## x ## y)
#define hexp(x,y,args...) *((volatile uint32_t*)(0x ## x ## y))
#define posib(x,args...) (x) // position bit set
#define bshift(x,y,args...) ((x) << (y)) // bit set

typedef volatile uint32_t io_rw_32;
typedef const volatile uint32_t io_ro_32;
typedef volatile uint32_t io_wo_32;

#endif // end of J_DEFINE_H
