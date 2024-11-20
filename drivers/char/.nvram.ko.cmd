savedcmd_drivers/char/nvram.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/char/nvram.ko drivers/char/nvram.o drivers/char/nvram.mod.o .module-common.o
