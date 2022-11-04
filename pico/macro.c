#define arg_1 0,
#define take(x,y,...) y

#define is(x) is_1(x)
#define is_1(x) is_2(arg_##x)
// #define is(x) is_2(arg_##x) // ERROR not expand arg_##x
// #define is_2(x) take(x1,0) ERROR in x1 -> x 1
#define is_2(x) take(x 1,0)

#define foo 1

int main(){
    struct st{char fo;int bar;} con;
        #include<stdio.h>
    printf("struct st: %p ? %lx(con.bar) ? %lx: &(struct st*)0->bar\nfoo:%d\n", \
            &con, (size_t)&con.bar - (size_t)4, \
            (size_t)&con.bar - (size_t)&((struct st*)0)->bar,\
            is(foo));
    return 0;
}
