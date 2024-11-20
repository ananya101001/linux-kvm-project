savedcmd_drivers/md/dm-delay.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/md/dm-delay.ko drivers/md/dm-delay.o drivers/md/dm-delay.mod.o .module-common.o
