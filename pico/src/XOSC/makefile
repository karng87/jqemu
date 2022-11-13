ARM := arm-none-eabi
XCPU := -mcpu=cortex-m0plus -mthumb


AOPT := --warn --fatal-warnings $(XCPU)
COPT := -Wall -O2 -ffreestanding $(XCPU)
LOPT := -nostdlib

BDIR := $(shell pwd | sed -En 's/src/build/p')
SRCs := $(wildcard *.c) $(wildcard *.s)
DEPs := $(filter %start.s %notmain.c,$(SRCs))
PROJECT := $(BDIR)/notmain

TARGET_uf2 = $(BDIR)/makeuf2
TARGET_uf2 = $(BDIR)/bin2uf2

LDSCRIPT := memmap_sram.ld memmap_flash.ld
ld := sram

.PHONY: all echo clean tree

all: $(PROJECT).uf2

#$(TARGET_uf2): makeuf2.c
$(TARGET_uf2): bin2uf2.c
	[[ ! -d $(@D) ]]; mkdir -p $(@D)
	gcc  -D $(shell x=$(ld);echo $${x^^}) $< -o$@

$(BDIR)/%.c.o: %.c
	[[ ! -d $(@D) ]]; mkdir -p $(@D)
	$(ARM)-gcc $(COPT) -c $< -o$@

$(BDIR)/%.s.o: %.s
	[[ ! -d $(@D) ]]; mkdir -p $(@D)
	$(ARM)-as $(AOPT) $< -o$@

$(PROJECT).elf: $(BDIR)/start.s.o $(BDIR)/notmain.c.o
	$(ARM)-ld $(LOPT) -T $(filter %$(ld).ld,$(LDSCRIPT)) $^ -o$@

$(PROJECT).bin: $(PROJECT).elf
	$(ARM)-objcopy --srec-forceS3 $< -O srec $(PROJECT).srec
	$(ARM)-objcopy -Obinary $< $@
	$(ARM)-objdump -D $< > $(PROJECT).list


$(PROJECT).uf2: $(PROJECT).bin $(TARGET_uf2)
	$(word 2,$^) $(word 1,$^) $@

dev :=$(if $(filter Linux,$(shell uname -s)),\
	        $(shell lsblk | sed -En '/^└─.*t *$$/{s/[^a-z]*([a-z1]*).*/\/dev\/\1/p}'),/Volumes/RPI-RP2)

flash: all
	@if [[ "$(dev)" =~ "/dev" && `uname -s` =~ Linux ]];\
		then if [[ -n `find /mnt -empty` ]]; 	\
				then sudo mount $(dev) /mnt; 	\
			 fi; 								\
			 sudo cp $(PROJECT).uf2 /mnt;\
	elif [[ `uname -s` =~ Darwin && "$(dev)" =~ "RPI-RP2" ]]; \
		then cp $(PROJECT).uf2 $(dev);\
	else echo "NO flash!";\
	fi

echo: 
	echo $(dev)

clean:
	rm -rf $(BDIR)/*

tree:
	tree $(BDIR)
