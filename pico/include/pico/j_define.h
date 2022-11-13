#ifndef J_PICO_DEFINE_H
#define J_PICO_DEFINE_H

#include<stdint.h>

#define REG(x)

#define hex(x,y,args...) (0x ## x ## y)
#define he1(x,args...) (0x ## x)

#define bin(x,args...) (0b ## x)
#define bi2(x,y,args...) (0b ## x ## y)
#define bi4(x,y,z,w,args...) (0b ## x ## y ## z ## w)

typedef volatile uint32_t io_rw_32;
typedef const volatile uint32_t io_ro_32;
typedef volatile uint32_t io_wo_32;

#endif // end of J_DEFINE_H
