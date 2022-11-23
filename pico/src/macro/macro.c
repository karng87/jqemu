#include<stdio.h>
// argument: ... == args... expression:  __VA_ARGS__ == args

#define toui(x) x ## U
#define add(x,y,args...) toui(x+y)
#define h0x(w,y,args...) add(0x ## w ## 0000 ,0x ## y, args...)
#define phex(w, y, args...) ((volatile unsigned int)(hex(0x ## w ## 0000, 0x ## y)))

#define hadd3(x,y,z) (x+y+z)
#define phexa(w,y,atomic,args...) ((volatile unsigned int)(hadd3(0x##w##0000, 0x##y, 0x##atomic)))
#define pahex(w,atomic,y,args...) ((volatile unsigned int)(hadd3(0x##w##0000, 0x##atomic##0000, 0x##y )))

#define bshift(x,y,args...) ((x) << (y))

int main(){
    printf("phexa: 0x%x\n",phexa(dead,bea0,f,&..));
    printf("pahex: 0x%x\n",pahex(dea0,d,beaf,**$..));
    printf("hadd3: 0x%x\n",hadd3(0xdeac0000,0x10000,0xbeaf));

    printf("bshift(1+2,1): 0x%x\n",bshift(1+2,1+1,!..));

    printf("hex(beae+1,deac+1): 0x%x\n",h0x(beae+1,deac+1,$...));
    // 0xffffU == Max  0xffff == -1
    printf("0xffffffffu: %ud\n",0xffffffff);
    printf("0xffffffff : %d\n",0xffffffff);
    printf("%lu\n",0xffffffffffffffffU + 0xffffffffffffffff);

    printf("0xffffffff = %u\n",0xffffffff);
    printf("0xffffffffU + 0xffffffff: %u\n",(0xffffffffU + 0xffffffff));
    printf("0xffffffff + 0xffffffff: %u\n",0xffffffff + 0xffffffff);

    char * ptr;
    *ptr = 'a';

}
