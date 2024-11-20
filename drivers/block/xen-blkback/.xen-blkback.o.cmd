savedcmd_drivers/block/xen-blkback/xen-blkback.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/block/xen-blkback/xen-blkback.o @drivers/block/xen-blkback/xen-blkback.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/block/xen-blkback/xen-blkback.o

drivers/block/xen-blkback/xen-blkback.o: $(wildcard ./tools/objtool/objtool)
