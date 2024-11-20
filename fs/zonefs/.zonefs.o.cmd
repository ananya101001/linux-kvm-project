savedcmd_fs/zonefs/zonefs.o := ld -m elf_x86_64 -z noexecstack   -r -o fs/zonefs/zonefs.o @fs/zonefs/zonefs.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module fs/zonefs/zonefs.o

fs/zonefs/zonefs.o: $(wildcard ./tools/objtool/objtool)
