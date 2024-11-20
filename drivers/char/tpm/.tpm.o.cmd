savedcmd_drivers/char/tpm/tpm.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/char/tpm/tpm.o @drivers/char/tpm/tpm.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/char/tpm/tpm.o

drivers/char/tpm/tpm.o: $(wildcard ./tools/objtool/objtool)
