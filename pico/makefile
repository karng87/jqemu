OS := $(shell uname -s)
CC := arm-none-eabi-gcc
LD := arm-none-eabi-ld
AS := arm-none-eabi-as
OBJCOPY := arm-none-eabi-objcopy
OBJDUMP := arm-none-eabi-objdump

INCLUDES := -I include

DEFINE := -DPICO_BOARD=\"pico\"
DEFINE += -DPICO_BUILD=1
DEFINE += -DPICO_NO_HARDWARE=0
DEFINE += -DPICO_ON_DEVICE=1

CFLAGS := -mcpu=cortex-m0plus -mthumb -ffunction-sections -fdata-sections
CFLAGS += $(INCLUDES) $(DEFINE)

LIBS +=

LDFLAGS := -mcpu=cortex-m0plus -mthumb
LDFLAGS += -O3 -DNDEBUG
LDFLAGS += -Wl,--build-id=none --specs=nosys.specs -nostartfiles
LDFLAGS += -Wl,--script=boot_stage2.ld
LDFLAGS += -Wl,-Map=bs2_default.elf.map

SRCS := $(shell find src -regextype posix-extended -regex '.*\.[cS]$$')

all: $(patsubst src/%,build/%.o,$(SRCS))

build/%.o: $(SRCS)
	@if [[ ! -d $(patsubst src%,build%,$(<D)) ]];then mkdir -p $(patsubst src%,build%,$(<D)) ;fi
	$(CC) $(CFLAGS) -o $@ -c $<

build/%.o: src/%.c
	@if [[ ! -d $(patsubst src%,build%,$(<D)) ]];then mkdir -p $(patsubst src%,build%,$(<D)) ;fi
	$(CC) -c $(CFLAGS) $< -o $@ 

build/%.elf: src/%.S
	@if [[ ! -d $(patsubst src%,build%,$(<D)) ]];then mkdir -p $(patsubst src%,build%,$(<D)) ;fi
	$(CC) $(LDFLAGS) $< $@

.PHONY: c f
f: 
	@find ~/Project/rasp/pico-sdk/src -name $F

c: 
	@for i in `find ~/Project/rasp/pico-sdk/src -name $F` \
		;do mkdir -p $$(sed -En 's#.*(include|src)(.*)/.*#\1\2#gp' <<< $$i);\
			if [[ $$i =~ .*\.h ]] ;then cp $$i `sed -En 's#.*(include/.*\.h)$$#\1#p' <<< $$i`;tree include; \
			elif [[ $$i =~ .*\.[cS] ]] ;then cp $$i `sed -En 's#.*(src/.*\.[cS])$$#\1#p' <<< $$i`; tree src; \
			else cp $$i .; tree .;\
			fi \
		;done

echo:
	echo $(SRCS)

clean:
	rm -rf build
