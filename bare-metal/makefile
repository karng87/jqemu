

SRCS := $(shell find src -name '*.c')
OBJS := $(patsubst src/%.c,build/%,$(SRCS))
TARGET := hello

CFLAGS := -ggdb -Wall -Wextra \
		  -M -MP -MT build/$(patsubst src/%.c,build/%.o,$<) -MF build/$(patsubst src/%.c,build/%.d,$<)

LDFLAGS = -static 

all: $(shell for obj in $(OBJS) ; do for ext in i s o bin; do echo "$${obj}.$${ext}";done ;done)


build/%.i: src/%.c
	if [[ ! -d $(patsubst src%,build%,$(<D)) ]];then mkdir -p $(patsubst src%,build%,$(<D));fi
	$(CC) -E $< -o $@

build/%.s: build/%.i
	$(CC) -S $< -o $@

build/%.o: build/%.s
	$(CC) -c -Wa,-a=$(basename $@).lst $(CFLAGS) $< -o $@
		  

build/%.bin: build/%.o
	$(CC) -Wl,-Map=$(basename $@).map $(LDFLAGS) $< -o $@

run: all
	@build/$(TARGET).bin
		
clean:
	@rm -rf build
