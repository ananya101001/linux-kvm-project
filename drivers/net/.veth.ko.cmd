savedcmd_drivers/net/veth.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/net/veth.ko drivers/net/veth.o drivers/net/veth.mod.o .module-common.o
