savedcmd_crypto/af_alg.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o crypto/af_alg.ko crypto/af_alg.o crypto/af_alg.mod.o .module-common.o
