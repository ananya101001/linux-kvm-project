savedcmd_fs/netfs/netfs.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o fs/netfs/netfs.ko fs/netfs/netfs.o fs/netfs/netfs.mod.o .module-common.o
