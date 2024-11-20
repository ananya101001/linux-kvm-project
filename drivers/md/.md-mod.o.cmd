savedcmd_drivers/md/md-mod.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/md/md-mod.o @drivers/md/md-mod.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/md/md-mod.o

drivers/md/md-mod.o: $(wildcard ./tools/objtool/objtool)
