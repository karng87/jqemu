
ARM := arm-none-eabi
CC := $(ARM)-gcc
AS := $(ARM)-as
LD := $(ARM)-ld
NM := $(ARM)-nm

OBJCOPY := $(ARM)-objcopy
OBJDUMP := $(ARM)-objdump

PAD_CHECKSUM := $(RASP)/bin/pad_checksum
ELF2UF2 := $(RASP)/bin/elf2uf2

D := -DPICO_NO_FLASH=0 -DPICO_COPY_TO_RAM=0

BDIR := $(shell pwd | sed -En 's/src/build/p')

ARCH := -mcpu=cortex-m0plus -mthumb
LD_SCRIPT := memmap_default.ld
LD_SCRIPT := memmap_copy_to_ram.ld

targets := main.c func.s
targets := 02-led25_macro.c

TARGETS := $(shell find `pwd` -name $(word 1,$(targets)) \
		   | sed -E 's;(.*)src(.*);echo \1build\2.obj{,.elf{,.bin,.uf2}};e')

DEPS := $(shell for i in $(targets) \
					;do find `pwd` -name $$i | sed -En -e 's,(.*)src(.*),\1build\2.obj,p' \
					;done)

stage2  := boot_stage2.s
OBJS_STAGES := $(shell find `pwd` -name $(stage2) | sed -En 's,(.*)src(.*),\1build\2.obj.elf.bin.S,p')

crt0 := boot_crt0.s
OBJS_CRT0 := $(shell find `pwd` -name $(crt0) | sed -En 's,(.*)src(.*),\1build\2.obj,p')




CFLAGS := \
    -DPICO_BOARD=\"pico\" \
	-DPICO_BUILD=1 \
	-DPICO_CMAKE_BUILD_TYPE=\"Release\" \
	-DPICO_COPY_TO_RAM=0 \
	-DPICO_CXX_ENABLE_EXCEPTIONS=0 \
	-DPICO_NO_FLASH=0 \
	-DPICO_NO_HARDWARE=0 \
	-DPICO_ON_DEVICE=1 \
	-DPICO_TARGET_NAME=\"Hack\" \
	-DPICO_USE_BLOCKED_RAM=0 \
    -mcpu=cortex-m0plus -mthumb -O3 -DNDEBUG \
    -ffunction-sections -fdata-sections -std=gnu11

LDFLAGS := \
    -mcpu=cortex-m0plus -mthumb -O3 -DNDEBUG \
    -Wl,--script=$(LD_SCRIPT) \
    -Wl,--build-id=none --specs=nosys.specs -Wl,--gc-sections


.PHONY: all stage2 crt0 echo clean tree 

all:  stage startup $(lib_own) $(shell echo $(TARGETS))

stage:
	make -C boot_stage

startup:
	make -C boot_startup

$(BDIR)/%.c.obj: %.c
	@[[ ! -d $(@D) ]]; mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o$@

$(BDIR)/%.s.obj: %.s
	@[[ ! -d $(@D) ]]; mkdir -p $(@D)
	$(CC) $(CFLAGS) $< -o$@

$(filter %.elf,$(TARGETS)): $(DEPS)
	$(CC) $(LDFLAGS) -Wl,-Map=@.map $(OBJS_CRT0) $(OBJS_STAGES) $^  -o$@

$(filter %.bin,$(TARGETS)): $(filter %.elf,$(TARGETS))
	$(OBJCOPY) -Obinary $< $@
	$(ARM)-objdump -hD $< > $@.lst

$(filter %.uf2,$(TARGETS)): $(filter %.elf,$(TARGETS))
	$(ELF2UF2) $< $@

include $(shell find `git rev-parse --show-toplevel` -name '*.mk' | sed -En '/grep\.mk/p')

nano_specs:
	nvim /Applications/ArmGNUToolchain/11.3.rel1/arm-none-eabi/arm-none-eabi/lib/nano.specs

dev :=$(if $(filter Linux,$(shell uname -s)),\
	        $(shell lsblk | sed -En '/^└─.*t *$$/{s/[^a-z]*([a-z1]*).*/\/dev\/\1/p}'),/Volumes/RPI-RP2)
flash: all
	@if [[ "$(dev)" =~ "/dev" && `uname -s` =~ Linux ]];\
		then if [[ -n `find /mnt -empty` ]]; 	\
				then sudo mount $(dev) /mnt; 	\
			 fi; 								\
			 sudo cp $(filter %.uf2,$(TARGETS)) /mnt;\
	elif [[ `uname -s` =~ Darwin && "$(dev)" =~ "RPI-RP2" ]]; \
		then cp  $(filter %.uf2,$(TARGETS)) $(dev);\
	else echo "NO flash!";\
	fi

tree:
	@tree $(BDIR)

echo:
	@echo $(TARGETS)

clean:
	@rm -rf $(BDIR)/*
