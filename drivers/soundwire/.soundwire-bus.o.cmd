savedcmd_drivers/soundwire/soundwire-bus.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/soundwire/soundwire-bus.o @drivers/soundwire/soundwire-bus.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/soundwire/soundwire-bus.o

drivers/soundwire/soundwire-bus.o: $(wildcard ./tools/objtool/objtool)
