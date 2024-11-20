savedcmd_drivers/block/rbd.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/block/rbd.ko drivers/block/rbd.o drivers/block/rbd.mod.o .module-common.o
