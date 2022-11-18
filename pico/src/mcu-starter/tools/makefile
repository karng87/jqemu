BDIR := $(shell pwd | sed -E 's%src%build%')
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
