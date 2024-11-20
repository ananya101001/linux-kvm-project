savedcmd_drivers/net/hyperv/hv_netvsc.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/net/hyperv/hv_netvsc.o @drivers/net/hyperv/hv_netvsc.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/net/hyperv/hv_netvsc.o

drivers/net/hyperv/hv_netvsc.o: $(wildcard ./tools/objtool/objtool)
