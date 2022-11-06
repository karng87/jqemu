/*
 * Copyright (c) 2021 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _BOOT2_HELPER_EXIT_FROM_BOOT2
#define _BOOT2_HELPER_EXIT_FROM_BOOT2

//#include "hardware/regs/m0plus.h"
// If entered from the bootrom, lr (which we earlier pushed) will be 0,
// and we vector through the table at the start of the main flash image.
// Any regular function call will have a nonzero value for lr.

#ifndef XIP_BASE
    #define XIP_BASE 0x10000000 // Flash
#endif

#ifndef PPB_BASE
    #define PPB_BASE 0xE0000000  // echo
#endif

#ifndef M0PLUS_VTOR_OFFSET
    #define M0PLUS_VTOR_OFFSET 0x0000ed08
#endif

check_return:
    pop {r0}
    cmp r0, #0
    beq vector_into_flash
    bx r0
vector_into_flash:
    ldr r0, =(XIP_BASE + 0x100)
    ldr r1, =(PPB_BASE + M0PLUS_VTOR_OFFSET)
    str r0, [r1]
    ldmia r0, {r0, r1}
    msr msp, r0
    bx r1

#endif
