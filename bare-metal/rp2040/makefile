CC=arm-none-eabi-gcc
CPU=cortex-m0plus

PROJECT=main

#OBJS= $(patsubst src/%.c,build/%.o,$(shell find -E src -regex '.*.c' -not -regex '.*/main.c'))
SRCS = $(shell find -E src -regex '.*.c')
OBJS = $(patsubst src/%.c,build/%.o,$(SRCS))

CFLAGS= -c \
		-mcpu=$(CPU) \
		-mthumb \
		-Wall -O0

LDFLAGS= -mcpu=$(CPU) -mthumb\
		 -T stm32_ls.ld \
	     -Wl,-Map=build/$(PROJECT).map

LDFLAGS_SH= -mcpu=$(CPU) -mthumb\
			-T stm32_ls.ld\
			-Wl,-Map=build/$(PROJECT).map

all: $(OBJS)

build/%.o: src/%.c
	if [[ ! -d build ]]; then mkdir build; fi
	$(CC) $(CFLAGS) -o $@ $<


build: build/$(PROJECT).elf 

build/$(PROJECT).elf : $(OBJS)
	$(CC) $(LDFLAGS_SH) -o $@ $^

clean:
	rm build/*

load:

	openocd -f board/stm32f4discovery.cfg 
