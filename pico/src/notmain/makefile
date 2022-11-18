BDIR := $(shell pwd | sed -En 's%src%build%p')

target := notmain.c
deps := start.s notmain.c
prerequisite:= bin2uf2.c
defines := flash
ld_scripts := $(shell find `pwd` -name '*.ld')
INCLUDE_DIR := $(shell pwd | sed -En 's%.*%&/include%p') 

DEFINES := -D$(shell sed -En 's%.*%\U&%p' <<< $(defines))
LD_SCRIPT := $(filter %$(defines).ld,$(ld_scripts)) 
INCLUDES := -I$(INCLUDE_DIR)

OS := $(shell uname -s)
ARM := arm-none-eabi
ARCH := -mcpu=cortex-m0plus

AOPS := --warn --fatal-warnings $(ARCH)
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
COPS := -Wall -ffreestanding $(ARCH) -mthumb

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
LOPS := -nostdlib


TARGETS := $(shell echo $(shell \
		find `pwd` -name '$(target)' \
		| sed -En -e 's%src%build%' -e 's%.*%&.o{,.elf{,.bin{,.uf2}}}%p'))

DEPS :=  $(shell \
		for i in $(deps) \
		;do find `pwd` -name $$i | sed -En -e 's%src%build%' -e 's%.*%&.o%p' \
		;done)

PREREQUISITE := $(shell \
				for i in $(prerequisite) \
				;do find `pwd` -name $$i \
				| sed -En -e 's%src%build%' -e 's%.*%&.out%p' \
				;done)

all : $(PREREQUISITE) $(TARGETS)

$(BDIR)/%.c.out: %.c
	if [[ ! -d $(@D) ]];then mkdir -p $(@D);fi
	gcc $(INCLUDES) $(DEFINES) -O2 $^ -o$@

$(filter %uf2,$(TARGETS)): $(filter %bin,$(TARGETS))
	$(PREREQUISITE) $< $@

$(filter %bin,$(TARGETS)): $(filter %elf,$(TARGETS))
	$(ARM)-objcopy -O binary $^ $@

$(filter %elf,$(TARGETS)): $(DEPS)
	$(ARM)-ld $(LOPS) -T$(LD_SCRIPT) $^ -o$@
	$(ARM)-objdump -D $@ > $@.lst

$(BDIR)/%.s.o: %.s
	if [[ ! -d $(@D) ]]; then mkdir -p $(@D);fi
	$(ARM)-as $(AOPS) $< -o $@ 

$(BDIR)/%.c.o: %.c
	if [[ ! -d $(@D) ]]; then mkdir -p $(@D);fi
	$(ARM)-gcc -c $(COPS) $< -o$@ 

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
	sed -En 's%.*%\U&%p' <<< $(defines)
