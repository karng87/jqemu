TARGET := Pwm_CTC
TARGET := Pwm_NormaL
TARGET := Pwm_FasT
TARGET := TIMSK
TARGET := Fast_PWM
TARGET := AEICRA
TARGET := PortB
TARGET := Timer_ISR

PROJECTNAME = input
PROJECTNAME = input_eeprom
PROJECTNAME = test
PROJECTNAME = EICRA
PROJECTNAME = asm_interrupt

PRJSRC = $(wildcard src/*)

CSRC = $(filter %.c, $(PRJSRC))
ASMSRC = $(filter %.asm, $(PRJSRC))

TARGET := build/$(PROJECTNAME).ihex
TRG = $(PROJECTNAME).out
MCU = atmega328p
part = m328p
# compiler
CFLAGS=-g -mmcu=$(MCU) -Os \
	-fpack-struct -fshort-enums             \
	-funsigned-bitfields -funsigned-char    \
	-Wall -std=gnu99   						\
	-Wa,-ahlms=$(firstword                  \
	$(filter %.lst, $(<:.c=.lst)))

CFLAGS=-g -mmcu=$(MCU) -Os -std=gnu99\

# assembler
ASMFLAGS =-mmcu=$(MCU)


# linker
LDFLAGS=-Wl,-Map,build/$(PROJECTNAME).map -mmcu=$(MCU) \
	-lm

#frequency = 16000000UL
#frequency = 8000000UL
port := $(shell arduino-cli board list | sed '/^$$/d' | sed -En '$$s/([^ ]*).*/\1/p')


output_format = ihex
CC = avr-gcc
LD = avr-ld
programmer = avrisp
programmer = arduino
programmer = stk500v1 # directly arduino uno

baud = 19200
baud = 57600 # bare metal atmega328p
baud = 115200  # directly arduino uno

all: $(TARGET) 

asm: build/$(PROJECTNAME).ihex

build/%.ihex: src/%.asm
	if [ ! -d build ]; then mkdir build; fi
	avr-as $(ASMFLAGS) $< -o build/%.o
	avr-ld build/%.o -o build/%.elf
	avr-objcopy -j .text -j .data -O ihex build/%.elf $@

build/%.o: src/%.c
	if [ ! -d build ]; then mkdir build; fi
	avr-gcc $(CFLAGS) -c $< -o $@

build/%.elf: build/%.o
	avr-gcc $(LDFLAGS) $< -o $@

build/%.ihex: build/%.elf
	avr-objcopy -j .text -j .data -O ihex $< $@

flash : $(TARGET)
	#avrdude -F -V -c $(programmer) -P $(port) -p $(part) -D -U flash:w:$(TARGET):i
	avrdude -F -V -c $(programmer) -P $(port) -p $(part) -b $(baud) -D -U flash:w:$(TARGET):i

echo:
	echo $(port)
clean:
	if [ -d build ]; then rm -rf build/*; fi

.PHONY: all flash echo clean
