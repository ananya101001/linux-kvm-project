savedcmd_net/ipv4/fou.o := ld -m elf_x86_64 -z noexecstack   -r -o net/ipv4/fou.o @net/ipv4/fou.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module net/ipv4/fou.o

net/ipv4/fou.o: $(wildcard ./tools/objtool/objtool)
