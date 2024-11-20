savedcmd_drivers/input/rmi4/rmi_core.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/input/rmi4/rmi_core.o @drivers/input/rmi4/rmi_core.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/input/rmi4/rmi_core.o

drivers/input/rmi4/rmi_core.o: $(wildcard ./tools/objtool/objtool)
