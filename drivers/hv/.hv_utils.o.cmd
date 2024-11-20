savedcmd_drivers/hv/hv_utils.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/hv/hv_utils.o @drivers/hv/hv_utils.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/hv/hv_utils.o

drivers/hv/hv_utils.o: $(wildcard ./tools/objtool/objtool)
