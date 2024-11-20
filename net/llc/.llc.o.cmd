savedcmd_net/llc/llc.o := ld -m elf_x86_64 -z noexecstack   -r -o net/llc/llc.o @net/llc/llc.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module net/llc/llc.o

net/llc/llc.o: $(wildcard ./tools/objtool/objtool)
