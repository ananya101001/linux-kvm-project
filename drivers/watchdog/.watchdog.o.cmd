savedcmd_drivers/watchdog/watchdog.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/watchdog/watchdog.o @drivers/watchdog/watchdog.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/watchdog/watchdog.o

drivers/watchdog/watchdog.o: $(wildcard ./tools/objtool/objtool)
