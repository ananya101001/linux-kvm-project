savedcmd_drivers/md/bcache/bcache.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/md/bcache/bcache.o @drivers/md/bcache/bcache.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/md/bcache/bcache.o

drivers/md/bcache/bcache.o: $(wildcard ./tools/objtool/objtool)