savedcmd_fs/nls/mac-inuit.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o fs/nls/mac-inuit.ko fs/nls/mac-inuit.o fs/nls/mac-inuit.mod.o .module-common.o
