savedcmd_net/netlink/netlink_diag.o := ld -m elf_x86_64 -z noexecstack   -r -o net/netlink/netlink_diag.o @net/netlink/netlink_diag.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module net/netlink/netlink_diag.o

net/netlink/netlink_diag.o: $(wildcard ./tools/objtool/objtool)
