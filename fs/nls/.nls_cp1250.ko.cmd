savedcmd_fs/nls/nls_cp1250.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o fs/nls/nls_cp1250.ko fs/nls/nls_cp1250.o fs/nls/nls_cp1250.mod.o .module-common.o
