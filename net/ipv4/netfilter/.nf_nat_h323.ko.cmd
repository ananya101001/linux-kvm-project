savedcmd_net/ipv4/netfilter/nf_nat_h323.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/ipv4/netfilter/nf_nat_h323.ko net/ipv4/netfilter/nf_nat_h323.o net/ipv4/netfilter/nf_nat_h323.mod.o .module-common.o