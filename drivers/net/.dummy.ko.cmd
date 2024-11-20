savedcmd_drivers/net/dummy.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/net/dummy.ko drivers/net/dummy.o drivers/net/dummy.mod.o .module-common.o
