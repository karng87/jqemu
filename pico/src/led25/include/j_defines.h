#ifndef J_PICO_DEFINE_H
#define J_PICO_DEFINE_H

#define REG(x)
#define u(x) (x ## u)

#define bitmask(x, args...) (x) // position bit set
#define bitsel(x, args...) (x) // position bit set
#define bitshift(x, y, args...) ((x) << (y))

#define hadd(x,y,z) (unsigned int)(x+y+z)

#define hex_r(x, y, z, args...) hadd(0x ## x ## 0000 , 0x ## y, 0x ## z)
#define hex(x, y, args...) hadd(0x ## x ## 0000 , 0x ## y, 0)

#define phex_a(x, y, z, args...) ((volatile unsigned int*)hex_r(x,y,z))
#define phex(x, y, args...) ((volatile unsigned int*)hex(x,y))
#define phex_xor(x, y, args...) ((volatile unsigned int*)hex_r(x,y,1000))
#define phex_set(x, y, args...) ((volatile unsigned int*)hex_r(x,y,2000))
#define phex_clr(x, y, args...) ((volatile unsigned int*)hex_r(x,y,3000))

#define p0x(x,args...) (*(volatile unsigned int*)(x))
#define p0x_a(x,a,args...) p0x(x+a)

#define p0x_xor(x,args...) p0x(x+0x1000)
#define p0x_set(x,args...) p0x(x+0x2000)
#define p0x_clr(x,args...) p0x(x+0x3000)

#define __I volatile const // Input
#define __O volatile // Output
#define __IO volatile // Input Output

#define __IM volatile const // Input
#define __OM volatile // Output
#define __IOM volatile // Input Output

typedef volatile unsigned int io_rw_32;
typedef const volatile unsigned int io_ro_32;
typedef volatile unsigned int io_wo_32;

#endif // end of J_DEFINE_H
