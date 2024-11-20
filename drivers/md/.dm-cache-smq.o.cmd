savedcmd_drivers/md/dm-cache-smq.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/md/dm-cache-smq.o @drivers/md/dm-cache-smq.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/md/dm-cache-smq.o

drivers/md/dm-cache-smq.o: $(wildcard ./tools/objtool/objtool)
