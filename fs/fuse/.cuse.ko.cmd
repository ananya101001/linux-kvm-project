savedcmd_fs/fuse/cuse.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o fs/fuse/cuse.ko fs/fuse/cuse.o fs/fuse/cuse.mod.o .module-common.o
