#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(ip_tunnel_lookup, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_md_udp_encap, "", "");
KSYMTAB_FUNC(ip_tunnel_rcv, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_encap_add_ops, "", "");
KSYMTAB_FUNC(ip_tunnel_encap_del_ops, "", "");
KSYMTAB_FUNC(ip_tunnel_encap_setup, "_gpl", "");
KSYMTAB_FUNC(ip_md_tunnel_xmit, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_xmit, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_ctl, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_parm_from_user, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_parm_to_user, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_siocdevprivate, "_gpl", "");
KSYMTAB_FUNC(__ip_tunnel_change_mtu, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_change_mtu, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_dellink, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_get_link_net, "", "");
KSYMTAB_FUNC(ip_tunnel_get_iflink, "", "");
KSYMTAB_FUNC(ip_tunnel_init_net, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_delete_nets, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_newlink, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_changelink, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_init, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_uninit, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_setup, "_gpl", "");

SYMBOL_CRC(ip_tunnel_lookup, 0x8e6b6525, "_gpl");
SYMBOL_CRC(ip_tunnel_md_udp_encap, 0x69234e59, "");
SYMBOL_CRC(ip_tunnel_rcv, 0x3267a22d, "_gpl");
SYMBOL_CRC(ip_tunnel_encap_add_ops, 0x3255d536, "");
SYMBOL_CRC(ip_tunnel_encap_del_ops, 0x434ac20f, "");
SYMBOL_CRC(ip_tunnel_encap_setup, 0x0a4962bb, "_gpl");
SYMBOL_CRC(ip_md_tunnel_xmit, 0xb04e071c, "_gpl");
SYMBOL_CRC(ip_tunnel_xmit, 0xaccd7dc4, "_gpl");
SYMBOL_CRC(ip_tunnel_ctl, 0xc06fc1a5, "_gpl");
SYMBOL_CRC(ip_tunnel_parm_from_user, 0x7f835b87, "_gpl");
SYMBOL_CRC(ip_tunnel_parm_to_user, 0xfca8744d, "_gpl");
SYMBOL_CRC(ip_tunnel_siocdevprivate, 0x9885d36b, "_gpl");
SYMBOL_CRC(__ip_tunnel_change_mtu, 0xb38d6179, "_gpl");
SYMBOL_CRC(ip_tunnel_change_mtu, 0xa7b6fe0e, "_gpl");
SYMBOL_CRC(ip_tunnel_dellink, 0xe2807159, "_gpl");
SYMBOL_CRC(ip_tunnel_get_link_net, 0x6425da09, "");
SYMBOL_CRC(ip_tunnel_get_iflink, 0x959e330f, "");
SYMBOL_CRC(ip_tunnel_init_net, 0x5067a180, "_gpl");
SYMBOL_CRC(ip_tunnel_delete_nets, 0xa7940a10, "_gpl");
SYMBOL_CRC(ip_tunnel_newlink, 0x18defab2, "_gpl");
SYMBOL_CRC(ip_tunnel_changelink, 0xb27b21fd, "_gpl");
SYMBOL_CRC(ip_tunnel_init, 0x24a94c0f, "_gpl");
SYMBOL_CRC(ip_tunnel_uninit, 0xdf648ac6, "_gpl");
SYMBOL_CRC(ip_tunnel_setup, 0xf6991549, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xc52df069, "iptun_encaps" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x754d539c, "strlen" },
	{ 0xa916b694, "strnlen" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x1b6287cd, "alloc_netdev_mqs" },
	{ 0x88287630, "register_netdevice" },
	{ 0x56d691a8, "free_netdev" },
	{ 0x56470118, "__warn_printk" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x82879e15, "unregister_netdevice_queue" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0x550a028e, "gro_cells_init" },
	{ 0x32cd197c, "ip_route_output_flow" },
	{ 0xf04a650c, "dst_release" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x77cb69cc, "__dev_get_by_index" },
	{ 0x94a92c24, "l3mdev_master_upper_ifindex_by_index_rcu" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x777137ac, "dev_addr_mod" },
	{ 0x42e0bcc9, "netdev_state_change" },
	{ 0x182d39a9, "ns_capable" },
	{ 0x2b4e80dd, "dev_set_mtu" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe5590ebd, "init_net" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0x64f4c46e, "__pskb_pull_tail" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x1aa68030, "skb_scrub_packet" },
	{ 0x1d982a7d, "gro_cells_receive" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1f415566, "eth_type_trans" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xbca24e1e, "ip6_mtu" },
	{ 0x45a9787d, "icmpv6_ndo_send" },
	{ 0x5aa92454, "icmp_ndo_send" },
	{ 0x39374f5e, "ipv4_mtu" },
	{ 0x91e48d88, "pskb_expand_head" },
	{ 0xe5497da, "__skb_get_hash_net" },
	{ 0xd45cf84d, "dst_cache_get_ip4" },
	{ 0x4385eee8, "dst_cache_set_ip4" },
	{ 0xd4c6590e, "iptunnel_xmit" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x63db0b8c, "neigh_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

