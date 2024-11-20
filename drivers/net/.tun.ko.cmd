savedcmd_drivers/net/tun.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/net/tun.ko drivers/net/tun.o drivers/net/tun.mod.o .module-common.o
