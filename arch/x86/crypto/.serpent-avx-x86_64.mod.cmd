savedcmd_arch/x86/crypto/serpent-avx-x86_64.mod := printf '%s\n'   serpent-avx-x86_64-asm_64.o serpent_avx_glue.o | awk '!x[$$0]++ { print("arch/x86/crypto/"$$0) }' > arch/x86/crypto/serpent-avx-x86_64.mod