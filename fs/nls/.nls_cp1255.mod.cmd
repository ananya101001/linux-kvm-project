savedcmd_fs/nls/nls_cp1255.mod := printf '%s\n'   nls_cp1255.o | awk '!x[$$0]++ { print("fs/nls/"$$0) }' > fs/nls/nls_cp1255.mod
