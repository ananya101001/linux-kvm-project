savedcmd_fs/romfs/romfs.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o fs/romfs/romfs.ko fs/romfs/romfs.o fs/romfs/romfs.mod.o .module-common.o
