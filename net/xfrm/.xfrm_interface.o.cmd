savedcmd_net/xfrm/xfrm_interface.o := ld -m elf_x86_64 -z noexecstack   -r -o net/xfrm/xfrm_interface.o @net/xfrm/xfrm_interface.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module net/xfrm/xfrm_interface.o

net/xfrm/xfrm_interface.o: $(wildcard ./tools/objtool/objtool)
