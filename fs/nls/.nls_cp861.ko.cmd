savedcmd_fs/nls/nls_cp861.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o fs/nls/nls_cp861.ko fs/nls/nls_cp861.o fs/nls/nls_cp861.mod.o .module-common.o
