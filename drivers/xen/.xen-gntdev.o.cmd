savedcmd_drivers/xen/xen-gntdev.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/xen/xen-gntdev.o @drivers/xen/xen-gntdev.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/xen/xen-gntdev.o

drivers/xen/xen-gntdev.o: $(wildcard ./tools/objtool/objtool)