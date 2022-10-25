
// https://www.youtube.com/watch?v=2Hm8eEHsgls&list=PLERTijJOmYrDiiWd10iRHY0VRHdJwUH4g&index=3&ab_channel=FastbitEmbeddedBrainAcademy

#include<stdint.h>

#define SRAM_START 0x20000000U
#define SRAM_SIZE (256 * 1024 + 4 * 1024 + 4 * 1024) // 264k 
#define SRAM_END ((SRAM_START) + (SRAM_SIZE))

#define STACK_START SRAM_END

void Reset_handler(void) __attribute__((section(".random_section")));

uint32_t vectors[] __attribute__((section(".isr_vector")))= {
    STACK_START,
    (uint32_t)&Reset_handler,
};

void Reset_handler(void){
}
