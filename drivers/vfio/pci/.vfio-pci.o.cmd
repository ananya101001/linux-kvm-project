savedcmd_drivers/vfio/pci/vfio-pci.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/vfio/pci/vfio-pci.o @drivers/vfio/pci/vfio-pci.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/vfio/pci/vfio-pci.o

drivers/vfio/pci/vfio-pci.o: $(wildcard ./tools/objtool/objtool)
