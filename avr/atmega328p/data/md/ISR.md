

```cpp
#define _VECTOR(N) __vector_ ## N
#define __INTR_ATTRS __used__, __externally_visible__

void __vector_2(void) __attribute__ ((__signal__,__used__,__externaly_visible__)) __VA_ARGS__;
void __vector_2(void){..}
```
