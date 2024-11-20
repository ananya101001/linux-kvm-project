savedcmd_net/packet/af_packet_diag.o := ld -m elf_x86_64 -z noexecstack   -r -o net/packet/af_packet_diag.o @net/packet/af_packet_diag.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module net/packet/af_packet_diag.o

net/packet/af_packet_diag.o: $(wildcard ./tools/objtool/objtool)
