savedcmd_crypto/jitterentropy_rng.o := ld -m elf_x86_64 -z noexecstack   -r -o crypto/jitterentropy_rng.o @crypto/jitterentropy_rng.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module crypto/jitterentropy_rng.o

crypto/jitterentropy_rng.o: $(wildcard ./tools/objtool/objtool)
