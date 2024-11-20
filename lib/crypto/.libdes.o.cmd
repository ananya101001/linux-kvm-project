savedcmd_lib/crypto/libdes.o := ld -m elf_x86_64 -z noexecstack   -r -o lib/crypto/libdes.o @lib/crypto/libdes.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module lib/crypto/libdes.o

lib/crypto/libdes.o: $(wildcard ./tools/objtool/objtool)
