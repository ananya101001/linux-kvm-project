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

KSYMTAB_FUNC(ip6_tnl_parse_tlv_enc_lim, "", "");
KSYMTAB_FUNC(ip6_tnl_get_cap, "", "");
KSYMTAB_FUNC(ip6_tnl_rcv_ctl, "_gpl", "");
KSYMTAB_FUNC(ip6_tnl_rcv, "", "");
KSYMTAB_FUNC(ip6_tnl_xmit_ctl, "_gpl", "");
KSYMTAB_FUNC(ip6_tnl_xmit, "", "");
KSYMTAB_FUNC(ip6_tnl_change_mtu, "", "");
KSYMTAB_FUNC(ip6_tnl_get_iflink, "", "");
KSYMTAB_FUNC(ip6_tnl_encap_add_ops, "", "");
KSYMTAB_FUNC(ip6_tnl_encap_del_ops, "", "");
KSYMTAB_FUNC(ip6_tnl_encap_setup, "_gpl", "");
KSYMTAB_FUNC(ip6_tnl_get_link_net, "", "");

SYMBOL_CRC(ip6_tnl_parse_tlv_enc_lim, 0x09f65f07, "");
SYMBOL_CRC(ip6_tnl_get_cap, 0xf5a41ccc, "");
SYMBOL_CRC(ip6_tnl_rcv_ctl, 0xf07a2902, "_gpl");
SYMBOL_CRC(ip6_tnl_rcv, 0x5aea5ef2, "");
SYMBOL_CRC(ip6_tnl_xmit_ctl, 0x1ee3e64a, "_gpl");
SYMBOL_CRC(ip6_tnl_xmit, 0xd8db5ebd, "");
SYMBOL_CRC(ip6_tnl_change_mtu, 0x48759636, "");
SYMBOL_CRC(ip6_tnl_get_iflink, 0xedea1a24, "");
SYMBOL_CRC(ip6_tnl_encap_add_ops, 0x97e4a230, "");
SYMBOL_CRC(ip6_tnl_encap_del_ops, 0xe949876a, "");
SYMBOL_CRC(ip6_tnl_encap_setup, 0x97bba26c, "_gpl");
SYMBOL_CRC(ip6_tnl_get_link_net, 0xc0b9b347, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xada38766, "dst_cache_destroy" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0x550a028e, "gro_cells_init" },
	{ 0x78208bb1, "ip_tunnel_header_ops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0xe5590ebd, "init_net" },
	{ 0x1b6287cd, "alloc_netdev_mqs" },
	{ 0x2ec2bf40, "register_netdev" },
	{ 0xa916b694, "strnlen" },
	{ 0x56d691a8, "free_netdev" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xc748bccf, "rtnl_link_unregister" },
	{ 0x79d219c0, "__get_hash_from_flowi6" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0x452ba683, "ipv6_ext_hdr" },
	{ 0x64f4c46e, "__pskb_pull_tail" },
	{ 0x88287630, "register_netdevice" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3e903560, "ip_tunnel_netlink_encap_parms" },
	{ 0x42e0bcc9, "netdev_state_change" },
	{ 0x182d39a9, "ns_capable" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xc1f0e49d, "make_kuid" },
	{ 0xc53add22, "ip6_redirect" },
	{ 0x15a0849c, "ip6_update_pmtu" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x2cb8e6e0, "dst_cache_get" },
	{ 0x496e68b4, "ip6_route_output_flags" },
	{ 0x28bc0ec9, "xfrm_lookup" },
	{ 0xbca24e1e, "ip6_mtu" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x1aa68030, "skb_scrub_packet" },
	{ 0x9e24dbd0, "skb_realloc_headroom" },
	{ 0x9b2319ad, "skb_set_owner_w" },
	{ 0xe065f55b, "consume_skb" },
	{ 0x8171e183, "ipv6_push_frag_opts" },
	{ 0x6775c90f, "skb_push" },
	{ 0x36a8b5d0, "ip6_local_out" },
	{ 0x854562e6, "dst_cache_set_ip6" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x20f84273, "ip6_dst_hoplimit" },
	{ 0x39374f5e, "ipv4_mtu" },
	{ 0x2ad3e064, "ipv6_dev_get_saddr" },
	{ 0x63db0b8c, "neigh_destroy" },
	{ 0x9e62cb44, "iptunnel_handle_offloads" },
	{ 0x45a9787d, "icmpv6_ndo_send" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0x5aa92454, "icmp_ndo_send" },
	{ 0xa542eb90, "skb_clone" },
	{ 0x87400f82, "skb_pull" },
	{ 0xc50e9813, "icmp6_send" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0x1d982a7d, "gro_cells_receive" },
	{ 0x1f415566, "eth_type_trans" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x27df312f, "__xfrm_policy_check" },
	{ 0x50242d10, "__iptunnel_pull_header" },
	{ 0xc9110e8f, "metadata_dst_alloc" },
	{ 0x32cd197c, "ip_route_output_flow" },
	{ 0x305e018b, "ip_route_input_noref" },
	{ 0x920ed655, "__icmp_send" },
	{ 0x33338211, "rcuref_get_slowpath" },
	{ 0x6f379e5c, "dev_get_tstats64" },
	{ 0x22199426, "param_ops_bool" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd38f57df, "ip6tun_encaps" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xfb746126, "ipv6_chk_addr_and_flags" },
	{ 0x55d5f0df, "dev_get_by_index_rcu" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0xa47c4028, "register_pernet_device" },
	{ 0x51b137c7, "xfrm6_tunnel_register" },
	{ 0xc217dd22, "rtnl_link_register" },
	{ 0x86512576, "unregister_pernet_device" },
	{ 0xa7c24025, "xfrm6_tunnel_deregister" },
	{ 0x36cd5f26, "nla_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x82879e15, "unregister_netdevice_queue" },
	{ 0x777137ac, "dev_addr_mod" },
	{ 0x57342c38, "rt6_lookup" },
	{ 0xf04a650c, "dst_release" },
	{ 0x77cb69cc, "__dev_get_by_index" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "tunnel6");

