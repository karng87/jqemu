## cmake -Dmake_verbose_makefile:bool=1 -Dcmake_rule_messages:bool=0 
## make VERBOSE=1 -no-print-directory
CC := arm-none-eabi-gcc
LD := arm-none-eabi-ld
AS := arm-none-eabi-as
OBJCOPY := arm-none-eabi-objcopy
OBJDUMP := arm-none-eabi-objdump

MCU := -mcpu=cortex-m0plus -mthumb

BASE_DIR := $(shell sed -En 's#/src.*##p' <<< `pwd`)
BUILD_DIR := $(shell sed -En 's#src#build#p' <<< `pwd`)

SRCS  := Crt0.S
OBJS := $(patsubst %,$(BUILD_DIR)/%.o,$(SRCS))

INCLUDES := $(BASE_DIR)/include
D :=

CFLAGS := -ffreestanding -g -O0
CFLAGS += $(MCU) $(D)

all: $(OBJS)

$(BUILD_DIR)/%.c.o: %.c
	@if [[ ! -d $(BUILD_DIR) ]];then mkdir -p $(BUILD_DIR) ;fi
	$(CC) -c $(CFLAGS) $< -o $@ 

$(BUILD_DIR)/%.S.o: %.S
	@if [[ ! -d $(BUILD_DIR) ]];then mkdir -p $(BUILD_DIR) ;fi
	$(CC) $(CFLAGS) -o $@ -c $<


.PHONY: f fv fc g gv vi

path := ~/Project/rasp/pico-sdk/src \
		src \
		build \
		~/Project/rasp/pico-sdk

idx := 1 # line number

port := $(if $(filter Darwin,$(shell uname -s)),/dev/$(shell ls /dev | grep 'cu\.usb'),/dev/ttyACM0)

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
	nvim $(word 1,$(SRCS))

echo:
	@echo $(INCLUDES)
	#sed -En '1p' <<< `grep --color=always -ERn $(pat) ~/Project/rasp/pico-sdk/src`

ld:
	nvim $(ld_script)

clean:
	@rm $(OBJS)
