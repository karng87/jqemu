
BDIR := $(shell sed -En 's/src/build/p' <<< `pwd`)
SRCS := $(wildcard *.c) $(wildcard *.s) $(wildcard *.ld)
INC := -I include
OS := $(shell uname -s)
ARMGNU ?= arm-none-eabi
XCPU := -mcpu=cortex-m0plus

AOPS := --warn --fatal-warnings $(XCPU)
COPS := -Wall -ffreestanding $(XCPU)
LOPS := -nostdlib

LD_SCRIPTS := flash_memmap.ld sram_memmap.ld
ld := flash
TARGET := notmain

DEPS :=  $(shell for i in start.s.o $(TARGET).c.o \
				;do echo $(BDIR)/$$i \
				;done)

all : $(BDIR)/$(TARGET).uf2

$(BDIR)/bin2uf2: bin2uf2.c
	@$(eval D += $(shell if [[ "$(ld)x" =~ sram ]]; then echo "-DSRAM"; fi))
	@$(eval D += $(shell if [[ "$(ld)x" =~ flash ]]; then echo "-DFLASH"; fi))
	gcc $(D) $(INC) -O2 $^ -o$@

$(BDIR)/$(TARGET).uf2: $(BDIR)/$(TARGET).bin $(BDIR)/bin2uf2
	$(word 2,$^) $(word 1,$^) $@

$(BDIR)/$(TARGET).bin: $(BDIR)/$(TARGET).elf
	$(ARMGNU)-objcopy -O binary $^ $@

$(BDIR)/$(TARGET).elf: $(DEPS) $(filter $(ld)%,$(LD_SCRIPTS))
	$(ARMGNU)-ld $(LOPS) -T $(filter $(ld)%, $(LD_SCRIPTS))  $(DEPS) -o$@
	$(ARMGNU)-objdump -D $@ > $@.lst

$(BDIR)/%.s.o: %.s
	if [[ ! -d $(@D) ]]; then mkdir -p $(@D);fi
	$(ARMGNU)-as $(AOPS) $< -o $@ 

$(BDIR)/%.c.o: %.c
	if [[ ! -d $(@D) ]]; then mkdir -p $(@D);fi
	$(ARMGNU)-gcc $(COPS) -mthumb -c $< -o $@ 

dev :=$(if $(filter Linux,$(OS)),\
	        $(shell lsblk | sed -En '/^└─.*t *$$/{s/[^a-z]*([a-z1]*).*/\/dev\/\1/p}'),/Volumes/RPI-RP2)

flash: all
	@if [[ "$(dev)" =~ "/dev" && "$(OS)" =~ Linux ]];\
		then if [[ -n `find /mnt -empty` ]]; 	\
				then sudo mount $(dev) /mnt; 	\
			 fi; 								\
			 sudo cp $(BDIR)/$(TARGET).uf2 /mnt;\
	elif [[ "$(OS)" =~ Darwin && "$(dev)" =~ "RPI-RP2" ]]; \
		then cp $(BDIR)/$(TARGET).uf2 $(dev);\
	else echo "NO flash!";\
	fi

vi:
	nvim $(TARGET).c

clean:
	rm -rf $(BDIR)/*

echo:
	echo $(dev)

