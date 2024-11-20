savedcmd_fs/smb/client/cifs.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o fs/smb/client/cifs.ko fs/smb/client/cifs.o fs/smb/client/cifs.mod.o .module-common.o
