savedcmd_net/netfilter/nft_numgen.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/nft_numgen.ko net/netfilter/nft_numgen.o net/netfilter/nft_numgen.mod.o .module-common.o
