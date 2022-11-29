#------------------------------------------
# freestanding: https://gcc.gnu.org/onlinedocs/gcc/Standards.html
# 	by default 
# 	gcc will act as the compiler for a hosted implementation
# 		defining __STDC_HOSTED__ as 1
# 		preassuming that when the names of "ISO C" "functions" aer sued,
# 		they have the semantics defined int the standard
# 	use the option -ffreestanding, to make it act as a conforming freestanding implementaion
# 		for a freestanding environment
# 		it will define __STDC_HOSTED__ to 0
#-------------------------------------------
#------------------------------
# -nostdlib https://gcc.gnu.org/onlinedocs/gcc-12.2.0/gcc/Link-Options.html#Link-Options
# 	Do not use the standard system 
# 		"startup" files or "libraries" when linking.
# 	No startup files and only the libraries you specify are passed to the linker,
# 		and options specifying linkage of the system libraries, such as -static-libgcc or -shared-libgcc,
# 			are ignored.
# 
# 	The compiler may 
# 		generate calls to memcmp, memset, memcpy and memmove.
# 	These entries 
# 		are usually resolved(solve:분해하다,resolve:결합하다) by entries in libc.
# 	These entry points
# 		should be supplied through some other mechanism when this option is specified.
# 
# 	One of the standard libraries bypassed(피해가다) by -nostdlib and -nodefaultlibs 
# 		is "libgcc.a", a library of internal subroutines
# 			which GCC uses to overcome(극복하다) shortcomings(단점)
# 				of particular machines, or 
# 			special needs for some languages.
# 		In most cases,
# 			you need libgcc.a
# 			even when you want to avoid other standard libraries. 
# 		In other words, when you specify -nostdlib or -nodefaultlibs
# 			you should usually specify -lgcc as well.
# 		This ensures that you have no unresolved references to internal GCC library subroutines.
# 	(An example of such an internal subroutine is __main,
# 		used to ensure C++ constructors are called;
# 			see collect2 in GNU Compiler Collection (GCC) Internals.)
#-------------------------------------------
BDIR := $(shell pwd | sed -En 's;src;build;p')

target := led25.c
deps := $(target)

target := notmain.c
target := notmain_macro.c
deps := $(target) startup.s

target := notmain_macro.c
deps := $(target)

tool := bin2uf2.c

tools_dir := $(shell pwd | sed -En 's,(.*src)/.*,\1/tools,p')
tools_srcs := $(shell find $(tools_dir) -name '*.[cs]') 
tools_src := $(filter %$(tool),$(tools_srcs))
tools_bin2uf2 := $(shell sed -En 's,(.*)/src/(.*),\1/build/\2.out,p' <<< $(tools_src))

TARGETS := $(shell echo $(shell \
		find `pwd` -name '$(target)' \
		| sed -E -e 's%src%build%' -e 's;.*;echo &.o{,.elf{,.bin{,.uf2}}};e'))

DEPS :=  $(shell \
		for i in $(deps) \
		;do find `pwd` -name $$i | sed -En -e 's%src%build%' -e 's%.*%&.o%p' \
		;done)

defines := flash

ld_scripts := $(shell find `pwd` -name '*.ld')

DEFINEs := -D$(shell sed -En 's%.*%\U&%p' <<< $(defines))
LD_SCRIPT := $(filter %sram.ld,$(ld_scripts)) 

OS := $(shell uname -s)
ARM := arm-none-eabi
ARCH := -mcpu=cortex-m0plus

ASFLAGS := --warn --fatal-warnings $(ARCH)

LDFLAGS += -nostdlib 
LDFLAGS += -T $(LD_SCRIPT)

CFLAGS += -W -Wall -std=gnu11 -Os
CFLAGS += -ffreestanding
CFLAGS += -fno-diagnostics-show-caret
CFLAGS += -fdata-sections -ffunction-sections
CFLAGS += -funsigned-char -funsigned-bitfields
CFLAGS += $(ARCH)
CFLAGS += -MD -MP -MT $@ -MF $@.d
CFLAGS += $(DEFINES)

LDCFLAGS += -nostdlib 
LDCFLAGS += -Wl,--gc-sections
LDCFLAGS += -T $(LD_SCRIPT)

.PHONY: tools echo clear flash
all : tools $(TARGETS)

tools:
	make -C $(tools_dir)

$(filter %uf2,$(TARGETS)): $(filter %bin,$(TARGETS))
	$(tools_bin2uf2) $< $@

$(filter %bin,$(TARGETS)): $(filter %elf,$(TARGETS))
	$(ARM)-objcopy -O binary $^ $@

$(filter %elf,$(TARGETS)): $(DEPS)
	$(ARM)-ld $(LDFLAGS)  $^ -o$@
	$(ARM)-objdump -D $@ > $@.lst

$(BDIR)/%.s.o: %.s
	@if [[ ! -d $(@D) ]]; then mkdir -p $(@D);fi
	$(ARM)-as $(ASFLAGS) $< -o $@ 

$(BDIR)/%.c.o: %.c
	@if [[ ! -d $(@D) ]]; then mkdir -p $(@D);fi
	$(ARM)-gcc -c $(CFLAGS) $< -o$@ 

dev :=$(if $(filter Linux,$(OS)) \
	       ,$(shell lsblk | sed -En '/^└─.*t *$$/{s/[^a-z]*([a-z1]*).*/\/dev\/\1/p}') \
		   ,/Volumes/RPI-RP2)

flash: all
	@if [[ "$(dev)" =~ "/dev" && "$(OS)" =~ Linux ]];\
		then if [[ -n `find /mnt -empty` ]]; 	\
				then sudo mount $(dev) /mnt; 	\
			 fi; 								\
			 sudo cp $(filter %uf2,$(TARGETS)) /mnt;\
	elif [[ "$(OS)" =~ Darwin && "$(dev)" =~ "RPI-RP2" ]]; \
		then cp $(filter %uf2,$(TARGETS)) $(dev);\
	else echo "NO flash!";\
	fi

tree:
	tree $(BDIR)
vi:
	nvim $(target)

clean:
	@rm -rf $(BDIR)/*

echo:
	@echo $(TARGETS)

-include $(BDIR)/%.d 
include $(filter %grep.mk,$(shell find `git rev-parse --show-toplevel` -name '*.mk'))
