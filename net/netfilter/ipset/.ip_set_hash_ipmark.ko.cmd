savedcmd_net/netfilter/ipset/ip_set_hash_ipmark.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/ipset/ip_set_hash_ipmark.ko net/netfilter/ipset/ip_set_hash_ipmark.o net/netfilter/ipset/ip_set_hash_ipmark.mod.o .module-common.o