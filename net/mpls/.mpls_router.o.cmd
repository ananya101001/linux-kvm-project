savedcmd_net/mpls/mpls_router.o := ld -m elf_x86_64 -z noexecstack   -r -o net/mpls/mpls_router.o @net/mpls/mpls_router.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module net/mpls/mpls_router.o

net/mpls/mpls_router.o: $(wildcard ./tools/objtool/objtool)
