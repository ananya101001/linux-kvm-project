savedcmd_drivers/block/zram/zram.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/block/zram/zram.ko drivers/block/zram/zram.o drivers/block/zram/zram.mod.o .module-common.o