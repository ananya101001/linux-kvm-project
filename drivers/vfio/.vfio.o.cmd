savedcmd_drivers/vfio/vfio.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/vfio/vfio.o @drivers/vfio/vfio.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/vfio/vfio.o

drivers/vfio/vfio.o: $(wildcard ./tools/objtool/objtool)
