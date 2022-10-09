#port = /dev/cu.usbserial-1410
#port = /dev/cu.usbmodem14301
#port = /dev/ttyACM0
port := $(shell arduino-cli board list | sed -En '/arduino/p' | sed -En 's/([^ ]*).*/\1/p')

mcu = atmega328p

#frequency = 16000000UL
frequency = 8000000UL

part = atmega328p

TARGET = PortB
output_format = ihex

programmer = arduino

all: flash

build/%.o: src/%.c
	if [ ! -d build ]; then mkdir build; fi
	avr-gcc -Os -DF_CPU=$(frequency) -mmcu=$(mcu) -c $< -o $@

build/%.elf: build/%.o
	avr-gcc $< -o $@

build/%.ihex: build/%.elf
	avr-objcopy -Oihex $< $@

flash : build/$(TARGET).ihex
	avrdude -c $(programmer) -P $(port) -p $(part) -U flash:w:build/$(TARGET).ihex:i

echo:
	echo $(port)
clean:
	if [ -d build ]; then rm -rf build/*; fi
