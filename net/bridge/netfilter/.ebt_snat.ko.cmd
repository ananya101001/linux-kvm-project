savedcmd_net/bridge/netfilter/ebt_snat.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/bridge/netfilter/ebt_snat.ko net/bridge/netfilter/ebt_snat.o net/bridge/netfilter/ebt_snat.mod.o .module-common.o