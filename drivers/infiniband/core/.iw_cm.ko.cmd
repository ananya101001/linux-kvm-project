savedcmd_drivers/infiniband/core/iw_cm.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/infiniband/core/iw_cm.ko drivers/infiniband/core/iw_cm.o drivers/infiniband/core/iw_cm.mod.o .module-common.o