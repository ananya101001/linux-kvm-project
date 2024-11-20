savedcmd_fs/isofs/isofs.o := ld -m elf_x86_64 -z noexecstack   -r -o fs/isofs/isofs.o @fs/isofs/isofs.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module fs/isofs/isofs.o

fs/isofs/isofs.o: $(wildcard ./tools/objtool/objtool)
