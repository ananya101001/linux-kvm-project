savedcmd_drivers/block/xen-blkfront.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/block/xen-blkfront.ko drivers/block/xen-blkfront.o drivers/block/xen-blkfront.mod.o .module-common.o