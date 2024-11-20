savedcmd_fs/erofs/erofs.o := ld -m elf_x86_64 -z noexecstack   -r -o fs/erofs/erofs.o @fs/erofs/erofs.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module fs/erofs/erofs.o

fs/erofs/erofs.o: $(wildcard ./tools/objtool/objtool)
