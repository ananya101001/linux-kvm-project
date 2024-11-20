savedcmd_drivers/md/dm-service-time.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/md/dm-service-time.o @drivers/md/dm-service-time.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/md/dm-service-time.o

drivers/md/dm-service-time.o: $(wildcard ./tools/objtool/objtool)
