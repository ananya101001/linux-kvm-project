savedcmd_net/netfilter/nf_conntrack_sip.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/nf_conntrack_sip.ko net/netfilter/nf_conntrack_sip.o net/netfilter/nf_conntrack_sip.mod.o .module-common.o