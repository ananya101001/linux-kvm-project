savedcmd_drivers/vhost/vhost_iotlb.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/vhost/vhost_iotlb.o @drivers/vhost/vhost_iotlb.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/vhost/vhost_iotlb.o

drivers/vhost/vhost_iotlb.o: $(wildcard ./tools/objtool/objtool)
