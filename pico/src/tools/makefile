BDIR := $(shell pwd | sed -En 's;src;build;p')
TARGETS := $(shell find `pwd` -name '*.[cs]' | sed -En -e 's;src;build;' -e 's;.*;&.out;p')
.PHONY: echo all clean vi tree 
all: $(TARGETS)

$(BDIR)/%.c.out: %.c
	[[ ! -d $(@D) ]]; mkdir -p $(@D)
	gcc $< -o$@

echo:
	@echo $(TARGETS)

tree:
	@tree $(BDIR)

vi:
	@nvim $(BDIR)

clean:
	@rm -rf $(BDIR)/*

