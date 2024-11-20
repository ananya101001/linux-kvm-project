savedcmd_drivers/ptp/ptp.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/ptp/ptp.o @drivers/ptp/ptp.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/ptp/ptp.o

drivers/ptp/ptp.o: $(wildcard ./tools/objtool/objtool)
