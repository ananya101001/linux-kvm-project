savedcmd_lib/lz4/lz4hc_compress.mod := printf '%s\n'   lz4hc_compress.o | awk '!x[$$0]++ { print("lib/lz4/"$$0) }' > lib/lz4/lz4hc_compress.mod
