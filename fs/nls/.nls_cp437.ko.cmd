savedcmd_fs/nls/nls_cp437.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o fs/nls/nls_cp437.ko fs/nls/nls_cp437.o fs/nls/nls_cp437.mod.o .module-common.o
