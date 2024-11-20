savedcmd_crypto/geniv.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o crypto/geniv.ko crypto/geniv.o crypto/geniv.mod.o .module-common.o
