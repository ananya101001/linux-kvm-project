savedcmd_net/rds/rds.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/rds/rds.ko net/rds/rds.o net/rds/rds.mod.o .module-common.o
