savedcmd_net/ipv6/netfilter/nf_reject_ipv6.mod := printf '%s\n'   nf_reject_ipv6.o | awk '!x[$$0]++ { print("net/ipv6/netfilter/"$$0) }' > net/ipv6/netfilter/nf_reject_ipv6.mod
