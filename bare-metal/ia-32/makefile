
all: build/karng

build/%.o: src/%.S
	if [[ ! -d build ]]; then mkdir build ;fi
	as --32 -o $@ $<

build/%: build/%.o  
	# ld -m elf_i386 -o $@ -T mylink.ld $^
	# --gc-sections : gabage collection enabled with sections
	ld --gc-sections -m elf_i386 -o $@ -T mylink.ld $^

run:
	echo $$?
clean:
	rm build/*
