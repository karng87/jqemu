## cmake -Dmake_verbose_makefile:bool=1 -Dcmake_rule_messages:bool=0 
## make VERBOSE=1 -no-print-directory
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

CFLAGS := -Wall -Werror
CFLAGS += -mcpu=cortex-m0plus -mthumb -ffunction-sections -fdata-sections
CFLAGS += $(INCLUDES) $(DEFINE)

LIBS +=

ld_script := boot_stage2.ld

LDFLAGS := -mcpu=cortex-m0plus -mthumb
LDFLAGS += -O3 -DNDEBUG
LDFLAGS += -Wl,--build-id=none --specs=nosys.specs -nostartfiles
### --specs=nosys.specs
### 	newlib does not by default provide implementations for the functions
### 		that make only sense on a system with a console and an hard drive,
### 		basically system calls such as read/write/open/close/...
### 		if don't need to those functions,
### 	using --specs=nosys.specs: make the app link with default
### 		when called, the linker will return an error code

LDFLAGS += -Wl,--script=$(ld_script)
#LDFLAGS += -Wl,-Map=$(patsubst %,%.map,$@)

SRCS := $(if $(filter Darwin,$(shell uname -s)), \
			$(shell find -E src -regex '.*\.[cS]$$'), \
			$(shell find src -regextype posix-extended -regex '.*\.[cS]$$'))

BS2_SRC  := $(filter %bs2_default.S,$(SRCS))
TARGET_BS2 := $(patsubst src/%.S,build/%_checksummed.S.o.elf.S,$(BS2_SRC))

all: $(TARGET_BS2)
build/%.c.o: src/%.c
	@if [[ ! -d $(patsubst src%,build%,$(dir $<)) ]];then mkdir -p $(patsubst src%,build%,$(dir $<)) ;fi
	$(CC) -c $(CFLAGS) $< -o $@ 

build/%.S.o: src/%.S
	@if [[ ! -d $(patsubst src%,build%,$(dir $<)) ]];then mkdir -p $(patsubst src%,build%,$(dir $<)) ;fi
	$(CC) $(CFLAGS) -o $@ -c $<


build/%.o.elf: build/%.o
	@if [[ ! -d $(patsubst src%,build%,$(<D)) ]];then mkdir -p $(patsubst src%,build%,$(<D)) ;fi
	$(CC) $(LDFLAGS) -Wl,-Map=$(patsubst %,%.map,$<) $< -o $@

build/%.elf.bin: build/%.elf
	@mkdir -p build/bs2
	$(OBJCOPY) -Obinary $< $@
	$(OBJDUMP) -h $< > $(patsubst %,%.dis,$<)
	$(OBJDUMP) -d $< >> $(patsubst %,%.dis,$<)

build/%_checksummed.S.o.elf.S: build/%.S.o.elf.bin
	$(PAD_CHECKSUM) -s 0xffffffff $< $@

.PHONY: f fv fc g gv vi

path := ~/Project/rasp/pico-sdk ~/Project/rasp/pico-sdk/src build-cmake build src
ln := 1 # line number
sln:= 1  # start line number
eln:= 20 # end line number

f: 
	@find $(word $(ln),$(path)) -name "$(pat)" | grep -E -n --color=always '^/|/|[^/]*$$'

fv: 
	@find $(path) -name "$(pat)" \
		| sed -En '$(ln)s#.*#nvim &#p' | sh

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
	@grep --color=always -ERHn '$(pat)' ~/Project/rasp/pico-sdk/src

gv:
	@grep -ERHn $(pat) $(path) \
		| sed -En -e '$(ln)s#([^:]+):([0-9]+):.*#nvim +\2 \1#p' | sh 

vi: 
	nvim $(BS2_SRC)

echo:
	echo $(patsubst src/%,build/%.o.elf,$(bs2_default_src))

	#sed -En '1p' <<< `grep --color=always -ERn $(pat) ~/Project/rasp/pico-sdk/src`
ld:
	nvim $(ld_script)
clean:
	rm -rf build
