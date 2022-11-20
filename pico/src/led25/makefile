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

target := notmain.c
target := led25.c
TARGETS := $(shell echo $(shell \
		find `pwd` -name '$(target)' \
		| sed -En -e 's%src%build%' -e 's%.*%&.o{,.elf{,.bin{,.uf2}}}%p'))

prerequisite:= bin2uf2.c
PREREQUISITE := $(shell \
				for i in $(prerequisite) \
				;do find `pwd` -name $$i \
				| sed -En -e 's%src%build%' -e 's%.*%&.out%p' \
				;done)

objs := start.s notmain.c
objs := $(target)
OBJS :=  $(shell \
		for i in $(objs) \
		;do find `pwd` -name $$i | sed -En -e 's%src%build%' -e 's%.*%&.o%p' \
		;done)


INCLUDES := 
COPTS += $(INCLUDES)

LIBS :=
LOPTS += $(LIBS)
CLOPTS += $(LIBS)

defines := sram
defines := flash

DEFINES := -D$(shell sed -En 's%.*%\U&%p' <<< $(defines))
COPTS += $(DEFINES)

ld_scripts := $(shell find `pwd` -name '*.ld')
LD_SCRIPT := $(filter %flash.ld,$(ld_scripts)) 
LOPTS += -T $(LD_SCRIPT)
CLOPTS += -Wl,--script= $(LD_SCRIPT)


ARM := arm-none-eabi
ARCH := -mcpu=cortex-m0plus
COPTS += $(ARCH)

AOPTS := --warn --fatal-warnings $(ARCH)

COPTS += -W -Wall -std=gnu11 -Os
COPTS += -ffreestanding
COPTS += -fno-diagnostics-show-caret
COPTS += -fdata-sections -ffunction-sections
COPTS += -funsigned-char -funsigned-bitfields
COPTS += -MD -MP -MT $@ -MF $@.d

CLOPTS += -nostdlib 
CLOPTS += -Wl,--gc-sections
CLOPTS += -Wl,-Map=$@.map

LOPTS += -nostdlib 


all : $(PREREQUISITE) $(TARGETS)

$(BDIR)/%.c.out: %.c
	if [[ ! -d $(@D) ]];then mkdir -p $(@D);fi
	gcc $(INCLUDES) $(DEFINES) -O2 $^ -o$@

$(filter %uf2,$(TARGETS)): $(filter %bin,$(TARGETS))
	$(PREREQUISITE) $< $@

$(filter %bin,$(TARGETS)): $(filter %elf,$(TARGETS))
	$(ARM)-objcopy -O binary $^ $@

$(filter %elf,$(TARGETS)): $(OBJS)
	$(ARM)-ld $(LOPTS)  $^ -o$@
	$(ARM)-objdump -D $@ > $@.lst

$(BDIR)/%.s.o: %.s
	if [[ ! -d $(@D) ]]; then mkdir -p $(@D);fi
	$(ARM)-as $(AOPTS) $< -o $@ 

$(BDIR)/%.c.o: %.c
	if [[ ! -d $(@D) ]]; then mkdir -p $(@D);fi
	$(ARM)-gcc -c $(COPTS) $< -o$@ 

$(BDIR)/%.cc.o: %.cc
	if [[ ! -d $(@D) ]]; then mkdir -p $(@D);fi
	$(ARM)-gcc -c $(COPTS) $< -o$@ 

dev :=$(if $(filter Linux,$(shell uname -s)) \
	       ,$(shell lsblk | sed -En '/^└─.*t *$$/{s/[^a-z]*([a-z1]*).*/\/dev\/\1/p}') \
		   ,/Volumes/RPI-RP2)

flash: all
	@if [[ "$(dev)" =~ "/dev" && `uname -s` =~ Linux ]];\
		then if [[ -n `find /mnt -empty` ]]; 	\
				then sudo mount $(dev) /mnt; 	\
			 fi; 								\
			 sudo cp $(filter %uf2,$(TARGETS)) /mnt;\
	elif [[ `uname -s` =~ Darwin && "$(dev)" =~ "RPI-RP2" ]]; \
		then cp $(filter %uf2,$(TARGETS)) $(dev);\
	else echo "NO flash!";\
	fi

tree:
	@tree $(BDIR)
src:
	@nvim $(target)

vi:
	@nvim $(BDIR)

clean:
	@rm -rf $(BDIR)/*

echo:
	@echo $(BDIR)

-include $(BDIR)/%.d 
include $(filter %grep.mk,$(shell find `git rev-parse --show-toplevel` -name '*.mk'))
