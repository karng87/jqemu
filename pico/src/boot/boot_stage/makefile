
CC := arm-none-eabi-gcc
LD := arm-none-eabi-ld
AS := arm-none-eabi-as
OBJCOPY := arm-none-eabi-objcopy
OBJDUMP := arm-none-eabi-objdump
PAD_CHECKSUM := python3 pad_checksum.py

ARCH := -mcpu=cortex-m0plus -mthumb -O3 -DNDEBUG

BUILD_DIR :=$(shell sed -En 's/src/build/p' <<< `pwd`)

LD_SCRIPT := memmap_boot2.ld

CFLAGS := \
        -DPICO_BOARD=\\\"pico\\\" \
        -DPICO_BUILD=1 \
        -DPICO_NO_HARDWARE=0 \
        -DPICO_ON_DEVICE=1 \
        -mcpu=cortex-m0plus -mthumb\
        -O3 -DNDEBUG 

LDFLAGS := \
    -mcpu=cortex-m0plus -mthumb -O3 -DNDEBUG \
    -Wl,--build-id=none --specs=nosys.specs -nostartfiles \
    -Wl,--script=$(LD_SCRIPT) \
    -Wl,-Map=$@.map

AOPT := $(ARCH)


SRCS  := boot_stage2.s
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
