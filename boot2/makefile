
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

ASFLAGS :=

INCLUDES += -I include
LIBS += -L lib/build -l boot2
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

LDFLAGS += -mcpu=cortex-m0plus -mthumb
# if clang 
#LDFLAGS += -nostdlib
# else
LDFLAGS += --specs=nosys.specs -nostartfiles
LDFLAGS += -T src/boot_stage2.ld
LDFLAGS += -Wl,-Map=build/$(TARGET).map


SRCS = $(shell find src -regextype posix-extended -regex "boot.*.[cS]$$")

CRT0 += startup_rp2040
OBJS += 

TARGET = boot2_w25q080

all: build/$(TARGET)_pad_checksum.o 

build/%.o: src/%.S
	if [[ ! -d $(patsubst src%,build%,$(<D)) ]];then mkdir -p $(patsubst src%,build%,$(<D));fi
	$(CC) -c $(CFLAGS) $< -o $@

build/%.o: src/%.c
	if [[ ! -d $(patsubst src%,build%,$(<D)) ]];then mkdir -p $(patsubst src%,build%,$(<D));fi
	$(CC) -M -MP -MT $(patsubst src/%.c,build/%.o,$<) -MF $(patsubst src/%.c,build/%.d,$<) $(CFLAGS) $< -o $@

build/%.bin: build/%.o
	$(OBJCOPY) -Obinary $< $@

build/$(TARGET)_pad_checksum.s : build/$(TARGET).bin
	pad_checksum -s 0xffff_ffff $< $@

build/$(TARGET)_pad_checksum.o : build/$(TARGET)_pad_checksum.s
	$(CC) -c $(CFLAGS) $< -o $@

#build/$(TARGET).elf: build/boot2_w25q080.o build/$(TARGET).o
#	$(CC) $(LDFLAGS) $< -o $@


#build/%.o: src/asm/%.S
#	if [[ ! -d $(patsubst src/%,build/%,$(<D)) ]];then mkdir -p $(patsubst src/%,build/%,$(<D));fi
#	$(AS) $(ASFLAGS) $< -o $@




#build/$(TARGET).elf : build/pad_checksum.o
#	$(LD) --section-start .boot2=0x10000000 $< -o $@

#build/%.uf2: build/%.elf
#	tools/build/bin2uf2 -i $^ -o $@

size: build/$(TARGET)_pad_checksum.o
	$(SIZE) -t $^

clean:
	rm -rf build

-include $(wildcardbuild/*.d)

echo:
	@echo $(OS)

build/json/%.c.json: src/%.c
	mkdir -p $(shell sed -En 's#src/((.*/)*)[^/]+$$#build/json/\1#p' <<< $<)
	clang -c $< -MJ $@ $(LLVMFLAG) -o /dev/null

compile_commands.json: $(patsubst src/%,build/json/%.json,$(SRCS))
	$(shell sed -E -e '1s#^#[\n#' -e '$$s#,$$#\n]#' `find build -type f -name "*.json"` > compile_commands.json)

