savedcmd_fs/nls/nls_koi8-u.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o fs/nls/nls_koi8-u.ko fs/nls/nls_koi8-u.o fs/nls/nls_koi8-u.mod.o .module-common.o
