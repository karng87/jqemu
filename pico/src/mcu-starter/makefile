BDIR := $(shell pwd | sed -E 's%src%build%')
ARM := arm-none-eabi
ARCH := -mcpu=cortex-m0plus -mthumb

COPT += -W -Wall -std=gnu11 -Os
COPT += -ffreestanding
COPT += -fno-diagnotics-show-caret
COPT += -fdata-sections -ffunction-sections
COPT += -funsigned-char -funsigned-bitfields
COPT += $(ARCH)
COPT += -MD -MP -MT $(BDIR)/$(*F).o -MF $(BDIR)/$(@F).d

SRCS := bin2uf2.c
TARGETS := $(shell\
		for i in $(SRCS)\
		;do find `pwd` -name $(SRCS)\
			| sed -En -e 's;src;build;' -e 's;.*;&.out;p'\
		;done)

all: $(TARGETS)

$(BDIR)/%.c.out: %.c
	if [[ ! -d $(@D) ]];then mkdir -p $(@D); fi
	gcc -W -Wall -Wextra -O3 -std=c2x $< -o$@

tree:
	tree $(BDIR)

clean:
	rm -rf $(BDIR)/*

run:
	$(word 1,$(TARGETS)) $(a1) $(a2)

echo:
	echo $(BDIR)
