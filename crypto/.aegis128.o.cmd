savedcmd_crypto/aegis128.o := ld -m elf_x86_64 -z noexecstack   -r -o crypto/aegis128.o @crypto/aegis128.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module crypto/aegis128.o

crypto/aegis128.o: $(wildcard ./tools/objtool/objtool)