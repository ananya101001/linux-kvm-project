savedcmd_crypto/aegis128.mod := printf '%s\n'   aegis128-core.o | awk '!x[$$0]++ { print("crypto/"$$0) }' > crypto/aegis128.mod
