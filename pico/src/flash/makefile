

MACH = cortex-m0plus
ARM := arm-none-eabi

COPT := -c -Wall -O0 -ffreestanding -mcpu=$(MACH) -mthumb
AOPT := --warn --fatal-warnings -mcpu=$(MACH)
LOPT := -nostdlib

BDIR := $(shell sed -En 's/src/build/p' <<< $$(pwd))
TARGET := $(BDIR)/flash
UF2 := $(BDIR)/bin2uf2


.PHONY: all echo clean
all: $(UF2) $(BDIR)/start.s.o

$(UF2): bin2uf2.c
	[[ ! -d $(@D) ]]; mkdir -p $(@D)
	gcc -c $< -o$@

$(BDIR)/%.s.o: %.s
	[[ ! -d $(@D) ]]; mkdir -p $(@D)
	$(ARM)-as $(AOPT) $< -o$@

$(BDIR)/%.c.o: %.c
	[[ ! -d $(@D) ]]; mkdir -p $(@D)
	$(ARM)-gcc -c %(COPT) $< -o$@

$(TARGET).elf: $(BDIR)/notmain.c.o $(BDIR)/start.s.o
	$(ARM)-ld %(LOPT) $^ -o$@

$(TARGET).bin: $(TARGET).elf
	$(ARM)-objcopy -Obinary $^ $@

$(TARGET).uf2: $(TARGET).bin
	$(UF2) $^ $@


echo:
	echo $(BDIR)

clean:
	rm -rf $(BDIR)/*
tree:
	tree $(BDIR)
