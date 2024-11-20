savedcmd_drivers/pps/pps_core.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/pps/pps_core.o @drivers/pps/pps_core.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/pps/pps_core.o

drivers/pps/pps_core.o: $(wildcard ./tools/objtool/objtool)
