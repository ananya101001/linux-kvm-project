savedcmd_net/netfilter/ipset/ip_set.o := ld -m elf_x86_64 -z noexecstack   -r -o net/netfilter/ipset/ip_set.o @net/netfilter/ipset/ip_set.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module net/netfilter/ipset/ip_set.o

net/netfilter/ipset/ip_set.o: $(wildcard ./tools/objtool/objtool)
