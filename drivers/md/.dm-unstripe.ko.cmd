savedcmd_drivers/md/dm-unstripe.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/md/dm-unstripe.ko drivers/md/dm-unstripe.o drivers/md/dm-unstripe.mod.o .module-common.o