savedcmd_drivers/xen/xenfs/xenfs.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/xen/xenfs/xenfs.o @drivers/xen/xenfs/xenfs.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/xen/xenfs/xenfs.o

drivers/xen/xenfs/xenfs.o: $(wildcard ./tools/objtool/objtool)