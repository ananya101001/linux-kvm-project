savedcmd_drivers/net/vxlan/vxlan.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/net/vxlan/vxlan.o @drivers/net/vxlan/vxlan.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/net/vxlan/vxlan.o

drivers/net/vxlan/vxlan.o: $(wildcard ./tools/objtool/objtool)
