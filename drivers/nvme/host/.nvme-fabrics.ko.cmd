savedcmd_drivers/nvme/host/nvme-fabrics.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/nvme/host/nvme-fabrics.ko drivers/nvme/host/nvme-fabrics.o drivers/nvme/host/nvme-fabrics.mod.o .module-common.o