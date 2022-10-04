SRCS := $(shell find src -type f -name '*.s')
OBJS := $(patsubst src/%.s,build/obj/%.o,$(SRCS))
ELFS := $(patsubst src/%.s,build/elf/%.elf,$(SRCS))
TARGETS := $(patsubst src/%.s,build/%.bin,$(SRCS))

TARGET := startup
LinkFile := LinkScript.ld

all: $(OBJS) $(ELFS) $(TARGETS)
build/obj/%.o: src/%.s
	if [ ! -d build/obj ]; then mkdir build/obj; fi
	arm-none-eabi-as -o $@ $<

build/elf/%.elf: build/obj/%.o
	if [ ! -d build/elf ]; then mkdir build/elf; fi
	arm-none-eabi-ld -T $(LinkFile) -o $@ $<

objdump: 
	arm-none-eabi-objdump -h build/elf/$(TARGET).elf

build/%.bin: build/elf/%.elf
	arm-none-eabi-objcopy -O binary $< $@

qemu:
	qemu-system-arm \
		-M vexpress-a9 \
		-m 32M \
		-no-reboot \
		-nographic \
		-monitor telnet:127.0.0.1:1234,server,nowait \
		-kernel build/$(TARGET).bin

telnet:
	telnet localhost 1234

clean:
	if [ -d build ]; then rm build/**; fi
