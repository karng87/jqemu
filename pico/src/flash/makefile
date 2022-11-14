
OS := $(shell uname -s)
MACH = cortex-m0plus
ARM := arm-none-eabi

COPT := -c -Wall -O0 -ffreestanding -mcpu=$(MACH) -mthumb
AOPT := --warn --fatal-warnings -mcpu=$(MACH)
LOPT := -nostdlib
LSCRIPT := memmap.ld

BDIR := $(shell sed -En 's/src/build/p' <<< $$(pwd))
TARGET := $(BDIR)/flash
UF2 := $(BDIR)/bin2uf2


.PHONY: all 
all: $(UF2) $(TARGET).uf2

$(UF2): bin2uf2.c
	[[ ! -d $(@D) ]]; mkdir -p $(@D)
	gcc $< -o$@

$(BDIR)/%.s.o: %.s
	[[ ! -d $(@D) ]]; mkdir -p $(@D)
	$(ARM)-as $(AOPT) $< -o$@

$(BDIR)/%.c.o: %.c
	[[ ! -d $(@D) ]]; mkdir -p $(@D)
	$(ARM)-gcc -c $(COPT) $< -o$@

$(TARGET).elf: $(BDIR)/notmain.c.o $(BDIR)/start.s.o
	$(ARM)-ld $(LOPT) -T$(LSCRIPT) $^ -o$@

$(TARGET).bin: $(TARGET).elf
	$(ARM)-objcopy -Obinary $^ $@

$(TARGET).uf2: $(TARGET).bin
	$(UF2) $^ $@

dev :=$(if $(filter Linux,$(shell uname -s)),\
	        $(shell lsblk | sed -En '/^└─.*t *$$/{s/[^a-z]*([a-z1]*).*/\/dev\/\1/p}'),/Volumes/RPI-RP2)

flash: all
	@if [[ "$(dev)" =~ "/dev" && $(OS) =~ Linux ]];\
		then if [[ -n `find /mnt -empty` ]]; 	\
				then sudo mount $(dev) /mnt; 	\
			 fi; 								\
			 sudo cp $(TARGET).uf2 /mnt;\
	elif [[ `uname -s` =~ Darwin && "$(dev)" =~ "RPI-RP2" ]]; \
		then cp $(TARGET).uf2 $(dev);\
	else echo "NO flash!";\
	fi

echo:
	echo $(dev)

clean:
	rm -rf $(BDIR)/*
tree:
	tree $(BDIR)
