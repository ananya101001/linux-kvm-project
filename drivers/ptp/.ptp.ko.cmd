savedcmd_drivers/ptp/ptp.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/ptp/ptp.ko drivers/ptp/ptp.o drivers/ptp/ptp.mod.o .module-common.o
