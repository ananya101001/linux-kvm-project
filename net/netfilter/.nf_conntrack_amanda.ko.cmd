savedcmd_net/netfilter/nf_conntrack_amanda.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/nf_conntrack_amanda.ko net/netfilter/nf_conntrack_amanda.o net/netfilter/nf_conntrack_amanda.mod.o .module-common.o