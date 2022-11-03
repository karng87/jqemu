CC := arm-none-eabi-gcc
LD := arm-none-eabi-ld
AS := arm-none-eabi-as
OBJCOPY := arm-none-eabi-objcopy
OBJDUMP := arm-none-eabi-objdump
PAD_CHECKSUM := ~/Project/rasp/bin/pad_checksum

INCLUDES := -I include

DEFINE := -DPICO_BOARD=\"pico\"
DEFINE += -DPICO_BUILD=1
DEFINE += -DPICO_NO_HARDWARE=0
DEFINE += -DPICO_ON_DEVICE=1

CFLAGS := -mcpu=cortex-m0plus -mthumb -ffunction-sections -fdata-sections
CFLAGS += $(INCLUDES) $(DEFINE)

LIBS +=

ld_script := boot_stage2.ld

LDFLAGS := -mcpu=cortex-m0plus -mthumb
LDFLAGS += -O3 -DNDEBUG
LDFLAGS += -Wl,--build-id=none --specs=nosys.specs -nostartfiles
LDFLAGS += -Wl,--script=$(ld_script)
#LDFLAGS += -Wl,-Map=$(patsubst %,%.map,$@)

target_bs2_default := build/bs2/bs2_default_padded_checksummed.S

SRCS := $(if $(filter Darwin,$(shell uname -s)), \
			$(shell find -E src -regex '.*\.[cS]$$'), \
			$(shell find src -regextype posix-extended -regex '.*\.[cS]$$'))

all: $(target_bs2_default)

build/%.S.o: src/%.S
	@if [[ ! -d $(patsubst src%,build%,$(dir $<)) ]];then mkdir -p $(patsubst src%,build%,$(dir $<)) ;fi
	$(CC) $(CFLAGS) -o $@ -c $<

build/%.c.o: src/%.c
	@if [[ ! -d $(patsubst src%,build%,$(dir $<)) ]];then mkdir -p $(patsubst src%,build%,$(dir $<)) ;fi
	$(CC) -c $(CFLAGS) $< -o $@ 

build/%.o.elf: build/%.o
	@if [[ ! -d $(patsubst src%,build%,$(<D)) ]];then mkdir -p $(patsubst src%,build%,$(<D)) ;fi
	$(CC) $(LDFLAGS) -Wl,-Map=$(patsubst %,%.map,$@) $< -o $@

$(target_bs2_default): build/bs2/bs2_default.bin
	$(PAD_CHECKSUM) -s 0xffffffff $< $@

build/bs2/bs2_default.bin: build/rp2_common/boot_stage2/compile_time_choice.S.o.elf
	@mkdir -p build/bs2
	$(OBJCOPY) -Obinary $< $@
	$(OBJDUMP) -h $< > build/bs2/bs2_default.dis
	$(OBJDUMP) -d $< >> build/bs2/bs2_default.dis


.PHONY: c f e

path := ~/Project/rasp/pico-sdk/src
line := 1
sl:= 1
el:= 20

f: 
	@find $(path) -name "$(pat)" | grep -E --color=always '^/|/|[^/]*$$'

fv: 
	@find $(path) -name "$(pat)" \
		| sed -En '$(line)s#.*#nvim &#p' | sh

fc: 
	@for i in `find ~/Project/rasp/pico-sdk/src -name $(pat)` \
		;do mkdir -p $$(sed -En 's#.*(include|src)(.*)/.*#\1\2#gp' <<< $$i);\
			if [[ $$i =~ .*\.h ]] ;then cp $$i `sed -En 's#.*(include/.*\.h)$$#\1#p' <<< $$i`;tree include \
			;elif [[ $$i =~ .*\.[cS] ]] ;then cp $$i `sed -En 's#.*(src/.*\.[cS])$$#\1#p' <<< $$i`; tree src \
			;else cp $$i .; tree . \
			;fi \
		;done
g:
	@grep --color=always -ERHn '$(pat)' ~/Project/rasp/pico-sdk/src

gv:
	@grep --color=always -ERHn $(pat) ~/Project/rasp/pico-sdk/src \
		| sed -En -e '$(line)s#([^:]+):([0-9]+):.*#nvim +\2 \1#p' | sh 

echo:
	sed -En '1p' <<< `grep --color=always -ERn $(pat) ~/Project/rasp/pico-sdk/src`

clean:
	rm -rf build
