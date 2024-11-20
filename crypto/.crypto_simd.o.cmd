savedcmd_crypto/crypto_simd.o := ld -m elf_x86_64 -z noexecstack   -r -o crypto/crypto_simd.o @crypto/crypto_simd.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module crypto/crypto_simd.o

crypto/crypto_simd.o: $(wildcard ./tools/objtool/objtool)
