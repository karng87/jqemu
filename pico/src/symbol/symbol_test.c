#include <stdio.h>
struct uf2{
    unsigned char a;
    unsigned char b;
    unsigned char c;
    unsigned char d;
    unsigned char a1;
    unsigned char b1;
    unsigned char c1;
    unsigned char d1;
}uf2;

int main(){
    uf2.a = 1;
    uf2.b = 1;
    uf2.c = 1;
    uf2.d = 1;
    uf2.a1 = 0xd;
    uf2.b1 = 0xa;
    uf2.c1 = 0xe;
    uf2.d1 = 0xd;

    printf("%p %p\n",&uf2,uf2);
}
