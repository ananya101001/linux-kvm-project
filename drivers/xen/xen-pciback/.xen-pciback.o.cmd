savedcmd_drivers/xen/xen-pciback/xen-pciback.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/xen/xen-pciback/xen-pciback.o @drivers/xen/xen-pciback/xen-pciback.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/xen/xen-pciback/xen-pciback.o

drivers/xen/xen-pciback/xen-pciback.o: $(wildcard ./tools/objtool/objtool)
