savedcmd_fs/lockd/lockd.o := ld -m elf_x86_64 -z noexecstack   -r -o fs/lockd/lockd.o @fs/lockd/lockd.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module fs/lockd/lockd.o

fs/lockd/lockd.o: $(wildcard ./tools/objtool/objtool)
