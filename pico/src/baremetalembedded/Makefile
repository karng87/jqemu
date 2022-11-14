CC=arm-none-eabi-gcc
MACH=cortex-m4
CFLAGS= -c -mcpu=$(MACH) -mthumb -mfloat-abi=soft -std=gnu11 -Wall -O0
LDFLAGS= -mcpu=$(MACH) -mthumb -mfloat-abi=soft --specs=nano.specs -T stm32_ls.ld -Wl,-Map=final.map
LDFLAGS_SH= -mcpu=$(MACH) -mthumb -mfloat-abi=soft --specs=rdimon.specs -T stm32_ls.ld -Wl,-Map=final.map

#all:main.o led.o stm32_startup.o syscalls.o final.elf
all:main.o

semi:main.o led.o stm32_startup.o syscalls.o final_sh.elf

main.o: src/main.c
	$(CC) $(CFLAGS) -o $@ $^

led.o: src/led.c
	$(CC) $(CFLAGS) -o $@ $^

stm32_startup.o: src/stm32_startup.c
	$(CC) $(CFLAGS) -o $@ $^

syscalls.o: src/syscalls.c
	$(CC) $(CFLAGS) -o $@ $^
	
final.elf: main.o led.o stm32_startup.o syscalls.o
	$(CC) $(LDFLAGS) -o $@ $^
	
final_sh.elf: main.o led.o stm32_startup.o
	$(CC) $(LDFLAGS_SH) -o $@ $^

clean:
	rm -rf *.o *.elf

load:

	openocd -f board/stm32f4discovery.cfg 
