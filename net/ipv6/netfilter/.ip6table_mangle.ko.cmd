savedcmd_net/ipv6/netfilter/ip6table_mangle.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/ipv6/netfilter/ip6table_mangle.ko net/ipv6/netfilter/ip6table_mangle.o net/ipv6/netfilter/ip6table_mangle.mod.o .module-common.o