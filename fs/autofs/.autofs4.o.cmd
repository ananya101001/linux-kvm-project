savedcmd_fs/autofs/autofs4.o := ld -m elf_x86_64 -z noexecstack   -r -o fs/autofs/autofs4.o @fs/autofs/autofs4.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module fs/autofs/autofs4.o

fs/autofs/autofs4.o: $(wildcard ./tools/objtool/objtool)
