savedcmd_drivers/scsi/virtio_scsi.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/scsi/virtio_scsi.ko drivers/scsi/virtio_scsi.o drivers/scsi/virtio_scsi.mod.o .module-common.o