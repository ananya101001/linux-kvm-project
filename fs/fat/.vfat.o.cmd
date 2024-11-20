savedcmd_fs/fat/vfat.o := ld -m elf_x86_64 -z noexecstack   -r -o fs/fat/vfat.o @fs/fat/vfat.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module fs/fat/vfat.o

fs/fat/vfat.o: $(wildcard ./tools/objtool/objtool)
