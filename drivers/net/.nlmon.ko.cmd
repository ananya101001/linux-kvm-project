savedcmd_drivers/net/nlmon.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/net/nlmon.ko drivers/net/nlmon.o drivers/net/nlmon.mod.o .module-common.o
