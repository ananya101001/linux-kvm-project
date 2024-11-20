savedcmd_net/netfilter/nf_nat.o := ld -m elf_x86_64 -z noexecstack   -r -o net/netfilter/nf_nat.o @net/netfilter/nf_nat.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module net/netfilter/nf_nat.o

net/netfilter/nf_nat.o: $(wildcard ./tools/objtool/objtool)
