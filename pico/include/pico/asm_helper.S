#include "pico.h"

// do not put align in here as it is used mid function sometimes
.macro regular_func x
    .global \x
    .type \x,%function
    .thumb_func
    \x:
.endm

.macro regular_func_with_section x
    .section .text.\x
    regular_func \x
.endm

#define WRAPPER_FUNC_NAME(x) __wrap_##x
// do not put align in here as it is used mid function sometimes
.macro wrapper_func x
regular_func WRAPPER_FUNC_NAME(\x)
.endm

.macro __pre_init func, priority_string
.section .preinit_array.\priority_string
.align 2
.word \func
.endm

