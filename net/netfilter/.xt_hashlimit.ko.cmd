savedcmd_net/netfilter/xt_hashlimit.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/xt_hashlimit.ko net/netfilter/xt_hashlimit.o net/netfilter/xt_hashlimit.mod.o .module-common.o