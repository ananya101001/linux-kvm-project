savedcmd_net/netfilter/nfnetlink_acct.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/nfnetlink_acct.ko net/netfilter/nfnetlink_acct.o net/netfilter/nfnetlink_acct.mod.o .module-common.o