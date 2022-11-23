BDIR := $(shell pwd | sed -En 's;src;build;p')

target := main.c
objs := startup_rp2040.c $(target) \
		sys_init.c timer_init.c

target := 01-led25.c
objs := startup_rp2040.c $(target) \

target := 02-led25_macro.c
objs := startup_rp2040.c $(target) \


target := 03-led25-init_clock.c
objs := startup_rp2040.c $(target) \
		init-clock.c

target := 04-led25-init_sys.c
objs := startup_rp2040.c $(target) \
		init-sys.c \
		init-timer.c \
		nvic-enableIRQ.c \

OBJS :=  $(shell \
		for i in $(objs) \
		;do find `pwd` -name $$i | sed -En -e 's;src;build;' -e 's;.*;&.o;p' \
		;done)

INCLUDE := -I ../../include

TARGETS := $(shell echo $(shell \
		find `pwd` -name '$(target)' \
		| sed -En -e 's;src;build;' -e 's;.*;&.o{,.elf{,.bin{,.uf2}}};p'))

TOOL := $(shell find `git rev-parse --show-toplevel` -regextype posix-extended -regex '.*src/tools/.*bin2uf2\.c' | sed -En -e 's;src;build;' -e 's;.*;&.out;p')


ld_scripts := $(shell find `pwd` -name '*.ld')
LD_SCRIPT := $(filter %memmap_rp2040.ld,$(ld_scripts)) 

ARM := arm-none-eabi
ARCH := -mcpu=cortex-m0plus

AOPTS := --warn --fatal-warnings $(ARCH)


CFLAGS += $(ARCH) $(INCLUDE)
CFLAGS += -W -Wall --std=gnu11 -Os
CFLAGS += -ffreestanding
CFLAGS += -fno-diagnostics-show-caret
CFLAGS += -fdata-sections -ffunction-sections
CFLAGS += -funsigned-char -funsigned-bitfields
CFLAGS += -MD -MP -MT $@ -MF $@.d

LDFLAGS += $(ARCH)
LDFLAGS += -nostartfiles
LDFLAGS += -Wl,--gc-sections
LDFLAGS += -Wl,--script=$(LD_SCRIPT)
LDFLAGS += -Wl,-Map=$@.map 

all : tools $(TARGETS)

tools:
	make -C ../tools $(TOOL)

$(filter %uf2,$(TARGETS)): $(filter %bin,$(TARGETS))
	$(TOOL) $< $@

$(filter %bin,$(TARGETS)): $(filter %elf,$(TARGETS))
	$(ARM)-objcopy -O binary $^ $@

$(filter %elf,$(TARGETS)): $(OBJS)
	$(ARM)-gcc $(LDFLAGS)  $^ -o$@
	$(ARM)-objdump -D $@ > $@.lst
	$(ARM)-objdump -h $@ > $@.header

$(BDIR)/%.s.o: %.s
	if [[ ! -d $(@D) ]]; then mkdir -p $(@D);fi
	$(ARM)-as $(AOPTS) $< -o $@ 

$(BDIR)/%.c.o: %.c
	if [[ ! -d $(@D) ]]; then mkdir -p $(@D);fi
	$(ARM)-gcc -c $(CFLAGS) $< -o$@ 


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

vis:
	@nvim $(target)

vib:
	@nvim $(BDIR)

clean:
	@rm -rf $(BDIR)/*

echo:
	@echo $(TOOL)

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
