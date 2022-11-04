/*
--------------------------------
--- 1. compile_time_choice.S ---
--------------------------------
*/

/*
------------------------------------------
--- 2. #include "boot_stage2/config.h" --- 
-------------------------------------------
NOTE THIS HEADER IS INCLUDED FROM ASSEMBLY
*/

/*
-----------------------------------
--- 3. #include "pico/config.h" ---
-----------------------------------
 NOTE: THIS HEADER IS ALSO INCLUDED BY ASSEMBLY CODE SO
       SHOULD ONLY CONSIST OF PREPROCESSOR DIRECTIVES
       OR USE #ifndef __ASSEMBLER__ guards
---------------
// PICO_CONFIG_HEADER_FILES and then PICO_SDK_<PLATFORM>_CONFIG_INCLUDE_FILES
// entries are dumped in order at build time into this generated header
*/

#include "pico/config_autogen.h"






/*
-----------------------------------
--- 3. #include "pico/config.h" ---
-----------------------------------
// PICO_CONFIG: PICO_CONFIG_RTOS_ADAPTER_HEADER, unquoted path to header include in the default pico/config.h for RTOS integration defines that must be included in all sources, group=pico_base
*/
#ifdef PICO_CONFIG_RTOS_ADAPTER_HEADER
#include __PICO_XSTRING(PICO_CONFIG_RTOS_ADAPTER_HEADER)
#endif

/*------------------------------------------*/
/**** 2. #include "boot_stage2/config.h" ***/
/*----------------------------------------*/
// PICO_CONFIG: PICO_BUILD_BOOT_STAGE2_NAME, The name of the boot stage 2 if selected by the build, group=boot_stage2
#ifdef PICO_BUILD_BOOT_STAGE2_NAME
    #define _BOOT_STAGE2_SELECTED
#else
    // check that multiple boot stage 2 options haven't been set...

// PICO_CONFIG: PICO_BOOT_STAGE2_CHOOSE_IS25LP080, Select boot2_is25lp080 as the boot stage 2 when no boot stage 2 selection is made by the CMake build, type=bool, default=0, group=boot_stage2
#ifndef PICO_BOOT_STAGE2_CHOOSE_IS25LP080
    #define PICO_BOOT_STAGE2_CHOOSE_IS25LP080 0
#elif PICO_BOOT_STAGE2_CHOOSE_IS25LP080
    #ifdef _BOOT_STAGE2_SELECTED
        #error multiple boot stage 2 options chosen
    #endif
    #define _BOOT_STAGE2_SELECTED
#endif
// PICO_CONFIG: PICO_BOOT_STAGE2_CHOOSE_W25Q080, Select boot2_w25q080 as the boot stage 2 when no boot stage 2 selection is made by the CMake build, type=bool, default=0, group=boot_stage2
#ifndef PICO_BOOT_STAGE2_CHOOSE_W25Q080
    #define PICO_BOOT_STAGE2_CHOOSE_W25Q080 0
#elif PICO_BOOT_STAGE2_CHOOSE_W25Q080
    #ifdef _BOOT_STAGE2_SELECTED
        #error multiple boot stage 2 options chosen
    #endif
    #define _BOOT_STAGE2_SELECTED
#endif
// PICO_CONFIG: PICO_BOOT_STAGE2_CHOOSE_W25X10CL, Select boot2_w25x10cl as the boot stage 2 when no boot stage 2 selection is made by the CMake build, type=bool, default=0, group=boot_stage2
#ifndef PICO_BOOT_STAGE2_CHOOSE_W25X10CL
    #define PICO_BOOT_STAGE2_CHOOSE_W25X10CL 0
#elif PICO_BOOT_STAGE2_CHOOSE_W25X10CL
    #ifdef _BOOT_STAGE2_SELECTED
        #error multiple boot stage 2 options chosen
    #endif
    #define _BOOT_STAGE2_SELECTED
#endif
// PICO_CONFIG: PICO_BOOT_STAGE2_CHOOSE_AT25SF128A, Select boot2_at25sf128a as the boot stage 2 when no boot stage 2 selection is made by the CMake build, type=bool, default=0, group=boot_stage2
#ifndef PICO_BOOT_STAGE2_CHOOSE_AT25SF128A
    #define PICO_BOOT_STAGE2_CHOOSE_AT25SF128A 0
#elif PICO_BOOT_STAGE2_CHOOSE_AT25SF128A
    #ifdef _BOOT_STAGE2_SELECTED
        #error multiple boot stage 2 options chosen
    #endif
    #define _BOOT_STAGE2_SELECTED
#endif

// PICO_CONFIG: PICO_BOOT_STAGE2_CHOOSE_GENERIC_03H, Select boot2_generic_03h as the boot stage 2 when no boot stage 2 selection is made by the CMake build, type=bool, default=1, group=boot_stage2
#if defined(PICO_BOOT_STAGE2_CHOOSE_GENERIC_03H) && PICO_BOOT_STAGE2_CHOOSE_GENERIC_03H
    #ifdef _BOOT_STAGE2_SELECTED
        #error multiple boot stage 2 options chosen
    #endif
    #define _BOOT_STAGE2_SELECTED
#endif

#endif // PICO_BUILD_BOOT_STAGE2_NAME

#ifdef PICO_BUILD_BOOT_STAGE2_NAME
    // boot stage 2 is configured by cmake, so use the name specified there
    #define PICO_BOOT_STAGE2_NAME PICO_BUILD_BOOT_STAGE2_NAME
#else
    // boot stage 2 is selected by board config header, so we have to do some work
    #if PICO_BOOT_STAGE2_CHOOSE_IS25LP080
        #define _BOOT_STAGE2 boot2_is25lp080
    #elif PICO_BOOT_STAGE2_CHOOSE_W25Q080
        #define _BOOT_STAGE2 boot2_w25q080
    #elif PICO_BOOT_STAGE2_CHOOSE_W25X10CL
        #define _BOOT_STAGE2 boot2_w25x10cl
    #elif PICO_BOOT_STAGE2_CHOOSE_AT25SF128A
        #define _BOOT_STAGE2 boot2_at25sf128a
    #elif !defined(PICO_BOOT_STAGE2_CHOOSE_GENERIC_03H) || PICO_BOOT_STAGE2_CHOOSE_GENERIC_03H
        #undef PICO_BOOT_STAGE2_CHOOSE_GENERIC_03H
        #define PICO_BOOT_STAGE2_CHOOSE_GENERIC_03H 1
        #define _BOOT_STAGE2 boot2_generic_03h
    #else
        #error no boot stage 2 is defined by PICO_BOOT_STAGE2_CHOOSE_ macro
    #endif
    // we can't include cdefs in assembly, so define our own, but avoid conflict with real ones for c inclusion
    #define _PICO__STRING(x) #x
    #define _PICO__XSTRING(x) _PICO__STRING(x)
    #define _PICO__CONCAT1(x, y) x ## y
    #define PICO_BOOT_STAGE2_NAME _PICO__XSTRING(_BOOT_STAGE2)
    #define PICO_BOOT_STAGE2_ASM _PICO__XSTRING(_PICO__CONCAT1(_BOOT_STAGE2,.S))
#endif



/*--------------------------------*/
/*** 1. compile_time_choice.S  ***/
/*------------------------------*/
#ifdef PICO_BUILD_BOOT_STAGE2_NAME
    // boot stage 2 is configured by cmake, so use the name specified there
    #error PICO_BUILD_BOOT_STAGE2_NAME should not be defined for compile_time_choice builds
#else
    // boot stage 2 is selected by board config header, and PICO_BOOT_STAGE2_ASM is set in boot_stage2/config.h
    #include PICO_BOOT_STAGE2_ASM
#endif
