#ifndef J_PICO_DEFINE_H
#define J_PICO_DEFINE_H

#define REG(x)

#define posib(x, args...) (x) // position bit set
#define bshift(x, y, args...) ((x) << (y))

#define hadd(x, y) (x+y)
#define hex(x, y, args...) hadd(0x ## x ## 0000 , 0x ## y)
#define phex(x, y, args...) *((volatile unsigned int*)hex(x,y))

#define had3(x, y, z) (x+y+z)
#define hex3(x, y, z,args...) had3(0x ## x ## 0000 , 0x ## y, 0x ## z)
#define phex3(x, y, z,args...) *((volatile unsigned int*)hex3(x,y,z))

#define p0x(x,args...) *((volatile unsigned int*)(x))
#define p0x_a(x,y,args...) p0x(hadd(x,y))
#define p0x_xor(x,args...) p0x_a(x,0x1000)
#define p0x_set(x,args...) p0x_a(x,0x2000)
#define p0x_clr(x,args...) p0x_a(x,0x3000)

typedef volatile unsigned int io_rw_32;
typedef const volatile unsigned int io_ro_32;
typedef volatile unsigned int io_wo_32;

#endif // end of J_DEFINE_H
