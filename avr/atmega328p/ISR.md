

```cpp
#ifdef __cplusplus
#  define ISR(vector, ...)            \
    extern "C" void vector (void) __attribute__ ((__signal__,__INTR_ATTRS)) __VA_ARGS__; \
    void vector (void)
#else
#  define ISR(vector, ...)            \
    void vector (void) __attribute__ ((__signal__,__INTR_ATTRS)) __VA_ARGS__; \
    void vector (void)
#endif
```
```cpp
#define _VECTOR(N) __vector_ ## N
```
