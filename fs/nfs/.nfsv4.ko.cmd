savedcmd_fs/nfs/nfsv4.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o fs/nfs/nfsv4.ko fs/nfs/nfsv4.o fs/nfs/nfsv4.mod.o .module-common.o
