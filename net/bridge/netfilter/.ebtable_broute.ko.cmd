savedcmd_net/bridge/netfilter/ebtable_broute.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/bridge/netfilter/ebtable_broute.ko net/bridge/netfilter/ebtable_broute.o net/bridge/netfilter/ebtable_broute.mod.o .module-common.o