savedcmd_fs/nls/mac-roman.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o fs/nls/mac-roman.ko fs/nls/mac-roman.o fs/nls/mac-roman.mod.o .module-common.o
