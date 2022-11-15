SHELL := /bin/bash

CC := arm-none-eabi-gcc
LD := arm-none-eabi-ld
AS := arm-none-eabi-as
OBJCOPY := arm-none-eabi-objcopy
OBJDUMP := arm-none-eabi-objdump
PAD_CHECKSUM := ${RASP}/bin/pad_checksum

MCU := -mcpu=cortex-m0plus -mthumb

BUILD_DIR :=$(shell sed -En 's/src/build/p' <<< `pwd`)

LD_SCRIPT := boot2.ld

INCLUDES := $(shell pwd | sed -En 's/(.*)\/src\/.*/-I \1\/include/p')

D := -DPICO_BOARD=\"pico\"
D += -DPICO_BUILD=1
D += -DPICO_NO_HARDWARE=0
D += -DPICO_ON_DEVICE=1

### -ffunction-sections -fdata-sections
### 	each symbol has a section, function == .text.<func> ;  data == .data.<var>
### 		e.g) .text.put32 .text.pin5 .bss.cpuirq
#CFLAGS +=  -ffunction-sections -fdata-sections
CFLAGS += $(MCU) $(INCLUDES) $(D)


LDFLAGS += -O3 -DNDEBUG
LDFLAGS += -Wl,--build-id=none --specs=nosys.specs -nostartfiles
LDFLAGS += -Wl,--script=$(LD_SCRIPT)
### --specs=nosys.specs
### 	newlib does not by default provide implementations for the functions
### 		that make only sense on a system with a console and an hard drive,
### 		basically system calls such as read/write/open/close/...
### 		if don't need to those functions,
### 	using --specs=nosys.specs: make the app link with default
### 		when called, the linker will return an error code

#LDFLAGS += -Wl,-Map=$(patsubst %,%.map,$@)

SRCS  := boot2.S
TARGET := $(patsubst %.S,$(BUILD_DIR)/%.S.o.elf.bin.S,$(SRCS))

all: $(BUILD_DIR)/boot2.S.o

$(BUILD_DIR)/%.c.o: %.c
	@if [[ ! -d $(@D) ]];then mkdir -p $(@D) ;fi
	$(CC) -c $(CFLAGS) $< -o $@ 

$(BUILD_DIR)/%.S.o: %.S
	@if [[ ! -d $(@D) ]];then mkdir -p $(@D) ;fi
	$(CC) $(CFLAGS) -o $@ -c $<

$(BUILD_DIR)/%.S.o: $(BUILD_DIR)/%.S
	$(CC) $(CFLAGS) -o $@ -c $<

$(BUILD_DIR)/%.o.elf: $(BUILD_DIR)/%.o
	$(CC) $(LDFLAGS) -Wl,-Map=$(patsubst %,%.map,$<) $< -o $@

$(BUILD_DIR)/%.elf.bin: $(BUILD_DIR)/%.elf
	$(OBJCOPY) -Obinary $< $@
	$(OBJDUMP) -h $< > $(patsubst %,%.dis,$<)
	$(OBJDUMP) -d $< >> $(patsubst %,%.dis,$<)

$(TARGET): $(patsubst %,$(BUILD_DIR)/%.o.elf.bin,$(SRCS))
	$(PAD_CHECKSUM) -s 0xffffffff $< $@


.PHONY: f fv fc g gv vi

path := ~/Project/rasp/pico-sdk/src \
		src \
		build \
		~/Project/rasp/pico-sdk

idx := 1 # line number

port := $(if \
		$(filter Darwin,$(shell uname -s))\
		,/dev/$(shell ls /dev | grep 'cu\.usb')\
		,/dev/ttyACM0)

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
	@find $(word $(idx),$(path)) -name "$(pat)" \
		| sed -En '$(idx)s#.*#nvim &#p' | sh

fc: 
	@for i in `find $(word $(idx),$(path)) -name $(pat)` \
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
	nvim $(SRC)

tree:
	tree $(BUILD_DIR)
echo:
	echo $(BUILD_DIR)

	#sed -En '1p' <<< `grep --color=always -ERn $(pat) ~/Project/rasp/pico-sdk/src`
ld:
	nvim $(ld_script)

clean:
	rm -rf $(BUILD_DIR)
