savedcmd_net/netfilter/nfnetlink_osf.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/nfnetlink_osf.ko net/netfilter/nfnetlink_osf.o net/netfilter/nfnetlink_osf.mod.o .module-common.o