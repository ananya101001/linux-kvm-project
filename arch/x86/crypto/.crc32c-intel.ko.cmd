savedcmd_arch/x86/crypto/crc32c-intel.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o arch/x86/crypto/crc32c-intel.ko arch/x86/crypto/crc32c-intel.o arch/x86/crypto/crc32c-intel.mod.o .module-common.o