

BDIR := $(shell pwd | grep -En 's/src.*/build/p')
ARM := arm-none-eabi

ARCH := -mcpu=cortex-m0plus -mthumb -O3 -DNDEBUG
LF := memnap_crt0.ld

AOPT := --warn --fatal-warnings $(ARCH)

COPT := -c -Wall -ffreestanding $(ARCH)

LOPT += -T$(LF)
LOPT += -ffunction-sections -fdata-sections -std=gnu11 

$(BDIR)/%.c.o: %.c
$(BDIR)/%.s.o: %.s
$(BDIR)/%.o.elf: $(BDIR)/%.o
$(BDIR)/%.o.bin: $(BDIR)/%.elf
$(BDIR)/%.o.uf2: $(BDIR)/%.bin
