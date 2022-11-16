## cmake -Dmake_verbose_makefile:bool=1 -Dcmake_rule_messages:bool=0 
## make VERBOSE=1 -no-print-directory
CC := arm-none-eabi-gcc
LD := arm-none-eabi-ld
AS := arm-none-eabi-as
OBJCOPY := arm-none-eabi-objcopy
OBJDUMP := arm-none-eabi-objdump

MCU := -mcpu=cortex-m0plus -mthumb

BASE_DIR := $(shell sed -En 's/(.*)\/src.*/\1/p' <<< `pwd`)
BUILD_DIR := $(shell sed -En 's/src/build/p' <<< `pwd`)

SRCS  := Crt0.S

Crt0_OBJ:= $(patsubst %,$(BUILD_DIR)/%.o,$(SRCS))

INCLUDES := $(BASE_DIR)/include

CFLAGS += -ffunction-sections -fdata-sections
CFLAGS += $(MCU)

all: $(Crt0_OBJ)

$(BUILD_DIR)/%.c.o: %.c
	@if [[ ! -d $(BUILD_DIR) ]];then mkdir -p $(BUILD_DIR) ;fi
	$(CC) -c $(CFLAGS) $< -o $@ 

$(BUILD_DIR)/%.S.o: %.S
	@if [[ ! -d $(BUILD_DIR) ]];then mkdir -p $(BUILD_DIR) ;fi
	$(CC) $(CFLAGS) -o $@ -c $<


.PHONY: f fv fc g gv vi

path := ~/Project/rasp/pico-sdk/src \
		src \
		build \
		~/Project/rasp/pico-sdk

idx := 1 # line number

port := $(if $(filter Darwin,$(shell uname -s)),/dev/$(shell ls /dev | grep 'cu\.usb'),/dev/ttyACM0)

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
	nvim $(word 1,$(SRCS))

echo:
	@echo $(MK_files)

ld:
	nvim $(ld_script)

clean:
	@rm $(BUILD_DIR)/*
