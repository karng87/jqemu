# Macro

## function like macro
## # stringfy
    - no expansion of argument
    ```c
        #define macro_val myval
        #define str(x) #x
        str(macro_val) // NOTE: result to  "macro_val", not to "myval"
    ```
## ## concat
    - no expansion of argument
    - same as #
    
    ```c
    #define arg_1 0,
    #define take(x,y,...) y

    #define  is(x)   _is(x)
    /* ERROR: #define is(x) _is(arg_##x) 
            not expanded
    */
    #define _is(x)  __is(arg_##x)

    #define __is(x)   take(x 1, 0)

    #define foo 1
    is(foo)
    ```
## __VAR_ARGS__ (...) variadic macro
## args (args...) named variadic macro
    args == __VAR_ARGS__
    (...) == (args...)

## __VA_OPT__(,)__VAR_ARGS__ == ##__VAR_ARGS__ == ##args

## __VA_OPT__(arg)__VAR_ARGS__
    if __VAR_ARGS__ == empty then filter-out arg

## Recursion
```c
    #define map(n,...) map##n(__VAR_ARGS__)
    #define map0(fun,...)
    #define map1(fun,arg1,arg2,...) fun(arg1,arg2),
    #define map2(fun,arg1,arg2,...) fun(arg1,arg2), map1(func,__VAR_ARGS__)
    #define map3(fun,arg1,arg2,...) fun(arg1,arg2), map2(func,__VAR_ARGS__)
    #define map4(fun,arg1,arg2,...) fun(arg1,arg2),map3(func,__VAR_ARGS__)

    map(3,print_func,1,2,3,4,5,6)



## 부분의 심볼을 인수로 사용해도 최종 결과만 적절하면 상관없이 사용가능하다.
