savedcmd_drivers/virtio/virtio_pci.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/virtio/virtio_pci.o @drivers/virtio/virtio_pci.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/virtio/virtio_pci.o

drivers/virtio/virtio_pci.o: $(wildcard ./tools/objtool/objtool)
