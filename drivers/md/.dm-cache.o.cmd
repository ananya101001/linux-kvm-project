savedcmd_drivers/md/dm-cache.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/md/dm-cache.o @drivers/md/dm-cache.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/md/dm-cache.o

drivers/md/dm-cache.o: $(wildcard ./tools/objtool/objtool)
