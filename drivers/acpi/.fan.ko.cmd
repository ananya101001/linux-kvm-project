savedcmd_drivers/acpi/fan.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/acpi/fan.ko drivers/acpi/fan.o drivers/acpi/fan.mod.o .module-common.o
