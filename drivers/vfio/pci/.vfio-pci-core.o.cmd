savedcmd_drivers/vfio/pci/vfio-pci-core.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/vfio/pci/vfio-pci-core.o @drivers/vfio/pci/vfio-pci-core.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/vfio/pci/vfio-pci-core.o

drivers/vfio/pci/vfio-pci-core.o: $(wildcard ./tools/objtool/objtool)
