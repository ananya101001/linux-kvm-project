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
	{ 0x5067a180, "ip_tunnel_init_net" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x7f4bb9ca, "__xfrm_decode_session" },
	{ 0x496e68b4, "ip6_route_output_flags" },
	{ 0x1d47d6fb, "xfrm_lookup_route" },
	{ 0xf04a650c, "dst_release" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0x1aa68030, "skb_scrub_packet" },
	{ 0xb3a71347, "ip6_output" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x12ab144e, "ip_route_output_key_hash" },
	{ 0x64f4c46e, "__pskb_pull_tail" },
	{ 0xbca24e1e, "ip6_mtu" },
	{ 0x5aa92454, "icmp_ndo_send" },
	{ 0x33338211, "rcuref_get_slowpath" },
	{ 0xd0ba7f1e, "ip_output" },
	{ 0x45a9787d, "icmpv6_ndo_send" },
	{ 0x39374f5e, "ipv4_mtu" },
	{ 0x8e6b6525, "ip_tunnel_lookup" },
	{ 0x98942be5, "xfrm_state_lookup" },
	{ 0xd390b3fe, "ipv4_redirect" },
	{ 0xaecd4a1b, "__xfrm_state_destroy" },
	{ 0x5e31881f, "ipv4_update_pmtu" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x27df312f, "__xfrm_policy_check" },
	{ 0x2c15205, "xfrm_input" },
	{ 0xc06fc1a5, "ip_tunnel_ctl" },
	{ 0x18defab2, "ip_tunnel_newlink" },
	{ 0xdf648ac6, "ip_tunnel_uninit" },
	{ 0x9885d36b, "ip_tunnel_siocdevprivate" },
	{ 0xa7b6fe0e, "ip_tunnel_change_mtu" },
	{ 0x6f379e5c, "dev_get_tstats64" },
	{ 0x959e330f, "ip_tunnel_get_iflink" },
	{ 0xe2807159, "ip_tunnel_dellink" },
	{ 0x6425da09, "ip_tunnel_get_link_net" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x122c3a7e, "_printk" },
	{ 0xa47c4028, "register_pernet_device" },
	{ 0x1eecd435, "xfrm4_protocol_register" },
	{ 0x1ffb1ee2, "xfrm4_tunnel_register" },
	{ 0xc217dd22, "rtnl_link_register" },
	{ 0x8ca2c32c, "xfrm4_tunnel_deregister" },
	{ 0xbbd24cc4, "xfrm4_protocol_deregister" },
	{ 0x86512576, "unregister_pernet_device" },
	{ 0x36cd5f26, "nla_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb27b21fd, "ip_tunnel_changelink" },
	{ 0x78208bb1, "ip_tunnel_header_ops" },
	{ 0xf6991549, "ip_tunnel_setup" },
	{ 0x777137ac, "dev_addr_mod" },
	{ 0x24a94c0f, "ip_tunnel_init" },
	{ 0xa7940a10, "ip_tunnel_delete_nets" },
	{ 0xc748bccf, "rtnl_link_unregister" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "ip_tunnel,tunnel4");

