savedcmd_drivers/scsi/st.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/scsi/st.ko drivers/scsi/st.o drivers/scsi/st.mod.o .module-common.o
