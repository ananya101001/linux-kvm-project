savedcmd_drivers/cpufreq/cpufreq_userspace.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/cpufreq/cpufreq_userspace.ko drivers/cpufreq/cpufreq_userspace.o drivers/cpufreq/cpufreq_userspace.mod.o .module-common.o