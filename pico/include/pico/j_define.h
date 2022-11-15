#ifndef J_PICO_DEFINE_H
#define J_PICO_DEFINE_H

#include<stdint.h>

#define REG(x)

#define hex(x,y,args...) (0x ## x ## y)
#define fset(x,args...) (x) // flag shift set
#define bset(x,args...) (0b ## x) // bit set

typedef volatile uint32_t io_rw_32;
typedef const volatile uint32_t io_ro_32;
typedef volatile uint32_t io_wo_32;

#endif // end of J_DEFINE_H
