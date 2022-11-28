##############################################################################
BUILD = build
BIN = Demo

##############################################################################
.PHONY: all directory clean size
ARM := arm-none-eabi
CC = $(ARM)-gcc
OBJCOPY = $(ARM)-objcopy
SIZE = $(ARM)-size

ifeq ($(OS), Windows_NT)
  MKDIR = gmkdir
else
  MKDIR = mkdir
endif

BDIR := $(shell pwd | sed -En -e 's,(.*)src(.*),\1build\2,p')

CFLAGS += -W -Wall --std=gnu11 -Os
CFLAGS += -ffreestanding
CFLAGS += -fno-diagnostics-show-caret
CFLAGS += -fdata-sections -ffunction-sections
CFLAGS += -funsigned-char -funsigned-bitfields
CFLAGS += -mcpu=cortex-m0plus -mthumb

LDFLAGS += -mcpu=cortex-m0plus -mthumb
LDFLAGS += -nostartfiles
LDFLAGS += -Wl,--gc-sections
LDFLAGS += -Wl,--script=memmap-mcu_starter.ld

INCLUDES += \
  -I../include \
  -I..

SRCS += \
  ../led_25.c \
  ../led_startup.c

DEFINES += \

CFLAGS += $(INCLUDES) $(DEFINES)

OBJS = $(addprefix $(BUILD)/, $(notdir %/$(subst .c,.o, $(SRCS))))

all: directory $(BUILD)/$(BIN).elf $(BUILD)/$(BIN).hex $(BUILD)/$(BIN).bin $(BUILD)/$(BIN).uf2 size

$(BUILD)/$(BIN).elf: $(OBJS)
	@echo LD $@
	@$(CC) $(LDFLAGS) $(OBJS) $(LIBS) -o $@

$(BUILD)/$(BIN).hex: $(BUILD)/$(BIN).elf
	@echo OBJCOPY $@
	@$(OBJCOPY) -O ihex $^ $@

$(BUILD)/$(BIN).bin: $(BUILD)/$(BIN).elf
	@echo OBJCOPY $@
	@$(OBJCOPY) -O binary $^ $@

$(BUILD)/$(BIN).uf2: $(BUILD)/$(BIN).bin
	@echo BIN2UF2 $@
	@./notmain_bin2uf2.c.out $^ $@
	#@build/bin2uf2.c.out -i $^ -o $@

%.o:
	@echo CC $@
	@$(CC) $(CFLAGS) $(filter %/$(subst .o,.c,$(notdir $@)), $(SRCS)) -c -o $@

directory:
	@$(MKDIR) -p $(BUILD)
	make -C ../tools all

size: $(BUILD)/$(BIN).elf
	@echo size:
	@$(SIZE) -t $^

clean:
	@echo clean
	@-rm -rf $(BUILD)

-include $(wildcard $(BUILD)/*.d)

