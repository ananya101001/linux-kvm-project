savedcmd_drivers/net/ethernet/amazon/ena/ena.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/net/ethernet/amazon/ena/ena.o @drivers/net/ethernet/amazon/ena/ena.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/net/ethernet/amazon/ena/ena.o

drivers/net/ethernet/amazon/ena/ena.o: $(wildcard ./tools/objtool/objtool)
