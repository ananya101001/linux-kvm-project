savedcmd_lib/crypto/libdes.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o lib/crypto/libdes.ko lib/crypto/libdes.o lib/crypto/libdes.mod.o .module-common.o
