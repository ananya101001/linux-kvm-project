savedcmd_net/netfilter/nf_conntrack_amanda.mod := printf '%s\n'   nf_conntrack_amanda.o | awk '!x[$$0]++ { print("net/netfilter/"$$0) }' > net/netfilter/nf_conntrack_amanda.mod
