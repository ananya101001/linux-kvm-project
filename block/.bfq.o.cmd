savedcmd_block/bfq.o := ld -m elf_x86_64 -z noexecstack   -r -o block/bfq.o @block/bfq.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module block/bfq.o

block/bfq.o: $(wildcard ./tools/objtool/objtool)
