savedcmd_net/ipv6/netfilter/ip6table_security.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/ipv6/netfilter/ip6table_security.ko net/ipv6/netfilter/ip6table_security.o net/ipv6/netfilter/ip6table_security.mod.o .module-common.o