savedcmd_fs/nfs/nfs.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o fs/nfs/nfs.ko fs/nfs/nfs.o fs/nfs/nfs.mod.o .module-common.o
