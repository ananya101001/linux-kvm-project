savedcmd_drivers/cpufreq/acpi-cpufreq.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/cpufreq/acpi-cpufreq.ko drivers/cpufreq/acpi-cpufreq.o drivers/cpufreq/acpi-cpufreq.mod.o .module-common.o