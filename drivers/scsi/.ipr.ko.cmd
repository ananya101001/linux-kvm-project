savedcmd_drivers/scsi/ipr.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/scsi/ipr.ko drivers/scsi/ipr.o drivers/scsi/ipr.mod.o .module-common.o
