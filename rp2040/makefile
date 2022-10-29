
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
MCU=cortex-m0plus

INCLUDES += -I include
CFLAGS += -W -Wall --std=gnu11 -O0
CFLAGS += -mcpu=$(MCU) -mthumb
CFLAGS += $(INCLUDES)

LLVMFLAG += $(CFLAGS)

# -M : auto generate depency files for GNU Make  
#         hello.o: hello.c f:/usr/include/std.h ...
# -MM : exclusive System header
# -MP : set PHONY(없을때 오류 제거)
# -MT : rename 
# -MF : generate file
# -MD : -M -MF
CFLAGS += -M -MP -MT build/$(patsubst src/%.c,%.o,$<) -MF build/$(patsubst src/%.c,%.d,$<)


LDFLAGS += -mcpu=cortex-m0plus -mthumb
LDFLAGS += -nostdlib
LDFLAGS += -T linker/rp2040.ld
LDFLAGS += -Wl,-Map=build/$(TARGET).map


SRCS = $(shell find src -name "*.c")

CRT0 += startup_rp2040
OBJS +=




TARGET = led25

all:$(patsubst %,build/%.o,$(CRT0)) \
	$(patsubst %,build/%.o,$(OBJS)) \
	$(patsubst %,build/%.o,$(TARGET)) \
	$(patsubst %,build/%.elf,$(TARGET)) \
	$(patsubst %,build/%.bin,$(TARGET)) \
	$(patsubst %,build/%.uf2,$(TARGET))

build/%.o: src/%.c
	if [[ ! -d build ]];then mkdir build;fi
	@echo CC $@
	@$(CC) -c $(CFLAGS) $< -o $@

build/%.elf: build/%.o
	@echo LD $@
	@$(CC) $(LDFLAGS) $^ -o $@

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
	@rm -rf build

-include $(wildcard build/*.d)

echo:
	@echo $(OS)

build/json/%.c.json: src/%.c
	mkdir -p $(shell sed -En 's#src/((.*/)*)[^/]+$$#build/json/\1#p' <<< $<)
	clang -c $< -MJ $@ $(LLVMFLAG) -o /dev/null

compile_commands.json: $(patsubst src/%,build/json/%.json,$(SRCS))
	$(shell sed -E -e '1s#^#[\n#' -e '$$s#,$$#\n]#' `find build -type f -name "*.json"` > compile_commands.json)

