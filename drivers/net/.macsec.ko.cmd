savedcmd_drivers/net/macsec.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/net/macsec.ko drivers/net/macsec.o drivers/net/macsec.mod.o .module-common.o
