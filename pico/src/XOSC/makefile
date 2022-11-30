BDIR := $(shell pwd | sed -En 's/src/build/p')
ARM := arm-none-eabi
MCPU:= -mcpu=cortex-m0plus -mthumb

target := init-clock.c
target := notmain.c
deps := $(target) start.s
DEF := -DSRAM
ld_script := memmap_sram.ld
tool :=bin2uf2.c

ASFLAGS := --warn --fatal-warnings $(MCPU)

CFLAGS += $(MCPU)
CFLAGS += -W -Wall -std=gnu11 -Os
CFLAGS += -ffreestanding
CFLAGS += -MD -MP -MT $@ -MF $@.d

LDFLAGS += -nostdlib
LDFLAGS += -T $(ld_script)

deps_a := $(shell for i in $(deps);do find `pwd` -name $$i ;done)

DEPS := $(shell for i in $(deps_a);do sed -En 's,(.*)src(.*),\1build\2.o,p' <<< $$i ;done)

TARGETS := $(shell sed -E 's;(.*)src(.*);echo \1build\2.o{,.elf{,.bin{,.uf2}}};e' <<< $(filter %$(target),$(deps_a)))

tools_dir := $(shell pwd | sed -En 's,(.*src/).*,\1tools,p')
tools_srcs := $(shell find $(tools_dir) -name '*.[cs]')
TOOLS_BIN2UF2 := $(shell sed -En 's,(.*)src(.*),\1build\2.out,p' <<< $(filter %$(tool),$(tools_srcs)))


.PHONY: all echo clean tree

all: tools $(TARGETS)

tools:
	make -C $(tools_dir)

$(BDIR)/%.c.o: %.c
	@[[ ! -d $(@D) ]]; mkdir -p $(@D)
	$(ARM)-gcc -c $(CFLAGS) $< -o$@

$(BDIR)/%.s.o: %.s
	[[ ! -d $(@D) ]]; mkdir -p $(@D)
	$(ARM)-as $(ASFLAGS) $< -o$@

$(filter %.elf,$(TARGETS)): $(DEPS)
	$(ARM)-ld $(LDFLAGS) $^ -o$@

$(filter %.bin,$(TARGETS)): $(filter %.elf,$(TARGETS))
	$(ARM)-objcopy --srec-forceS3 $< -O srec $@.srec
	$(ARM)-objcopy -Obinary $< $@
	$(ARM)-objdump -Dh $< > $@.list


$(filter %.uf2,$(TARGETS)): $(filter %.bin,$(TARGETS))
	$(TOOLS_BIN2UF2) $< $@

dev :=$(if $(filter Linux,$(shell uname -s)),\
	        $(shell lsblk | sed -En '/^└─.*t *$$/{s/[^a-z]*([a-z1]*).*/\/dev\/\1/p}'),/Volumes/RPI-RP2)

flash: all
	@if [[ "$(dev)" =~ "/dev" && `uname -s` =~ Linux ]];\
		then if [[ -n `find /mnt -empty` ]]; 	\
				then sudo mount $(dev) /mnt; 	\
			 fi; 								\
			 sudo cp $(filter %.uf2,$(TARGETS)) /mnt;\
	elif [[ `uname -s` =~ Darwin && "$(dev)" =~ "RPI-RP2" ]]; \
		then cp $(filter %.uf2,$(TARGETS)) $(dev);\
	else echo "NO flash!";\
	fi

echo: 
	@echo $(DEPS)
	@echo $(TARGETS)

clean:
	rm -rf $(BDIR)/*

tree:
	tree $(BDIR)
