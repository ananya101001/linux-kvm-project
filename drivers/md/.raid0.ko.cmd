savedcmd_drivers/md/raid0.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/md/raid0.ko drivers/md/raid0.o drivers/md/raid0.mod.o .module-common.o
