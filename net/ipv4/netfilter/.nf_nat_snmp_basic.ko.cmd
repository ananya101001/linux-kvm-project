savedcmd_net/ipv4/netfilter/nf_nat_snmp_basic.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/ipv4/netfilter/nf_nat_snmp_basic.ko net/ipv4/netfilter/nf_nat_snmp_basic.o net/ipv4/netfilter/nf_nat_snmp_basic.mod.o .module-common.o