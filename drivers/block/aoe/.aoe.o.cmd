savedcmd_drivers/block/aoe/aoe.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/block/aoe/aoe.o @drivers/block/aoe/aoe.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/block/aoe/aoe.o

drivers/block/aoe/aoe.o: $(wildcard ./tools/objtool/objtool)