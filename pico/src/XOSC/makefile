SHELL := /bin/bash
ARM := arm-none-eabi
XCPU := -mcpu=cortex-m0plus -mthumb


AOPT := --warn --fatal-warnings $(XCPU)
COPT := -Wall -O2 -ffreestanding $(XCPU)
LOPT := -nostdlib

BDIR := $(shell pwd | sed -En 's/src/build/p')

target :=notmain
target := init-clock.c
deps :=$(target).c
tools :=bin2uf2.c

deps_a := $(shell for i in $(deps);do find `pwd` -name $$i ;done)

DEPs := $(shell for i in $(deps_a);do sed -En 's,(.*)src(.*),\1build\2.o,p' <<< $$i ;done)

TARGES := $(shell sed -E 's;(.*)src(.*);echo \1build\2.o{,.elf{,.bin{,.uf2}}};e' <<< $(filter %$(target).c,$(deps_a)))

tools_dir := $(shell pwd | sed -En 's,(.*src/).*,\1tools,p')
tools_srcs := $(wildcard $(tools_dir)/*.c)
tools_bin2uf2 := $(shell sed -En 's,(.*)src(.*),\1build\2.out,p' <<< $(filter %$(tools),$(tools_srcs)))

LDSCRIPT := memmap_sram.ld memmap_flash.ld
ld := sram

.PHONY: all echo clean tree

all: tools $(TARGES)

tools:
	make -C $(tools_dir)

$(BDIR)/%.c.o: %.c
	[[ ! -d $(@D) ]]; mkdir -p $(@D)
	$(ARM)-gcc $(COPT) -c $< -o$@

$(BDIR)/%.s.o: %.s
	[[ ! -d $(@D) ]]; mkdir -p $(@D)
	$(ARM)-as $(AOPT) $< -o$@

$(filter %.elf,$(TARGES)): $(DEPs)
	$(ARM)-ld $(LOPT) -T $(filter %$(ld).ld,$(LDSCRIPT)) $^ -o$@

$(filter %.bin,$(TARGES)): $(filter %.elf,$(TARGES))
	$(ARM)-objcopy --srec-forceS3 $< -O srec $@.srec
	$(ARM)-objcopy -Obinary $< $@
	$(ARM)-objdump -Dh $< > $@.list


$(filter %.uf2,$(TARGES)): $(filter %.bin,$(TARGES))
	$(tools_bin2uf2) $(word 1,$^) $@

dev :=$(if $(filter Linux,$(shell uname -s)),\
	        $(shell lsblk | sed -En '/^└─.*t *$$/{s/[^a-z]*([a-z1]*).*/\/dev\/\1/p}'),/Volumes/RPI-RP2)

flash: all
	@if [[ "$(dev)" =~ "/dev" && `uname -s` =~ Linux ]];\
		then if [[ -n `find /mnt -empty` ]]; 	\
				then sudo mount $(dev) /mnt; 	\
			 fi; 								\
			 sudo cp $(filter %.uf2,$(TARGES)) /mnt;\
	elif [[ `uname -s` =~ Darwin && "$(dev)" =~ "RPI-RP2" ]]; \
		then cp $(filter %.uf2,$(TARGES)) $(dev);\
	else echo "NO flash!";\
	fi

echo: 
	@echo $(DEPs)
	@echo $(TARGES)

clean:
	rm -rf $(BDIR)/*

tree:
	tree $(BDIR)
