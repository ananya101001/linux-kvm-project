savedcmd_crypto/xor.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o crypto/xor.ko crypto/xor.o crypto/xor.mod.o .module-common.o