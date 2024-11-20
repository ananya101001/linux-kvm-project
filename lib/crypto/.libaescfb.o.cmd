savedcmd_lib/crypto/libaescfb.o := ld -m elf_x86_64 -z noexecstack   -r -o lib/crypto/libaescfb.o @lib/crypto/libaescfb.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module lib/crypto/libaescfb.o

lib/crypto/libaescfb.o: $(wildcard ./tools/objtool/objtool)
