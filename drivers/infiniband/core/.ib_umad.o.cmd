savedcmd_drivers/infiniband/core/ib_umad.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/infiniband/core/ib_umad.o @drivers/infiniband/core/ib_umad.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/infiniband/core/ib_umad.o

drivers/infiniband/core/ib_umad.o: $(wildcard ./tools/objtool/objtool)
