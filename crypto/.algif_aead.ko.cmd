savedcmd_crypto/algif_aead.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o crypto/algif_aead.ko crypto/algif_aead.o crypto/algif_aead.mod.o .module-common.o
