savedcmd_arch/x86/events/amd/power.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o arch/x86/events/amd/power.ko arch/x86/events/amd/power.o arch/x86/events/amd/power.mod.o .module-common.o