savedcmd_drivers/net/wireguard/wireguard.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/net/wireguard/wireguard.o @drivers/net/wireguard/wireguard.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/net/wireguard/wireguard.o

drivers/net/wireguard/wireguard.o: $(wildcard ./tools/objtool/objtool)
