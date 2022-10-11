#port = /dev/cu.usbserial-1410
#port = /dev/cu.usbserial-1430
#port = /dev/cu.usbmodem14301
#port = /dev/ttyACM0
port := $(shell arduino-cli board list | sed '/^$$/d' | sed -En '$$s/([^ ]*).*/\1/p')
mcu = atmega328p
part = atmega328p
frequency = 16000000UL
#frequency = 8000000UL

TARGET := PortOC0A
TARGET := Pwm_CTC
output_format = ihex
CC = avr-gcc
LD = avr-ld
programmer = stk500v1
programmer = avrisp
programmer = arduino
baud = 19200
baud = 57600


.PHONY: flash echo clean

all: flash

build/%.o: src/%.c
	if [ ! -d build ]; then mkdir build; fi
	avr-gcc -Os -mmcu=$(mcu) -c $< -o $@

build/%.elf: build/%.o
	avr-gcc $< -o $@

build/%.ihex: build/%.elf
	avr-objcopy -Oihex $< $@

flash : build/$(TARGET).ihex
	avrdude -c $(programmer) -P $(port) -p $(part) -b $(baud) -D -U flash:w:build/$(TARGET).ihex:i

echo:
	echo $(port)
clean:
	if [ -d build ]; then rm -rf build/*; fi
