savedcmd_drivers/infiniband/core/iw_cm.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/infiniband/core/iw_cm.o @drivers/infiniband/core/iw_cm.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/infiniband/core/iw_cm.o

drivers/infiniband/core/iw_cm.o: $(wildcard ./tools/objtool/objtool)
