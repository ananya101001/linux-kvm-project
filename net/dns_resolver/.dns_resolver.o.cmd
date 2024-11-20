savedcmd_net/dns_resolver/dns_resolver.o := ld -m elf_x86_64 -z noexecstack   -r -o net/dns_resolver/dns_resolver.o @net/dns_resolver/dns_resolver.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module net/dns_resolver/dns_resolver.o

net/dns_resolver/dns_resolver.o: $(wildcard ./tools/objtool/objtool)
