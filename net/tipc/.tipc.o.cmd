savedcmd_net/tipc/tipc.o := ld -m elf_x86_64 -z noexecstack   -r -o net/tipc/tipc.o @net/tipc/tipc.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module net/tipc/tipc.o

net/tipc/tipc.o: $(wildcard ./tools/objtool/objtool)