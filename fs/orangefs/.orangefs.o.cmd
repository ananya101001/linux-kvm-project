savedcmd_fs/orangefs/orangefs.o := ld -m elf_x86_64 -z noexecstack   -r -o fs/orangefs/orangefs.o @fs/orangefs/orangefs.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module fs/orangefs/orangefs.o

fs/orangefs/orangefs.o: $(wildcard ./tools/objtool/objtool)
