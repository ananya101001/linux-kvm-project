savedcmd_arch/x86/crypto/crct10dif-pclmul.o := ld -m elf_x86_64 -z noexecstack   -r -o arch/x86/crypto/crct10dif-pclmul.o @arch/x86/crypto/crct10dif-pclmul.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module arch/x86/crypto/crct10dif-pclmul.o

arch/x86/crypto/crct10dif-pclmul.o: $(wildcard ./tools/objtool/objtool)
