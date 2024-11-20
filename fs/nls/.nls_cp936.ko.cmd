savedcmd_fs/nls/nls_cp936.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o fs/nls/nls_cp936.ko fs/nls/nls_cp936.o fs/nls/nls_cp936.mod.o .module-common.o
