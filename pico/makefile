## cmake -Dmake_verbose_makefile:bool=1 -Dcmake_rule_messages:bool=0 
## make VERBOSE=1 -no-print-directory

MCU := -mcpu=cortex-m0plus -mthumb

CC := arm-none-eabi-gcc
LD := arm-none-eabi-ld
AS := arm-none-eabi-as

OBJCOPY := arm-none-eabi-objcopy
OBJDUMP := arm-none-eabi-objdump
PAD_CHECKSUM := ${RASP}/bin/pad_checksum
ELF2UF2 := ${RASP}/bin/elf2uf2

INCLUDES := -I include

ASFLAGS := $(MCU) -g

CFLAGS +=  -ffreestanding -g -O0 -std=gnu11 -fpic
CFLAGS += $(MCU) $(INCLUDES) $(DEFINE)

LD_SCRIPT := src/boot/crt0/Crt0.ld
LDFLAGS = -nostdlib -T$(LD_SCRIPT)

SRCS := $(shell find src -regextype posix-extended -regex '.*\.[cS]$$')

BOOT2_SRC  := $(filter %boot2.S,$(SRCS))
BOOT2_CRC := $(patsubst src/%.S,build/%_crc.S.o.elf.bin.S,$(BOOT2_SRC))

CRT0_SRC  := $(filter %Crt0.S,$(SRCS))
CRT0_OBJ := $(patsubst src/%,build/%.o,$(CRT0_SRC))


TARGET := main
TARGET := led25


DEPS :=  $(addsuffix .o,$(BOOT2_CRC)) \
		 $(CRT0_OBJ) \
		 $(patsubst %,build/%.c.o,$(TARGET))

all: notmain XOSC #boot_stage2 crt0 #build/$(TARGET).uf2

notmain:
	make -C src/notmain

XOSC:
	make -C src/XOSC

boot_stage2:
	make -C src/boot/stage2

crt0:
	make -C src/boot/crt0

build/%.c.o: src/%.c
	@if [[ ! -d $(patsubst src%,build%,$(dir $<)) ]];then mkdir -p $(patsubst src%,build%,$(dir $<)) ;fi
	$(CC) $(CFLAGS) -c $< -o$@ 

build/%.S.o: src/%.S
	@if [[ ! -d $(patsubst src%,build%,$(dir $<)) ]];then mkdir -p $(patsubst src%,build%,$(dir $<)) ;fi
	$(AS) $(ASFLAGS) $< -o$@ 

build/%.S.o: build/%.S
	@if [[ ! -d $(patsubst src%,build%,$(dir $<)) ]];then mkdir -p $(patsubst src%,build%,$(dir $<)) ;fi
	$(AS) $(ASFLAGS) $< -o$@ 

build/%.o.elf: build/%.o
	@if [[ ! -d $(patsubst src%,build%,$(<D)) ]];then mkdir -p $(patsubst src%,build%,$(<D)) ;fi
	$(LD) $(LDFLAGS) $< -o$@

build/%.elf.bin: build/%.elf
	$(OBJCOPY) -Obinary $< $@
	$(OBJDUMP) -h $< > $(patsubst %,%.dis,$<)
	$(OBJDUMP) -d $< >> $(patsubst %,%.dis,$<)


build/$(TARGET).elf: $(DEPS)
	$(LD) $(LDFLAGS) $^ -o$@

build/$(TARGET).uf2 : build/$(TARGET).elf
	$(ELF2UF2) $< $@

.PHONY: f fv fc g gv vi

path := ~/Project/rasp/pico-sdk/src \
		src \
		~/Project/rasp/pico-sdk \
		build 

idx := 1 # line number

port := $(if $(filter Darwin,$(shell uname -s)),/dev/$(shell ls /dev | grep 'cu\.usb') ,/dev/ttyACM0)

screen:
	screen $(port) 115200
	# screen -ls
	# screen -r ...; <c-a,c>

radare2:
	radare2 -w arm -b 16 $(word 1, $(shell find build/ -name '*.elf'))
	# ? 0xf00
	# q!
ocd:
	cd $(RASP)/openocd
	src/openocd -f interface/picoprobe.cfg -f target/rp2040.cfg -s tcl

gdb:
	arm-none-eabi-gdb build-cmake/dron.elf
	# target extended-remote localhost:3333
	# load
	# monitor reset init
	# b main
	# run
	# disassemble
	#  ...

tmux:
	tmux new-session -s pico
	tmux new-window -n build
	tmux split-window -h
	tmux split-window -v -h

include $(filter %grep.mk, $(shell find `git rev-parse --show-toplevel` -name "*.mk" ))

vi:
	nvim $(filter %$(TARGET).c, $(SRCS))

crt: 
	nvim $(CRT0_SRC)

b2:
	nvim $(BOOT2_SRC)
echo:
	echo $(PAD_CHECKSUM)

ld:
	nvim $(ld_script)
clean:
	rm -rf build/*

