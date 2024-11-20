savedcmd_net/dccp/dccp_ipv6.o := ld -m elf_x86_64 -z noexecstack   -r -o net/dccp/dccp_ipv6.o @net/dccp/dccp_ipv6.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module net/dccp/dccp_ipv6.o

net/dccp/dccp_ipv6.o: $(wildcard ./tools/objtool/objtool)
