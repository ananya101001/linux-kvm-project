savedcmd_fs/fat/fat.o := ld -m elf_x86_64 -z noexecstack   -r -o fs/fat/fat.o @fs/fat/fat.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module fs/fat/fat.o

fs/fat/fat.o: $(wildcard ./tools/objtool/objtool)
