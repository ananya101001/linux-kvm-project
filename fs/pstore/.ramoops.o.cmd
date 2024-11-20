savedcmd_fs/pstore/ramoops.o := ld -m elf_x86_64 -z noexecstack   -r -o fs/pstore/ramoops.o @fs/pstore/ramoops.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module fs/pstore/ramoops.o

fs/pstore/ramoops.o: $(wildcard ./tools/objtool/objtool)
