savedcmd_net/ipv6/netfilter/ip6_tables.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/ipv6/netfilter/ip6_tables.ko net/ipv6/netfilter/ip6_tables.o net/ipv6/netfilter/ip6_tables.mod.o .module-common.o