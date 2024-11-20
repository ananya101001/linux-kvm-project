#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(gretap_fb_dev_create, "_gpl", "");

SYMBOL_CRC(gretap_fb_dev_create, 0x9eebf073, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe5497da, "__skb_get_hash_net" },
	{ 0x920ed655, "__icmp_send" },
	{ 0x64f4c46e, "__pskb_pull_tail" },
	{ 0x9e62cb44, "iptunnel_handle_offloads" },
	{ 0xb04e071c, "ip_md_tunnel_xmit" },
	{ 0x91e48d88, "pskb_expand_head" },
	{ 0x87400f82, "skb_pull" },
	{ 0x777137ac, "dev_addr_mod" },
	{ 0xc06fc1a5, "ip_tunnel_ctl" },
	{ 0x36cd5f26, "nla_put" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x69da51b6, "___pskb_trim" },
	{ 0x6425da09, "ip_tunnel_get_link_net" },
	{ 0xdf648ac6, "ip_tunnel_uninit" },
	{ 0xb9ffdc54, "eth_mac_addr" },
	{ 0xf6774a0b, "eth_validate_addr" },
	{ 0xa7b6fe0e, "ip_tunnel_change_mtu" },
	{ 0x6f379e5c, "dev_get_tstats64" },
	{ 0x959e330f, "ip_tunnel_get_iflink" },
	{ 0x9885d36b, "ip_tunnel_siocdevprivate" },
	{ 0x22199426, "param_ops_bool" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa4962bb, "ip_tunnel_encap_setup" },
	{ 0xc15d5e03, "ether_setup" },
	{ 0xf6991549, "ip_tunnel_setup" },
	{ 0x24a94c0f, "ip_tunnel_init" },
	{ 0x122c3a7e, "_printk" },
	{ 0xa47c4028, "register_pernet_device" },
	{ 0xe8a6d928, "gre_add_protocol" },
	{ 0xc217dd22, "rtnl_link_register" },
	{ 0xc748bccf, "rtnl_link_unregister" },
	{ 0xc2eedcbe, "gre_del_protocol" },
	{ 0x86512576, "unregister_pernet_device" },
	{ 0x6775c90f, "skb_push" },
	{ 0x32cd197c, "ip_route_output_flow" },
	{ 0xf04a650c, "dst_release" },
	{ 0xd4364617, "ip_mc_inc_group" },
	{ 0xa7940a10, "ip_tunnel_delete_nets" },
	{ 0x5067a180, "ip_tunnel_init_net" },
	{ 0x47706fc4, "inetdev_by_index" },
	{ 0x352f7125, "__ip_mc_dec_group" },
	{ 0x18defab2, "ip_tunnel_newlink" },
	{ 0x2e7f0ccc, "rtnl_create_link" },
	{ 0xb38d6179, "__ip_tunnel_change_mtu" },
	{ 0xe2807159, "ip_tunnel_dellink" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x6acd4a1f, "rtnl_configure_link" },
	{ 0x56d691a8, "free_netdev" },
	{ 0xe289201b, "gre_parse_header" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8e6b6525, "ip_tunnel_lookup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5e31881f, "ipv4_update_pmtu" },
	{ 0xd390b3fe, "ipv4_redirect" },
	{ 0xeb128899, "ip6_err_gen_icmpv6_unreach" },
	{ 0xb27b21fd, "ip_tunnel_changelink" },
	{ 0xc9110e8f, "metadata_dst_alloc" },
	{ 0x50242d10, "__iptunnel_pull_header" },
	{ 0x3267a22d, "ip_tunnel_rcv" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xaccd7dc4, "ip_tunnel_xmit" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "ip_tunnel,gre");

