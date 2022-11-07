## cmake -Dmake_verbose_makefile:bool=1 -Dcmake_rule_messages:bool=0 
## make VERBOSE=1 -no-print-directory

MCU := -mcpu=cortex-m0plus -mthumb

CC := arm-none-eabi-gcc
LD := arm-none-eabi-ld
AS := arm-none-eabi-as

OBJCOPY := arm-none-eabi-objcopy
OBJDUMP := arm-none-eabi-objdump
PAD_CHECKSUM := ~/Project/rasp/bin/pad_checksum

INCLUDES := -I include

ASFLAGS := $(MCU) -g

CFLAGS +=  -ffreestanding -g -O0 -std=gnu11 -fpic
CFLAGS += $(MCU) $(INCLUDES) $(DEFINE)

ld_crt0 := Crt0.ld
LDFLAGS = -nostdlib -T$(ld_crt0)

SRCS := $(if $(filter Darwin,$(shell uname -s)), \
			$(shell find -E src -regex '.*\.[cS]$$'), \
			$(shell find src -regextype posix-extended -regex '.*\.[cS]$$'))

BOOT2_SRC  := $(filter %boot2.S,$(SRCS))
BOOT2_CRC := $(patsubst src/%.S,build/%_crc.S.o.elf.bin.S,$(BOOT2_SRC))

CRT0_SRC  := $(filter %Crt0.S,$(SRCS))
CRT0_OBJ := $(patsubst src/%,build/%.o,$(CRT0_SRC))


TARGET := led25
TARGET := main

DEPS :=  $(addsuffix .o,$(BOOT2_CRC)) \
		 $(CRT0_OBJ) \
		 $(patsubst %,build/%.c.o,$(TARGET))

all: boot_stage2 build/$(TARGET).uf2

boot_stage2:
	make -C src/boot/stage2

build/%.c.o: src/%.c
	@if [[ ! -d $(patsubst src%,build%,$(dir $<)) ]];then mkdir -p $(patsubst src%,build%,$(dir $<)) ;fi
	$(CC) $(CFLAGS) -c $< -o$@ 

build/%.S.o: src/%.S
	@if [[ ! -d $(patsubst src%,build%,$(dir $<)) ]];then mkdir -p $(patsubst src%,build%,$(dir $<)) ;fi
	$(AS) $(ASFLAGS) $< -o$@ 

build/%.S.o: build/%.S
	@if [[ ! -d $(patsubst src%,build%,$(dir $<)) ]];then mkdir -p $(patsubst src%,build%,$(dir $<)) ;fi
	$(AS) $(ASFLAGS) $< -o$@ 

build/%.o.elf: build/%.o
	@if [[ ! -d $(patsubst src%,build%,$(<D)) ]];then mkdir -p $(patsubst src%,build%,$(<D)) ;fi
	$(LD) $(LDFLAGS) $< -o$@

build/%.elf.bin: build/%.elf
	$(OBJCOPY) -Obinary $< $@
	$(OBJDUMP) -h $< > $(patsubst %,%.dis,$<)
	$(OBJDUMP) -d $< >> $(patsubst %,%.dis,$<)


build/$(TARGET): $(DEPS)
	$(LD) $(LDFLAGS) $^ -o$@

build/$(TARGET).uf2 : build/$(TARGET)
	elf2uf2 $< $@

.PHONY: f fv fc g gv vi

path := ~/Project/rasp/pico-sdk/src \
		src \
		build \
		~/Project/rasp/pico-sdk

idx := 1 # line number

port := $(if $(filter Darwin,$(shell uname -s)),/dev/$(shell ls /dev | grep 'cu\.usb') ,/dev/ttyACM0)

screen:
	screen $(port)
	# screen -ls
	# screen -r ...; <c-a,c>

radare2:
	radare2 -w arm -b 16 $(word 1, $(shell find build/ -name '*.elf'))
	# ? 0xf00
	# q!

f: 
	@find $(word $(idx),$(path)) -name "$(pat)" | grep -E -n --color=always '^/|/|[^/]*$$'

fv: 
	@find $(path) -name "$(pat)" \
		| sed -En '$(idx)s#.*#nvim &#p' | sh

fc: 
	@for i in `find ~/Project/rasp/pico-sdk/src -name $(pat)` \
		;do if [[ -z $$i ]] ;then continue;fi; \
			mkdir -p $$(sed -En 's#.*(include|src)(.*)/.*#\1\2#gp' <<< $$i);\
			if [[ $$i =~ .*\.h ]] ;then cp $$i `sed -En 's#.*(include/.*\.h)$$#\1#p' <<< $$i`;tree include \
			;elif [[ $$i =~ .*\.[cS] ]] ;then cp $$i `sed -En 's#.*(src/.*\.[cS])$$#\1#p' <<< $$i`; tree src \
			;else cp $$i .; tree . \
			;fi \
		;done
g:
	@grep --color=always -ERHn '$(pat)' $(word $(idx), $(path))

gv:
	@grep -ERHn $(pat) $(word $(idx),$(path)) \
		| sed -En -e '$(idx)s#([^:]+):([0-9]+):.*#nvim +\2 \1#p' | sh 

vi:
	nvim $(filter %$(addsuffix .c,$(TARGET)), $(SRCS))

crt: 
	nvim $(CRT0_SRC)

b2:
	nvim $(BOOT2_SRC)
echo:
	echo $(filter a b c, "xaz bcd")

	#sed -En '1p' <<< `grep --color=always -ERn $(pat) ~/Project/rasp/pico-sdk/src`
ld:
	nvim $(ld_script)
clean:
	rm -rf build
