savedcmd_drivers/input/serio/serio_raw.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/input/serio/serio_raw.ko drivers/input/serio/serio_raw.o drivers/input/serio/serio_raw.mod.o .module-common.o