savedcmd_crypto/cast_common.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o crypto/cast_common.ko crypto/cast_common.o crypto/cast_common.mod.o .module-common.o
