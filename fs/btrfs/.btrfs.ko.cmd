savedcmd_fs/btrfs/btrfs.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o fs/btrfs/btrfs.ko fs/btrfs/btrfs.o fs/btrfs/btrfs.mod.o .module-common.o
