
BDIR := $(shell sed -En 's/src/build/p' <<< `pwd`)
SRCS := $(wildcard *.c) $(wildcard *.s) $(wildcard *.ld)
INC := -I include

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

$(BDIR)/bin2uf2: bin2uf2.c include/crcpico.h
	@$(eval CFLAGS += $(shell if [[ "$(ld)x" =~ sram ]]; then echo "-DSRAM"; fi))
	@$(eval CFLAGS += $(shell if [[ "$(ld)x" =~ flash ]]; then echo "-DFLASH"; fi))
	gcc $(CFLAGS) $(INC) -O2 $^ -o$@

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

dev :=$(if $(filter Linux,$(shell uname -s)),\
	        $(shell lsblk | sed -En '/^└─.*t *$$/{s/[^a-z]*([a-z1]*).*/\/dev\/\1/p}'),\
			/Volumn/RP-1)

flash: all
	if [[ "X$(dev)" != "X " ]]; 				\
		then if [[ -n $$(find /mnt -empty) ]]; 	\
				then sudo mount $(dev) /mnt; 	\
			 fi; 								\
			 sudo cp $(BDIR)/$(TARGET).uf2 /mnt;\
	fi

vi:
	nvim $(TARGET).c

clean:
	rm -rf $(BDIR)/*

echo:
	echo $(dev)

