
// https://www.youtube.com/watch?v=2Hm8eEHsgls&list=PLERTijJOmYrDiiWd10iRHY0VRHdJwUH4g&index=3&ab_channel=FastbitEmbeddedBrainAcademy

#include<stdint.h>

#define SRAM_START 0x20000000U
#define SRAM_SIZE (256 * 1024 + 4 * 1024 + 4 * 1024) // 264k 
#define SRAM_END ((SRAM_START) + (SRAM_SIZE))

#define STACK_START SRAM_END

void _reset_handler(void);
void isr_nmi(void) __attribute__((weak, alias("Default_Handler")));
void isr_hardfault(void) __attribute__((weak, alias("Default_Handler")));

uint32_t vectors[] __attribute__((section(".isr_vector")))= {
    STACK_START, // MSP (master stack pointer)
	(uint32_t)_reset_handler,
	(uint32_t)isr_nmi,
	(uint32_t)isr_hardfault,
	0,//isr_invalid // Reserved, should never fire
	0,//isr_invalid // Reserved, should never fire
	0,//isr_invalid // Reserved, should never fire
	0,//isr_invalid // Reserved, should never fire
	0,//isr_invalid // Reserved, should never fire
	0,//isr_invalid // Reserved, should never fire
	0,//isr_invalid // Reserved, should never fire
	(uint32_t)isr_svcall,
	0,//isr_invalid // Reserved, should never fire
	0,//isr_invalid // Reserved, should never fire
	(uint32_t)isr_pendsv,
	(uint32_t)isr_systick,
	(uint32_t)isr_irq0,
	(uint32_t)isr_irq1,
	(uint32_t)isr_irq2,
	(uint32_t)isr_irq3,
	(uint32_t)isr_irq4,
	(uint32_t)isr_irq5,
	(uint32_t)isr_irq6,
	(uint32_t)isr_irq7,
	(uint32_t)isr_irq8,
	(uint32_t)isr_irq9,
	(uint32_t)isr_irq10,
	(uint32_t)isr_irq11,
	(uint32_t)isr_irq12,
	(uint32_t)isr_irq13,
	(uint32_t)isr_irq14,
	(uint32_t)isr_irq15,
	(uint32_t)isr_irq16,
	(uint32_t)isr_irq17,
	(uint32_t)isr_irq18,
	(uint32_t)isr_irq19,
	(uint32_t)isr_irq20,
	(uint32_t)isr_irq21,
	(uint32_t)isr_irq22,
	(uint32_t)isr_irq23,
	(uint32_t)isr_irq24,
	(uint32_t)isr_irq25,
	(uint32_t)isr_irq26,
	(uint32_t)isr_irq27,
	(uint32_t)isr_irq28,
	(uint32_t)isr_irq29,
	(uint32_t)isr_irq30,
	(uint32_t)isr_irq31,
};

void Default_Handler(void){
    while(1);
}
void Reset_Handler(void){
}
