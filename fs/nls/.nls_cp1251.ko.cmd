savedcmd_fs/nls/nls_cp1251.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o fs/nls/nls_cp1251.ko fs/nls/nls_cp1251.o fs/nls/nls_cp1251.mod.o .module-common.o
