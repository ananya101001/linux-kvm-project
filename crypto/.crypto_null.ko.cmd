savedcmd_crypto/crypto_null.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o crypto/crypto_null.ko crypto/crypto_null.o crypto/crypto_null.mod.o .module-common.o
