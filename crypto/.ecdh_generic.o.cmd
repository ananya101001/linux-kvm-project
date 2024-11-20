savedcmd_crypto/ecdh_generic.o := ld -m elf_x86_64 -z noexecstack   -r -o crypto/ecdh_generic.o @crypto/ecdh_generic.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module crypto/ecdh_generic.o

crypto/ecdh_generic.o: $(wildcard ./tools/objtool/objtool)
