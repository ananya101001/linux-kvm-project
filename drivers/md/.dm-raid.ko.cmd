savedcmd_drivers/md/dm-raid.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/md/dm-raid.ko drivers/md/dm-raid.o drivers/md/dm-raid.mod.o .module-common.o
