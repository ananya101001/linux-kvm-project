savedcmd_drivers/net/vrf.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/net/vrf.ko drivers/net/vrf.o drivers/net/vrf.mod.o .module-common.o
