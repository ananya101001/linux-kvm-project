savedcmd_drivers/net/bonding/bonding.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/net/bonding/bonding.o @drivers/net/bonding/bonding.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/net/bonding/bonding.o

drivers/net/bonding/bonding.o: $(wildcard ./tools/objtool/objtool)
