savedcmd_lib/crypto/libaescfb.mod := printf '%s\n'   aescfb.o | awk '!x[$$0]++ { print("lib/crypto/"$$0) }' > lib/crypto/libaescfb.mod
