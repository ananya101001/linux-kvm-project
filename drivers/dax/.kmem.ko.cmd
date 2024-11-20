savedcmd_drivers/dax/kmem.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/dax/kmem.ko drivers/dax/kmem.o drivers/dax/kmem.mod.o .module-common.o
