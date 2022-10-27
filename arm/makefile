
OS = $(shell uname -s)

MCPU :=-mcpu=cortex-m4 -mthumb 
F_CPU :=

CC := arm-none-eabi-gcc
AS := arm-none-eabi-as
LD := arm-none-eabi-ld
OBJCOPY := arm-none-eabi-objcopy
OBJDUMP := arm-none-eabi-objdump

LDSCRIPT := -T

TARGET := test
SRC_C := $(shell find src -name "*.c")
SRC_S := $(shell find src -name "*.S")
SRC_P := $(shell find src -name "*.cpp")

DEPS :=
CFLAG := $(MCPU) \
		 -M -MP -MT $(patsubst src/%,build/%.o,$<) -MF $(patsubst src/%.c,build/%.d,$<)

LDFLAG := $(MCPU)

.PHONY: all clean echo

all: build/$(TARGET).o

build/%.o: src/%.c
	if [ ! -d $(shell sed -En 's#src/((.*/)*)[^/]+#build/\1#p' <<< $<) ] ; then mkdir $(shell sed -En 's#src/((.*/)*)[^/]+#build/\1#p' <<< $<); fi
	$(CC) -c $(CFLAG) $< -o $@

build/%.s: src/%.c
	if [ ! -d $(shell sed -En 's#src/((.*/)*)[^/]+#build/\1#p' <<< $<) ] ; then mkdir $(shell sed -En 's#src/((.*/)*)[^/]+#build/\1#p' <<< $<); fi
	$(CC) -S $(MCPU) $< -o $@

build/%.elf: build/%.o
	$(CC) $(LDFLAG) $< -o $@ 

build/%.ihex: build/%.elf
	$(OBJCOPY) $< $@

build/%.S.o: src/%.S
	if [ ! -d $(shell sed -En 's#src/(.*/)*#build/\1#p' <<< $(<D)) ] ; then mkdir $(shell sed -En 's#src/(.*/)*#build/\1#p' <<< $(<D)); fi
	$(AS) $(ASFLAG) $< -o $@

build/%.S.elf: build/%.S.o
	$(LD) $(LDFLAG) $< -o $@

-include $(shell find build -name "*.d")

dumph: build/$(TARGET).o
	$(OBJDUMP) --headers $<

clean:
	if [ -n $(shell find build -type f -name '*') ]; then rm -rf build; fi

echo:
	echo $(shell sed -En 's#src/(.*/)*#build/\1#p' <<< "src/")
