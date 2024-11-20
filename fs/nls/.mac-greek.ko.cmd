savedcmd_fs/nls/mac-greek.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o fs/nls/mac-greek.ko fs/nls/mac-greek.o fs/nls/mac-greek.mod.o .module-common.o
