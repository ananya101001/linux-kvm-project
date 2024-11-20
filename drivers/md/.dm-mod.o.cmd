savedcmd_drivers/md/dm-mod.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/md/dm-mod.o @drivers/md/dm-mod.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/md/dm-mod.o

drivers/md/dm-mod.o: $(wildcard ./tools/objtool/objtool)
