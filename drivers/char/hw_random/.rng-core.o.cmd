savedcmd_drivers/char/hw_random/rng-core.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/char/hw_random/rng-core.o @drivers/char/hw_random/rng-core.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/char/hw_random/rng-core.o

drivers/char/hw_random/rng-core.o: $(wildcard ./tools/objtool/objtool)
