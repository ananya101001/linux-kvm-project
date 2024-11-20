savedcmd_crypto/drbg.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o crypto/drbg.ko crypto/drbg.o crypto/drbg.mod.o .module-common.o
