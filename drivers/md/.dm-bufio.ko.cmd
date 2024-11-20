savedcmd_drivers/md/dm-bufio.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/md/dm-bufio.ko drivers/md/dm-bufio.o drivers/md/dm-bufio.mod.o .module-common.o
