savedcmd_drivers/uio/uio_aec.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/uio/uio_aec.ko drivers/uio/uio_aec.o drivers/uio/uio_aec.mod.o .module-common.o
