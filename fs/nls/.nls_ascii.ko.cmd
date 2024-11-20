savedcmd_fs/nls/nls_ascii.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o fs/nls/nls_ascii.ko fs/nls/nls_ascii.o fs/nls/nls_ascii.mod.o .module-common.o
