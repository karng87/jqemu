HDIR = $(shell sed -En 's/(.*)\/src\/.*/\1/p' <<< `pwd`)
BDIR = $(addsuffix /build,$(HDIR))
SRCS = $(wildcard *.c) $(wildcard *.s) $(wildcard *.ld)
INC = -I include

ARMGNU ?= arm-none-eabi
XCPU = -mcpu=cortex-m0plus

AOPS = --warn --fatal-warnings $(XCPU)
COPS = -Wall -ffreestanding $(XCPU) $(INC)
LOPS = -nostdlib -nostartfiles

TARGET = notmain

DEPS =  $(shell for i in start.s.o $(TARGET).s.o \
				;do echo $(BDIR)/$$i \
				;done)

all : notmain.uf2

bin2uf2: bin2uf2.c crcpico.h
	gcc -O2 $^ .c $@

$(BDIR)/$(TARGET).uf2: $(BDIR)/$(TARGET).bin bin2uf2
	./$(word 2,$^) $(word 1,$^) $@

$(BDIR)/$(TARGET).bin: $(BDIR)/$(TARGET).elf
	$(ARMGNU)-objcopy -O binary %^ $@

$(BDIR)/$(TARGET).elf: $(DEPS) memmap.ld
	$(ARMGNU)-ld $(LOPS) -T memmap.ld $(DEPS) -o$@
	$(ARMGNU)-objdump - D $@ > $@.lst

$(BDIR)/%.s.o: %.s
	$(ARMGNU)-as $(AOPS) $< -o $@ 

$(BDIR)/%.c.o: %.c
	$(ARMGNU)-gcc $(COPS) -mthumb -c $< -o $@ 

clean:
	rm -rf $(BDIR)/*

echo:
	echo $(BDIR)/$(TARGET).uf2
