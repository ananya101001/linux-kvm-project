savedcmd_drivers/hv/hv_vmbus.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/hv/hv_vmbus.ko drivers/hv/hv_vmbus.o drivers/hv/hv_vmbus.mod.o .module-common.o
