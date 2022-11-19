BDIR := $(shell pwd | sed -E 's%src%build%')

ARM := arm-none-eabi
ARCH := -mcpu=cortex-m0plus -mthumb
SCRIPT := memmap_rp2040.ld
tool_srcs := bin2uf2.c
TOOLS := $(shell \
		 	for i in $(tool_srcs) \
		 	;do find `pwd` -name $$i \
				| sed -En -e 's;src;build;' -e 's;.*;&.out;p' \
			;done)
AOPT += $(ARCH)

COPT += -W -Wall -std=gnu11 -Os
COPT += -ffreestanding
COPT += -fno-diagnostics-show-caret
COPT += -fdata-sections -ffunction-sections
COPT += -funsigned-char -funsigned-bitfields
COPT += $(ARCH)
COPT += -MD -MP -MT $@ -MF $@.d
INCLUDES += -I includes
DEFINES += 
COPT += $(INCLUDES) $(DEFINES)


LOPT += $(ARCH)
LOPT += -nostdlib -nostartfiles
LOPT += -Wl,--gc-sections
LOPT += -Wl,--script=$(SCRIPT)
LOPT += -Wl,-Map=$@.map

SRCS := \
		startup_rp2040.c\
		main.c

OBJS += $(addprefix $(BDIR)/,$(patsubst %,%.o,$(SRCS)))

BIN += main
TARGETS := $(shell\
		sed -E 's;.*;echo $(BDIR)/&.elf{,.hex,.bin{,.uf2}};e' <<< $(BIN))

.PHONY: all tools tree clean echo vic vid
all: tools $(TARGETS)

tools:
	make -C tools $(TOOLS)

$(BDIR)/%.c.o: %.c
	if [[ ! -d $(@D) ]];then mkdir -p $(@D); fi
	$(ARM)-gcc $(COPT) -c $< -o$@

$(BDIR)/%.s.o: %.s
	if [[ ! -d $(@D) ]];then mkdir -p $(@D); fi
	$(ARM)-as $(AOPT) -c $< -o$@

$(filter %.elf,$(TARGETS)): $(OBJS)
	if [[ ! -d $(@D) ]];then mkdir -p $(@D); fi
	$(ARM)-gcc $(LOPT) $^ -o$@

$(filter %.bin,$(TARGETS)): $(filter %.elf,$(TARGETS))
	if [[ ! -d $(@D) ]];then mkdir -p $(@D); fi
	$(ARM)-objcopy -O binary $^ $@

$(filter %.hex,$(TARGETS)): $(filter %.elf,$(TARGETS))
	if [[ ! -d $(@D) ]];then mkdir -p $(@D); fi
	$(ARM)-objcopy -O ihex $^ $@

$(filter %.uf2,$(TARGETS)): $(filter %.elf,$(TARGETS))
	if [[ ! -d $(@D) ]];then mkdir -p $(@D); fi
	$(filter %bin2uf2.c.out,$(TOOLS)) -i $^ -o $@

dev :=$(if $(filter Linux,$(shell uname -s)) \
	       ,$(shell lsblk | sed -En '/^└─.*t *$$/{s/[^a-z]*([a-z1]*).*/\/dev\/\1/p}') \
		   ,/Volumes/RPI-RP2)

flash: all
	@if [[ "$(dev)" =~ "/dev" && $(shell uname -s) =~ Linux ]];\
		then if [[ -n `find /mnt -empty` ]]; 	\
				then sudo mount $(dev) /mnt; 	\
			 fi; 								\
			 sudo cp $(filter %uf2,$(TARGETS)) /mnt;\
	elif [[ $(shell uname -s) =~ Darwin && "$(dev)" =~ "RPI-RP2" ]]; \
		then cp $(filter %uf2,$(TARGETS)) $(dev);\
	else echo "NO flash!";\
	fi

bdir:
	@echo $(BDIR)

vid:
	nvim `find $(BDIR) -name '*.d'`
tree:
	tree $(BDIR)

clean:
	rm -rf $(BDIR)/*

run:
	$(word 1,$(TARGETS)) $(a1) $(a2)

echo:
	@echo $(OBJS)
	@echo $(TARGETS)

mkfiles := $(shell find `git rev-parse --show-toplevel` -name '*.mk')
include $(filter %grep.mk,$(mkfiles))
include $(wildcard $(BDIR)/*.d)
