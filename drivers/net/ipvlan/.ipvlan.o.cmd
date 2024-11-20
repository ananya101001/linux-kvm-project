savedcmd_drivers/net/ipvlan/ipvlan.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/net/ipvlan/ipvlan.o @drivers/net/ipvlan/ipvlan.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/net/ipvlan/ipvlan.o

drivers/net/ipvlan/ipvlan.o: $(wildcard ./tools/objtool/objtool)
