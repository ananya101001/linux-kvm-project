savedcmd_net/bridge/br_netfilter.o := ld -m elf_x86_64 -z noexecstack   -r -o net/bridge/br_netfilter.o @net/bridge/br_netfilter.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module net/bridge/br_netfilter.o

net/bridge/br_netfilter.o: $(wildcard ./tools/objtool/objtool)
