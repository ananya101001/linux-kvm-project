savedcmd_lib/crypto/libchacha20poly1305.o := ld -m elf_x86_64 -z noexecstack   -r -o lib/crypto/libchacha20poly1305.o @lib/crypto/libchacha20poly1305.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module lib/crypto/libchacha20poly1305.o

lib/crypto/libchacha20poly1305.o: $(wildcard ./tools/objtool/objtool)
