savedcmd_drivers/dax/hmem/dax_hmem.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/dax/hmem/dax_hmem.o @drivers/dax/hmem/dax_hmem.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/dax/hmem/dax_hmem.o

drivers/dax/hmem/dax_hmem.o: $(wildcard ./tools/objtool/objtool)