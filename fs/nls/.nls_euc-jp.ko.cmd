savedcmd_fs/nls/nls_euc-jp.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o fs/nls/nls_euc-jp.ko fs/nls/nls_euc-jp.o fs/nls/nls_euc-jp.mod.o .module-common.o
