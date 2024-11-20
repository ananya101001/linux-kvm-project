savedcmd_fs/nls/mac-cyrillic.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o fs/nls/mac-cyrillic.ko fs/nls/mac-cyrillic.o fs/nls/mac-cyrillic.mod.o .module-common.o
