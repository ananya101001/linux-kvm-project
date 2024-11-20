savedcmd_drivers/md/dm-log.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/md/dm-log.ko drivers/md/dm-log.o drivers/md/dm-log.mod.o .module-common.o
