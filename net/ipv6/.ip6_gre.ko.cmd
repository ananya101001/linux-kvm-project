savedcmd_net/ipv6/ip6_gre.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/ipv6/ip6_gre.ko net/ipv6/ip6_gre.o net/ipv6/ip6_gre.mod.o .module-common.o
