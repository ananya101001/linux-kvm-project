savedcmd_drivers/md/dm-queue-length.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/md/dm-queue-length.o @drivers/md/dm-queue-length.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/md/dm-queue-length.o

drivers/md/dm-queue-length.o: $(wildcard ./tools/objtool/objtool)
