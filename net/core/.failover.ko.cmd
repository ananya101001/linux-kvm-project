savedcmd_net/core/failover.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/core/failover.ko net/core/failover.o net/core/failover.mod.o .module-common.o
