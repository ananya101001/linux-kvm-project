savedcmd_crypto/lz4hc.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o crypto/lz4hc.ko crypto/lz4hc.o crypto/lz4hc.mod.o .module-common.o
