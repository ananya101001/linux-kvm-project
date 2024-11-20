savedcmd_fs/nls/mac-centeuro.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o fs/nls/mac-centeuro.ko fs/nls/mac-centeuro.o fs/nls/mac-centeuro.mod.o .module-common.o
