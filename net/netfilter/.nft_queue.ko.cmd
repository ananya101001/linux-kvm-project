savedcmd_net/netfilter/nft_queue.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/nft_queue.ko net/netfilter/nft_queue.o net/netfilter/nft_queue.mod.o .module-common.o