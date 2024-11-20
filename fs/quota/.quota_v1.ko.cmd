savedcmd_fs/quota/quota_v1.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o fs/quota/quota_v1.ko fs/quota/quota_v1.o fs/quota/quota_v1.mod.o .module-common.o
