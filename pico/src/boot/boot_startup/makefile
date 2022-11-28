## cmake -Dmake_verbose_makefile:bool=1 -Dcmake_rule_messages:bool=0 
## make VERBOSE=1 -no-print-directory
CC := arm-none-eabi-gcc
LD := arm-none-eabi-ld
AS := arm-none-eabi-as
OBJCOPY := arm-none-eabi-objcopy
OBJDUMP := arm-none-eabi-objdump

ARCH := -mcpu=cortex-m0plus -mthumb -O3 -DNDEBUG

D := \
    -DPICO_BOARD=\\\"pico\\\" \
    -DPICO_BUILD=1 \
    -DPICO_COPY_TO_RAM=0 \
    -DPICO_NO_FLASH=0 \
    -DPICO_NO_HARDWARE=0 \
    -DPICO_ON_DEVICE=1 \
    -DPICO_USE_BLOCKED_RAM=0 

D += -DPICO_CXX_ENABLE_EXCEPTIONS=0

BUILD_DIR := $(shell pwd | sed -En 's/src/build/p')

SRCS  := boot_crt0.s
TASRGET := $(shell for i in $(SRCS);do find `pwd` -name $$i | sed -En -e 's,src,build,' -e 's,.*,&.obj,p'; done )

INCLUDES := $(BASE_DIR)/include

CFLAGS += $(D)
CFLAGS += \
    -mcpu=cortex-m0plus -mthumb \
    -O3 -DNDEBUG \
    -ffunction-sections -fdata-sections 

all: $(TASRGET)

$(BUILD_DIR)/%.c.obj: %.c
	@if [[ ! -d $(@D) ]];then mkdir -p $(i@D) ;fi
	$(CC) -c $(CFLAGS) $< -o $@ 

$(BUILD_DIR)/%.s.obj: %.s
	@if [[ ! -d $(@D) ]];then mkdir -p $(@D) ;fi
	$(CC) $(CFLAGS) -c $< -o$@ 

.PHONY: f fv fc g gv vi

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

tree:
	@tree $(BUILD_DIR)

vi: 
	@nvim $(word 1,$(SRCS))

ld:
	@nvim $(LD_SCRIPT)

echo:
	@echo $(Crt0_OBJ)

clean:
	@rm -rf $(BUILD_DIR)/*
