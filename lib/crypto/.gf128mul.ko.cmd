savedcmd_lib/crypto/gf128mul.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o lib/crypto/gf128mul.ko lib/crypto/gf128mul.o lib/crypto/gf128mul.mod.o .module-common.o
