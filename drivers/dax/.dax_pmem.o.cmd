savedcmd_drivers/dax/dax_pmem.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/dax/dax_pmem.o @drivers/dax/dax_pmem.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/dax/dax_pmem.o

drivers/dax/dax_pmem.o: $(wildcard ./tools/objtool/objtool)
