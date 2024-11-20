savedcmd_drivers/ata/libata.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/ata/libata.o @drivers/ata/libata.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/ata/libata.o

drivers/ata/libata.o: $(wildcard ./tools/objtool/objtool)
