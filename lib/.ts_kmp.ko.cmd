savedcmd_lib/ts_kmp.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o lib/ts_kmp.ko lib/ts_kmp.o lib/ts_kmp.mod.o .module-common.o
