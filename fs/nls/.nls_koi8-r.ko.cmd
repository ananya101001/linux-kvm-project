savedcmd_fs/nls/nls_koi8-r.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o fs/nls/nls_koi8-r.ko fs/nls/nls_koi8-r.o fs/nls/nls_koi8-r.mod.o .module-common.o
