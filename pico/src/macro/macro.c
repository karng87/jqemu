#include<stdio.h>
// argument: ... == args... expression:  __VA_ARGS__ == args
#define hex(x,y) 0x ## x ## y
#define bin(x,y,z,w) 0b ## x ## y ## z ## w

int main(){
    int h = hex(0000,0010);
    short b = bin(0000,0000,0000,0010);
    printf("%d\t%d\n",h,b);
}
