savedcmd_arch/x86/crypto/poly1305-x86_64.mod := printf '%s\n'   poly1305-x86_64-cryptogams.o poly1305_glue.o | awk '!x[$$0]++ { print("arch/x86/crypto/"$$0) }' > arch/x86/crypto/poly1305-x86_64.mod
