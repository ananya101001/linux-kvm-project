savedcmd_drivers/md/raid1.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/md/raid1.ko drivers/md/raid1.o drivers/md/raid1.mod.o .module-common.o
