
mcu = atmega328p
frequency = 16000000UL

output_format = ihex

programmer = arduino
port = /dev/cu.usbserial-1410
part = atmega328p


all: build/led.hex

build/%.o: src/%.c
	if [ ! -d build ]; then mkdir build; fi
	avr-gcc -Os -DF_CPU=$(frequency) -mmcu=$(mcu) -c $< -o $@

build/%.elf: build/%.o
	avr-gcc $< -o $@

build/%.hex: build/%.elf
	avr-objcopy -O ihex $< $@
	avrdude -c $(programmer) -P $(port) -p $(part) -U flash:w:$@

clean:
	if [ -d build ]; then rm -rf build/*; fi
