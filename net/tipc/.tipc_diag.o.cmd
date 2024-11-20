savedcmd_net/tipc/tipc_diag.o := ld -m elf_x86_64 -z noexecstack   -r -o net/tipc/tipc_diag.o @net/tipc/tipc_diag.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module net/tipc/tipc_diag.o

net/tipc/tipc_diag.o: $(wildcard ./tools/objtool/objtool)
