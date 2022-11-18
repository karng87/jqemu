
ARM := arm-none-eabi
CC := $(ARM)-gcc
AS := $(ARM)-as
LD := $(ARM)-ld
OBJCOPY := $(ARM)-objcopy
OBJDUMP := $(ARM)-objdump
NM := $(ARM)-nm
D := -DPICO_NO_FLASH=0 -DPICO_COPY_TO_RAM=0

BDIR := $(shell pwd | sed -En 's/src/build/p')
ARCH := -mcpu=cortex-m0plus -mthumb


AOPT := --warn --fatal-warnings $(ARCH)

COPT := -ffunction-sections -fdata-sections
COPT := -Wall -O2

LD := $(ARM)-ld
CL_SCRIPT := memmap_default.ld
L_SCRIPT := crt0/memmap_crt0.ld

CLOPT += $(ARCH)
CLOPT += -Wl,--build-id=none --specs=nosys.specs -nostdlib
CLOPT += -Wl,--script=$(CL_SCRIPT)

LOPT := -nostdlib
LOPT += -T $(L_SCRIPT)

OBJCOPY := $(ARM)-objcopy
OBJDUMP := $(ARM)-objdump

ELF2UF2 := $(RASP)/bin/elf2uf2
PAD_CHECKSUM := $(RASP)/bin/pad_checksum

SRCS := led25.c
SRCS := main.c func.s

lib_own := $(shell for i in $(SRCS); do find `pwd` -name $$i | sed -En -e 's%src%build%' -e 's%.*%&.o%p' ;done)
lib_stage2 := $(shell find `pwd` -name 'boot2.s' | sed -En -e 's%src%build%' -e 's%.*%&.obj.elf.bin.S.o%p')
lib_crt0 := $(shell find `pwd` -name 'crt0.s' | sed -En -e 's%src%build%' -e 's%.*%&.o%p')

TARGETS := $(shell find `pwd` -name $(word 1,$(SRCS))| sed -En -e 's%src%build%' -e 's%.*%echo &.o{,.elf{,.uf2}}%p' | sh)

.PHONY: all stage2 crt0 echo clean tree 

all:  stage2 crt0 $(lib_own) $(shell echo $(TARGETS))

stage2:
	make -C stage2

crt0:
	make -C crt0

$(BDIR)/%.c.o: %.c
	@[[ ! -d $(@D) ]]; mkdir -p $(@D)
	$(CC) $(COPT) -c $< -o$@

$(BDIR)/%.s.o: %.s
	@[[ ! -d $(@D) ]]; mkdir -p $(@D)
	$(AS) $(AOPT) $< -o$@


#$(BDIR)/%.o.elf: $(lib_stage2) $(lib_crt0) $(lib_own)
#	@[[ ! -d $(@D) ]]; mkdir -p $(@D)
#	$(LD) $(LOPT)  $^ -o$@


$(BDIR)/%.o.elf: $(lib_stage2) $(lib_crt0) $(lib_own)
	@[[ ! -d $(@D) ]]; mkdir -p $(@D)
	$(CC) $(CLOPT) $^ -o$@

$(BDIR)/%.elf.bin: $(BDIR)/%.elf
	$(OBJCOPY) -Obinary $< $@

$(BDIR)/%.elf.uf2: $(BDIR)/%.elf
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
	for i in $(SRCS); do find `pwd` -name $$i | sed -En -e 's%src%build%' -e 's%.*%&.o%p' ;done
	echo $(TARGETS)
clean:
	@rm -rf $(BDIR)/*
