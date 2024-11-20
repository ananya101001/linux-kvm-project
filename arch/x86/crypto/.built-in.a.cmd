savedcmd_arch/x86/crypto/built-in.a := rm -f arch/x86/crypto/built-in.a;  printf "arch/x86/crypto/%s " blake2s-core.o blake2s-glue.o | xargs ar cDPrST arch/x86/crypto/built-in.a
