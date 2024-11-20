savedcmd_fs/configfs/configfs.o := ld -m elf_x86_64 -z noexecstack   -r -o fs/configfs/configfs.o @fs/configfs/configfs.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module fs/configfs/configfs.o

fs/configfs/configfs.o: $(wildcard ./tools/objtool/objtool)
