savedcmd_net/sunrpc/xprtrdma/rpcrdma.o := ld -m elf_x86_64 -z noexecstack   -r -o net/sunrpc/xprtrdma/rpcrdma.o @net/sunrpc/xprtrdma/rpcrdma.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module net/sunrpc/xprtrdma/rpcrdma.o

net/sunrpc/xprtrdma/rpcrdma.o: $(wildcard ./tools/objtool/objtool)
