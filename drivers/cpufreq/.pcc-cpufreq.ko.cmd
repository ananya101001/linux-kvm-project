savedcmd_drivers/cpufreq/pcc-cpufreq.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/cpufreq/pcc-cpufreq.ko drivers/cpufreq/pcc-cpufreq.o drivers/cpufreq/pcc-cpufreq.mod.o .module-common.o