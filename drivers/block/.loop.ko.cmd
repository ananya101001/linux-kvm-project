savedcmd_drivers/block/loop.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/block/loop.ko drivers/block/loop.o drivers/block/loop.mod.o .module-common.o
