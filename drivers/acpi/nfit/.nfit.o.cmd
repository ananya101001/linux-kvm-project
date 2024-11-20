savedcmd_drivers/acpi/nfit/nfit.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/acpi/nfit/nfit.o @drivers/acpi/nfit/nfit.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/acpi/nfit/nfit.o

drivers/acpi/nfit/nfit.o: $(wildcard ./tools/objtool/objtool)
