savedcmd_net/sunrpc/sunrpc.o := ld -m elf_x86_64 -z noexecstack   -r -o net/sunrpc/sunrpc.o @net/sunrpc/sunrpc.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module net/sunrpc/sunrpc.o

net/sunrpc/sunrpc.o: $(wildcard ./tools/objtool/objtool)
