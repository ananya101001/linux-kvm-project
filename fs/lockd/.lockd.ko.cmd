savedcmd_fs/lockd/lockd.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o fs/lockd/lockd.ko fs/lockd/lockd.o fs/lockd/lockd.mod.o .module-common.o
