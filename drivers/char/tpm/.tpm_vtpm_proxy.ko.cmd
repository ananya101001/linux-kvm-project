savedcmd_drivers/char/tpm/tpm_vtpm_proxy.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/char/tpm/tpm_vtpm_proxy.ko drivers/char/tpm/tpm_vtpm_proxy.o drivers/char/tpm/tpm_vtpm_proxy.mod.o .module-common.o