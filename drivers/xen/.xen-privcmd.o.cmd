savedcmd_drivers/xen/xen-privcmd.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/xen/xen-privcmd.o @drivers/xen/xen-privcmd.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/xen/xen-privcmd.o

drivers/xen/xen-privcmd.o: $(wildcard ./tools/objtool/objtool)
