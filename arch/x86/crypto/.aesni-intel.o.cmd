savedcmd_arch/x86/crypto/aesni-intel.o := ld -m elf_x86_64 -z noexecstack   -r -o arch/x86/crypto/aesni-intel.o @arch/x86/crypto/aesni-intel.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module arch/x86/crypto/aesni-intel.o

arch/x86/crypto/aesni-intel.o: $(wildcard ./tools/objtool/objtool)
