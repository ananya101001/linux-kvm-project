savedcmd_crypto/ecc.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o crypto/ecc.ko crypto/ecc.o crypto/ecc.mod.o .module-common.o
