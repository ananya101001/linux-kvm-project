savedcmd_drivers/vfio/vfio.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/vfio/vfio.ko drivers/vfio/vfio.o drivers/vfio/vfio.mod.o .module-common.o
