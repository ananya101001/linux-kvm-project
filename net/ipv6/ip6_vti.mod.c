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
	{ 0xa916b694, "strnlen" },
	{ 0x56d691a8, "free_netdev" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xc748bccf, "rtnl_link_unregister" },
	{ 0x7f4bb9ca, "__xfrm_decode_session" },
	{ 0x496e68b4, "ip6_route_output_flags" },
	{ 0x1d47d6fb, "xfrm_lookup_route" },
	{ 0x1ee3e64a, "ip6_tnl_xmit_ctl" },
	{ 0xbca24e1e, "ip6_mtu" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5aa92454, "icmp_ndo_send" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0x64f4c46e, "__pskb_pull_tail" },
	{ 0x12ab144e, "ip_route_output_key_hash" },
	{ 0x1aa68030, "skb_scrub_packet" },
	{ 0xb3a71347, "ip6_output" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x33338211, "rcuref_get_slowpath" },
	{ 0xd0ba7f1e, "ip_output" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x39374f5e, "ipv4_mtu" },
	{ 0x45a9787d, "icmpv6_ndo_send" },
	{ 0x27df312f, "__xfrm_policy_check" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x88287630, "register_netdevice" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x42e0bcc9, "netdev_state_change" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x182d39a9, "ns_capable" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x98942be5, "xfrm_state_lookup" },
	{ 0xc1f0e49d, "make_kuid" },
	{ 0x15a0849c, "ip6_update_pmtu" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc53add22, "ip6_redirect" },
	{ 0xaecd4a1b, "__xfrm_state_destroy" },
	{ 0xf07a2902, "ip6_tnl_rcv_ctl" },
	{ 0x2c15205, "xfrm_input" },
	{ 0x8e1e4814, "xfrm6_tunnel_spi_lookup" },
	{ 0xedea1a24, "ip6_tnl_get_iflink" },
	{ 0xc0b9b347, "ip6_tnl_get_link_net" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xa47c4028, "register_pernet_device" },
	{ 0x75a81d11, "xfrm6_protocol_register" },
	{ 0x51b137c7, "xfrm6_tunnel_register" },
	{ 0xc217dd22, "rtnl_link_register" },
	{ 0xa7c24025, "xfrm6_tunnel_deregister" },
	{ 0x638b7fff, "xfrm6_protocol_deregister" },
	{ 0x86512576, "unregister_pernet_device" },
	{ 0x122c3a7e, "_printk" },
	{ 0x36cd5f26, "nla_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x82879e15, "unregister_netdevice_queue" },
	{ 0x777137ac, "dev_addr_mod" },
	{ 0xf5a41ccc, "ip6_tnl_get_cap" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x57342c38, "rt6_lookup" },
	{ 0xf04a650c, "dst_release" },
	{ 0x77cb69cc, "__dev_get_by_index" },
	{ 0x78208bb1, "ip_tunnel_header_ops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0xe5590ebd, "init_net" },
	{ 0x1b6287cd, "alloc_netdev_mqs" },
	{ 0x2ec2bf40, "register_netdev" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "ip6_tunnel,xfrm6_tunnel,tunnel6");

