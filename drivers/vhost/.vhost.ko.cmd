savedcmd_drivers/vhost/vhost.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/vhost/vhost.ko drivers/vhost/vhost.o drivers/vhost/vhost.mod.o .module-common.o
