savedcmd_net/openvswitch/openvswitch.o := ld -m elf_x86_64 -z noexecstack   -r -o net/openvswitch/openvswitch.o @net/openvswitch/openvswitch.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module net/openvswitch/openvswitch.o

net/openvswitch/openvswitch.o: $(wildcard ./tools/objtool/objtool)
