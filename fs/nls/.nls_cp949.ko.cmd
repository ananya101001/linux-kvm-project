savedcmd_fs/nls/nls_cp949.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o fs/nls/nls_cp949.ko fs/nls/nls_cp949.o fs/nls/nls_cp949.mod.o .module-common.o
