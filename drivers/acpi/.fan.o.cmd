savedcmd_drivers/acpi/fan.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/acpi/fan.o @drivers/acpi/fan.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/acpi/fan.o

drivers/acpi/fan.o: $(wildcard ./tools/objtool/objtool)
