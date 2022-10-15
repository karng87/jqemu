mcu = atmega328p
part = atmega328p
#frequency = 16000000UL
#frequency = 8000000UL
port := $(shell arduino-cli board list | sed '/^$$/d' | sed -En '$$s/([^ ]*).*/\1/p')

TARGET := Pwm_CTC
TARGET := Pwm_NormaL
TARGET := Pwm_FasT
TARGET := TIMSK
TARGET := Fast_PWM
TARGET := AEICRA
TARGET := PortB
TARGET := EICRA
TARGET := Timer_ISR

output_format = ihex
CC = avr-gcc
LD = avr-ld
programmer = stk500v1
programmer = avrisp
programmer = arduino
baud = 19200
baud = 115200  # arduino uno
baud = 57600 # bare metal atmega328p


.PHONY: flash echo clean

all: build/$(TARGET).ihex 

build/%.o: src/%.c
	if [ ! -d build ]; then mkdir build; fi
	avr-gcc -Os -mmcu=$(mcu) -c $< -o $@

build/%.elf: build/%.o
	avr-gcc $< -o $@

build/%.ihex: build/%.elf
	avr-objcopy -Oihex -R .eeprom $< $@

flash : build/$(TARGET).ihex
	#avrdude -F -V -c $(programmer) -P $(port) -p $(part) -D -U flash:w:build/$(TARGET).ihex:i
	avrdude -F -V -c $(programmer) -P $(port) -p $(part) -b $(baud) -D -U flash:w:build/$(TARGET).ihex:i

echo:
	echo $(port)
clean:
	if [ -d build ]; then rm -rf build/*; fi
