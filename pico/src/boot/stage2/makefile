SHELL := /bin/bash

CC := arm-none-eabi-gcc
LD := arm-none-eabi-ld
AS := arm-none-eabi-as
OBJCOPY := arm-none-eabi-objcopy
OBJDUMP := arm-none-eabi-objdump
PAD_CHECKSUM := ${RASP}/bin/pad_checksum

ARCH := -mcpu=cortex-m0plus -mthumb -O3 -DNDEBUG

BUILD_DIR :=$(shell sed -En 's/src/build/p' <<< `pwd`)

LD_SCRIPT := memmap_boot2.ld

### -ffunction-sections -fdata-sections
### 	each symbol has a section, function == .text.<func> ;  data == .data.<var>
### 		e.g) .text.put32 .text.pin5 .bss.cpuirq

CFLAGS := $(ARCH)

AOPT := $(ARCH)

LOPT := -nostdlib
LOPT += -T $(LD_SCRIPT)

LDFLAGS += $(ARCH)
LDFLAGS += -Wl,--script=$(LD_SCRIPT)
LDFLAGS += -Wl,--build-id=none --specs=nosys.specs -nostartfiles
### --specs=nosys.specs
### 	newlib does not by default provide implementations for the functions
### 		that make only sense on a system with a console and an hard drive,
### 		basically system calls such as read/write/open/close/...
### 		if don't need to those functions,
### 	using --specs=nosys.specs: make the app link with default
### 		when called, the linker will return an error code

#LDFLAGS += -Wl,-Map=$(patsubst %,%.map,$@)



SRCS  := boot2.s
TARGET := $(patsubst %,$(BUILD_DIR)/%.obj,$(SRCS))
TARGETS := $(shell echo $(TARGET){,.elf{,.bin{,.S{,.o}}}})

all: $(TARGETS)

$(BUILD_DIR)/%.c.obj: %.c
	@if [[ ! -d $(@D) ]];then mkdir -p $(@D) ;fi
	$(CC) -c $(CFLAGS) $< -o $@ 

$(BUILD_DIR)/%.s.obj: %.s
	@if [[ ! -d $(@D) ]];then mkdir -p $(@D) ;fi
	$(CC) $(CFLAGS) -o $@ -c $<

$(BUILD_DIR)/%.S.o: $(BUILD_DIR)/%.S
	$(CC) $(CFLAGS) -o $@ -c $<
	$(eval export lib_stage2 := $@)
	echo $(lib_stage2)

$(BUILD_DIR)/%.obj.elf: $(BUILD_DIR)/%.obj
	$(CC) $(LDFLAGS) -Wl,-Map=$(patsubst %,%.map,$<) $< -o $@

$(BUILD_DIR)/%.elf.bin: $(BUILD_DIR)/%.elf
	$(OBJCOPY) -Obinary $< $@
	$(OBJDUMP) -h $< > $(patsubst %,%.dis,$<)
	$(OBJDUMP) -d $< >> $(patsubst %,%.dis,$<)

$(BUILD_DIR)/%.bin.S: $(BUILD_DIR)/%.bin
	$(PAD_CHECKSUM) -s 0xffffffff $< $@


.PHONY: map dis screen radare2 vi echo ld clean
map:
	nvim `sed -En 's/\.elf.*/.map/p' <<< $(TARGET)`

dis:
	nvim `sed -En 's/\.bin.*/.dis/p' <<< $(TARGET)`

MK_files ?= $(shell find `git rev-parse --show-toplevel` -name '*.mk')
include $(filter %grep.mk,$(MK_files))

tree:
	tree $(BUILD_DIR)

echo:
	@echo $(TARGETS)

src: 
	nvim $(SRCS)

ld:
	nvim $(LD_SCRIPT)

clean:
	rm -rf $(BUILD_DIR)/*
