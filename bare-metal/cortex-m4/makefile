CC=arm-none-eabi-gcc
CPU=cortex-m4

PROJECT=main
OS = $(shell uname)
#OBJS= $(patsubst src/%.c,build/%.o,$(shell find -E src -regex '.*.c' -not -regex '.*/main.c'))

ifeq ($(OS),Linux)
	SRCS := $(shell find src -regextype posix-extended -regex '.*.c')
else
	SRCS := $(shell find -E src -regex '.*.c')
endif

OBJS = $(patsubst src/%.c,build/%.o,$(SRCS))

CFLAGS= -c \
		-mcpu=$(CPU) \
		-mthumb \
		-mfloat-abi=soft \
		-Wall -O0

LDFLAGS= -mcpu=$(CPU) -mthumb\
		 -mfloat-abi=soft\
		 --specs=nano.specs\
		 -T stm32_ls.ld \
	     -Wl,-Map=build/$(PROJECT).map

LDFLAGS_SH= -mcpu=$(CPU) -mthumb\
			-mfloat-abi=soft\
			--specs=rdimon.specs\
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
	rm -rf *.o *.elf

load:

	openocd -f board/stm32f4discovery.cfg 
