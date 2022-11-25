ARM := arm-none-eabi
BDIR := $(shell pwd | sed -En 's;src;build;p')
INCLUDE := -I $(shell echo $(BDIR) | sed -En 's;(.*)build.*;\1include;p')

ld_scripts := $(shell find `pwd` -name '*.ld')
LD_SCRIPT := $(filter %memmap_boot_stage2.ld,$(ld_scripts)) 

target := boot_stage2.s
objs := $(target)

OBJS :=  $(shell \
		for i in $(objs) \
		;do find `pwd` -name $$i | sed -En -e 's;src;build;' -e 's;.*;&.obj;p' \
		;done)

TARGETS := $(shell echo $(shell \
		find `pwd` -name '$(target)' \
		| sed -En -e 's;src;build;' -e 's;.*;&.obj{,.elf{,.bin{,.S}}};p'))

CFLAGS := \
    -mcpu=cortex-m0plus -mthumb -O3 -DNDEBUG \
	$(INCLUDE)

LDFLAGS := \
    -mcpu=cortex-m0plus -mthumb -O3 -DNDEBUG \
    -Wl,--build-id=none --specs=nosys.specs -nostartfiles \
    -Wl,--script=$(LD_SCRIPT) \
    -Wl,-Map=$(@).map

.PHONY : checksum all echo clean vi vib tree 

all : $(TARGETS)

$(filter %.S, $(TARGETS)): $(filter %.bin, $(TARGETS)) 
	python3 pad_checksum.py -s 0xffffffff $< $@

$(filter %.bin,$(TARGETS)): $(filter %.elf,$(TARGETS))
	$(ARM)-objcopy -Obinary $< $@

$(filter %.elf,$(TARGETS)): $(OBJS)
	$(ARM)-gcc $(LDFLAGS)  $^ -o$@
	$(ARM)-objdump -D $@ > $@.lst
	$(ARM)-objdump -h $@ > $@.header

$(BDIR)/%.s.obj: %.s
	if [[ ! -d $(@D) ]]; then mkdir -p $(@D);fi
	$(ARM)-gcc $(CFLAGS) -c $< -o$@ 

$(BDIR)/%.c.o: %.c
	if [[ ! -d $(@D) ]]; then mkdir -p $(@D);fi
	$(ARM)-gcc $(CFLAGS) -c $< -o$@ 

tree:
	@tree $(BDIR)

vis:
	@nvim $(target)

vib:
	@nvim $(BDIR)

clean:
	@rm -rf $(BDIR)/*

echo:
	@echo $(OBJS)

path ?= \
		~/Project/rasp/pico-sdk/src \
		~/Project/rasp/pico-sdk \
		~/Project/rasp/mcu-starter-projects \
		.

-include $(BDIR)/%.d 
include $(filter %grep.mk,$(shell find `git rev-parse --show-toplevel` -name '*.mk'))

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
