savedcmd_fs/squashfs/squashfs.o := ld -m elf_x86_64 -z noexecstack   -r -o fs/squashfs/squashfs.o @fs/squashfs/squashfs.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module fs/squashfs/squashfs.o

fs/squashfs/squashfs.o: $(wildcard ./tools/objtool/objtool)
