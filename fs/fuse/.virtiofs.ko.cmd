savedcmd_fs/fuse/virtiofs.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o fs/fuse/virtiofs.ko fs/fuse/virtiofs.o fs/fuse/virtiofs.mod.o .module-common.o
