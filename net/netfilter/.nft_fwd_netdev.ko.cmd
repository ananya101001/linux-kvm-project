savedcmd_net/netfilter/nft_fwd_netdev.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/nft_fwd_netdev.ko net/netfilter/nft_fwd_netdev.o net/netfilter/nft_fwd_netdev.mod.o .module-common.o