SHELL := /bin/bash

CC := arm-none-eabi-gcc
LD := arm-none-eabi-ld
AS := arm-none-eabi-as
OBJCOPY := arm-none-eabi-objcopy
OBJDUMP := arm-none-eabi-objdump
PAD_CHECKSUM := ${RASP}/bin/pad_checksum

MCU := -mcpu=cortex-m0plus -mthumb

BUILD_DIR :=$(shell sed -En 's/src/build/p' <<< `pwd`)

LD_SCRIPT := memmap_boot2.ld

INCLUDES := $(shell pwd | sed -En 's/(.*)\/src\/.*/-I \1\/include/p')

### -ffunction-sections -fdata-sections
### 	each symbol has a section, function == .text.<func> ;  data == .data.<var>
### 		e.g) .text.put32 .text.pin5 .bss.cpuirq

CFLAGS += $(MCU) $(INCLUDES)


LDFLAGS += -O3 -DNDEBUG
LDFLAGS += -Wl,--build-id=none --specs=nosys.specs -nostartfiles
LDFLAGS += -Wl,--script=$(LD_SCRIPT)
### --specs=nosys.specs
### 	newlib does not by default provide implementations for the functions
### 		that make only sense on a system with a console and an hard drive,
### 		basically system calls such as read/write/open/close/...
### 		if don't need to those functions,
### 	using --specs=nosys.specs: make the app link with default
### 		when called, the linker will return an error code

#LDFLAGS += -Wl,-Map=$(patsubst %,%.map,$@)

SRCS  := boot2.S
TARGET := $(patsubst %.S,$(BUILD_DIR)/%.S.o.elf.bin.S,$(SRCS))

all: $(TARGET)

$(BUILD_DIR)/%.c.o: %.c
	@if [[ ! -d $(@D) ]];then mkdir -p $(@D) ;fi
	$(CC) -c $(CFLAGS) $< -o $@ 

$(BUILD_DIR)/%.S.o: %.S
	@if [[ ! -d $(@D) ]];then mkdir -p $(@D) ;fi
	$(CC) $(CFLAGS) -o $@ -c $<

$(BUILD_DIR)/%.S.o: $(BUILD_DIR)/%.S
	$(CC) $(CFLAGS) -o $@ -c $<

$(BUILD_DIR)/%.o.elf: $(BUILD_DIR)/%.o
	$(CC) $(LDFLAGS) -Wl,-Map=$(patsubst %,%.map,$<) $< -o $@

$(BUILD_DIR)/%.elf.bin: $(BUILD_DIR)/%.elf
	$(OBJCOPY) -Obinary $< $@
	$(OBJDUMP) -h $< > $(patsubst %,%.dis,$<)
	$(OBJDUMP) -d $< >> $(patsubst %,%.dis,$<)

$(TARGET): $(patsubst %,$(BUILD_DIR)/%.o.elf.bin,$(SRCS))
	$(PAD_CHECKSUM) -s 0xffffffff $< $@

.PHONY: map dis screen radare2 vi echo ld clean
map:
	nvim `sed -En 's/\.elf.*/.map/p' <<< $(TARGET)`

dis:
	nvim `sed -En 's/\.bin.*/.dis/p' <<< $(TARGET)`

path := ~/Project/rasp/pico-sdk/src \
		src \
		build \
		~/Project/rasp/pico-sdk

idx := 1 # line number

port := $(if \
		$(filter Darwin,$(shell uname -s))\
		,/dev/$(shell ls /dev | grep 'cu\.usb')\
		,/dev/ttyACM0)

screen:
	screen $(port)
	# screen -ls
	# screen -r ...; <c-a,c>

radare2:
	radare2 -w arm -b 16 $(word 1, $(shell find build/ -name '*.elf'))
	# ? 0xf00
	# q!

MK_files ?= $(shell find `git rev-parse --show-toplevel` -name '*.mk')
include $(filter %grep.mk,$(MK_files))

vi: 
	nvim $(SRC)

tree:
	tree $(BUILD_DIR)
echo:
	echo $(BUILD_DIR)

	#sed -En '1p' <<< `grep --color=always -ERn $(pat) ~/Project/rasp/pico-sdk/src`
ld:
	nvim $(ld_script)

clean:
	rm -rf $(BUILD_DIR)/*
