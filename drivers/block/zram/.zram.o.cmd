savedcmd_drivers/block/zram/zram.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/block/zram/zram.o @drivers/block/zram/zram.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/block/zram/zram.o

drivers/block/zram/zram.o: $(wildcard ./tools/objtool/objtool)