savedcmd_drivers/md/dm-snapshot.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/md/dm-snapshot.o @drivers/md/dm-snapshot.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/md/dm-snapshot.o

drivers/md/dm-snapshot.o: $(wildcard ./tools/objtool/objtool)
