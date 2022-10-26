
##############################################################################
OS := $(shell uname -s)
##############################################################################
.PHONY: all directory clean size

CC = arm-none-eabi-gcc
AS = arm-none-eabi-as
LD = arm-none-eabi-ld
OBJCOPY = arm-none-eabi-objcopy
SIZE = arm-none-eabi-size

ifeq ($(OS), Windows_NT)
  MKDIR = gmkdir
else
  MKDIR = mkdir
endif


CFLAGS += -W -Wall --std=gnu11 -O0
CFLAGS += -ffreestanding
CFLAGS += -fno-diagnostics-show-caret
CFLAGS += -fdata-sections -ffunction-sections
CFLAGS += -funsigned-char -funsigned-bitfields
CFLAGS += -mcpu=cortex-m0plus -mthumb
# -M : auto generate depency files for GNU Make  
#         hello.o: hello.c f:/usr/include/std.h ...
# -MM : exclusive System header
# -MP : set PHONY(없을때 오류 제거)
# -MT : rename 
# -MF : generate file
# -MD : -M -MF
CFLAGS += -M -MP -MT build/$(patsubst src/%.c,%.o,$<) -MF build/$(patsubst src/%.c,%.d,$<)


LDFLAGS += -mcpu=cortex-m0plus -mthumb
LDFLAGS += -nostartfiles
# --gc : garbage collection
LDFLAGS += -Wl,--gc-sections
LDFLAGS += -Wl,--script=linker/rp2040.ld

INCLUDES += -I include

SRCS = $(shell find src -name "*.c")

DEFINES += \

CFLAGS += $(INCLUDES) $(DEFINES)

CMDFLAG = -W -Wall --std=gnu11 -O0
CMDFLAG += -ffreestanding
CMDFLAG += -fdata-sections -ffunction-sections
CMDFLAG += -mcpu=cortex-m0plus -mthumb
CMDFLAG += $(INCLUDES)


TARGET = main

all:$(patsubst src/%.c,build/%.o,$(SRCS)) \
	build/$(TARGET).elf \
	build/$(TARGET).bin \
	build/$(TARGET).uf2

build/%.o: src/%.c
	if [[ ! -d build ]];then mkdir build;fi
	@echo CC $@
	@$(CC) -c $(CFLAGS) $< -o $@

build/%.elf: build/%.o
	@echo LD $@
	@$(CC) $(LDFLAGS) $< -o $@

build/%.bin: build/%.elf
	@echo OBJCOPY $@
	@$(OBJCOPY) -O ihex $^ $@

build/%.uf2: build/%.bin
	@echo BIN2UF2 $@
	@tools/bin2uf2 -i $^ -o $@


size: build/$(TARGET).elf
	@echo size:
	@$(SIZE) -t $^

clean:
	@echo clean
	@-rm -rf build

-include $(wildcard build/*.d)

echo:
	@echo $(OS)

build/json/%.c.json: src/%.c
	mkdir -p $(shell sed -En 's#src/((.*/)*)[^/]+$$#build/json/\1#p' <<< $<)
	clang -c $< -MJ $@ $(CMDFLAG) -o /dev/null

compile_commands.json: $(patsubst src/%,build/json/%.json,$(SRCS))
	$(shell sed -E -e '1s#^#[\n#' -e '$$s#,$$#\n]#' `find build -type f -name "*.json"` > compile_commands.json)

