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



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x122c3a7e, "_printk" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc1f0e49d, "make_kuid" },
	{ 0x496e68b4, "ip6_route_output_flags" },
	{ 0x12ab144e, "ip_route_output_key_hash" },
	{ 0x45a9787d, "icmpv6_ndo_send" },
	{ 0x582b6275, "xfrm_if_unregister_cb" },
	{ 0x33338211, "rcuref_get_slowpath" },
	{ 0x77cb69cc, "__dev_get_by_index" },
	{ 0xc748bccf, "rtnl_link_unregister" },
	{ 0x8e1e4814, "xfrm6_tunnel_spi_lookup" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xbca24e1e, "ip6_mtu" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0x55d5f0df, "dev_get_by_index_rcu" },
	{ 0x5aa92454, "icmp_ndo_send" },
	{ 0x2c15205, "xfrm_input" },
	{ 0x36cd5f26, "nla_put" },
	{ 0x86512576, "unregister_pernet_device" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6f379e5c, "dev_get_tstats64" },
	{ 0xc53add22, "ip6_redirect" },
	{ 0xaa14b530, "lwtunnel_state_alloc" },
	{ 0x8f90c1f7, "xfrm_if_register_cb" },
	{ 0x39374f5e, "ipv4_mtu" },
	{ 0x56470118, "__warn_printk" },
	{ 0xbbd24cc4, "xfrm4_protocol_deregister" },
	{ 0x5e31881f, "ipv4_update_pmtu" },
	{ 0xc9110e8f, "metadata_dst_alloc" },
	{ 0xf04a650c, "dst_release" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xd075fb82, "lwtunnel_encap_add_ops" },
	{ 0xa47c4028, "register_pernet_device" },
	{ 0x3d51190f, "lwtunnel_encap_del_ops" },
	{ 0xa7c24025, "xfrm6_tunnel_deregister" },
	{ 0x8ca2c32c, "xfrm4_tunnel_deregister" },
	{ 0x75a81d11, "xfrm6_protocol_register" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x88287630, "register_netdevice" },
	{ 0x638b7fff, "xfrm6_protocol_deregister" },
	{ 0x39b0d0ba, "xfrm6_rcv" },
	{ 0x51b137c7, "xfrm6_tunnel_register" },
	{ 0xdc08523f, "skb_gso_validate_network_len" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xd0ba7f1e, "ip_output" },
	{ 0x1ffb1ee2, "xfrm4_tunnel_register" },
	{ 0x7f4bb9ca, "__xfrm_decode_session" },
	{ 0x99224b11, "__skb_ext_del" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xc217dd22, "rtnl_link_register" },
	{ 0x78208bb1, "ip_tunnel_header_ops" },
	{ 0x98942be5, "xfrm_state_lookup" },
	{ 0xb3a71347, "ip6_output" },
	{ 0x27df312f, "__xfrm_policy_check" },
	{ 0x550a028e, "gro_cells_init" },
	{ 0x1eecd435, "xfrm4_protocol_register" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x3d5aab09, "xfrm6_rcv_spi" },
	{ 0x82879e15, "unregister_netdevice_queue" },
	{ 0x1a2f1c91, "xfrm4_rcv" },
	{ 0xaecd4a1b, "__xfrm_state_destroy" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0x42e0bcc9, "netdev_state_change" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x15a0849c, "ip6_update_pmtu" },
	{ 0x777137ac, "dev_addr_mod" },
	{ 0xe32db948, "xfrm_lookup_with_ifid" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xd390b3fe, "ipv4_redirect" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "xfrm6_tunnel,tunnel6,tunnel4");

