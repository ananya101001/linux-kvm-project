savedcmd_fs/fat/msdos.o := ld -m elf_x86_64 -z noexecstack   -r -o fs/fat/msdos.o @fs/fat/msdos.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module fs/fat/msdos.o

fs/fat/msdos.o: $(wildcard ./tools/objtool/objtool)
