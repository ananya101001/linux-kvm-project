savedcmd_drivers/md/dm-crypt.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/md/dm-crypt.ko drivers/md/dm-crypt.o drivers/md/dm-crypt.mod.o .module-common.o
