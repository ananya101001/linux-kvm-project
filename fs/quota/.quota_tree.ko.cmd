savedcmd_fs/quota/quota_tree.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o fs/quota/quota_tree.ko fs/quota/quota_tree.o fs/quota/quota_tree.mod.o .module-common.o
