savedcmd_drivers/md/md-mod.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/md/md-mod.ko drivers/md/md-mod.o drivers/md/md-mod.mod.o .module-common.o
