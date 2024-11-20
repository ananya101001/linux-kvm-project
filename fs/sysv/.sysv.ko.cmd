savedcmd_fs/sysv/sysv.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o fs/sysv/sysv.ko fs/sysv/sysv.o fs/sysv/sysv.mod.o .module-common.o
