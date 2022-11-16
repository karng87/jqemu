ARM := arm-none-eabi

AS := $(ARM)-as
AOPT := --warn --fatal-warnings $(ARCH)


BDIR := $(shell pwd | sed -En 's/src/build/p')
ARCH := -mcpu=cortex-m0plus -mthumb -O3 -DNDEBUG


CC := $(ARM)-gcc
#COPT = -ffunction-sections -fdata-sections $(ARCH)
COPT := -Wall -O2 -ffreestanding $(ARCH)

#LOPT += -Wl,--script=$(LF)
LD := $(ARM)-ld
LD_SCRIPT := crt0/memmap_crt0.ld
#LOPT += -T$(LD_SCRIPT) $(ARCH)
#LOPT += -Wl,--build-id=none --specs=nosys.specs 
LOPT := -nostdlib

OBJCOPY := $(ARM)-objcopy
OBJDUMP := $(ARM)-objdump

ELF2UF2 := $(RASP)/bin/elf2uf2
PAD_CHECKSUM := $(RASP)/bin/pad_checksum

SRCS := led25.c
TARGET := $(shell sed -En 's#.*#$(BDIR)/&.o.elf.uf2#p' <<< $(SRCS))
DEPS := crt0/Crt0.S stage2/boot2.S.o.elf.bin.S

LIBS := $(shell for i in $(DEPS); do \
		sed -En 's#.*#$(BDIR)/&.o#p' <<< $$i;done)

LIBS += $(shell sed -En 's#.*#$(BDIR)/&.o#p' <<< $(SRCS))

.PHONY: all stage2 crt0 echo clean tree 
all:  stage2 crt0 $(LIBS) $(TARGET)

stage2:
	make -C stage2

crt0:
	make -C crt0

$(BDIR)/%.c.o: %.c
	@[[ ! -d $(@D) ]]; mkdir -p $(@D)
	$(CC) $(COPT) -c $< -o$@

$(BDIR)/%.S.o: %.S
	@[[ ! -d $(@D) ]]; mkdir -p $(@D)
	$(AS) $(AOPT) $< -o$@

$(BDIR)/%.o.elf: $(patsubst %,%,$(LIBS))
	@[[ ! -d $(@D) ]]; mkdir -p $(@D)
	$(LD) $(LOPT) $^ -o$@

$(BDIR)/%.elf.bin: $(BDIR)/%.elf
	$(OBJCOPY) -Obinary $< $@

$(BDIR)/%.elf.uf2: $(BDIR)/%.elf
	$(ELF2UF2) $< $@

tree:
	@tree $(BDIR)
echo:
	@echo $(BDIR)
	@echo $(LIBS)

clean:
	@rm -rf $(BDIR)/*
