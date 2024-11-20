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
	{ 0x50242d10, "__iptunnel_pull_header" },
	{ 0xc9110e8f, "metadata_dst_alloc" },
	{ 0x5aea5ef2, "ip6_tnl_rcv" },
	{ 0x64f4c46e, "__pskb_pull_tail" },
	{ 0xc50e9813, "icmp6_send" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0x1ee3e64a, "ip6_tnl_xmit_ctl" },
	{ 0x9e62cb44, "iptunnel_handle_offloads" },
	{ 0x5aa92454, "icmp_ndo_send" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x182d39a9, "ns_capable" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x42e0bcc9, "netdev_state_change" },
	{ 0x36cd5f26, "nla_put" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x69da51b6, "___pskb_trim" },
	{ 0xbca24e1e, "ip6_mtu" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x39374f5e, "ipv4_mtu" },
	{ 0xb9ffdc54, "eth_mac_addr" },
	{ 0xf6774a0b, "eth_validate_addr" },
	{ 0xedea1a24, "ip6_tnl_get_iflink" },
	{ 0xc0b9b347, "ip6_tnl_get_link_net" },
	{ 0x22199426, "param_ops_bool" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x122c3a7e, "_printk" },
	{ 0xa47c4028, "register_pernet_device" },
	{ 0x15aa1a9a, "inet6_add_protocol" },
	{ 0xc217dd22, "rtnl_link_register" },
	{ 0xc748bccf, "rtnl_link_unregister" },
	{ 0x3c079b00, "inet6_del_protocol" },
	{ 0x86512576, "unregister_pernet_device" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x82879e15, "unregister_netdevice_queue" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x777137ac, "dev_addr_mod" },
	{ 0xf5a41ccc, "ip6_tnl_get_cap" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x57342c38, "rt6_lookup" },
	{ 0xf04a650c, "dst_release" },
	{ 0xc15d5e03, "ether_setup" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0xe5590ebd, "init_net" },
	{ 0x1b6287cd, "alloc_netdev_mqs" },
	{ 0xa916b694, "strnlen" },
	{ 0x2ec2bf40, "register_netdev" },
	{ 0x56d691a8, "free_netdev" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x6775c90f, "skb_push" },
	{ 0x79d219c0, "__get_hash_from_flowi6" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0x550a028e, "gro_cells_init" },
	{ 0x97bba26c, "ip6_tnl_encap_setup" },
	{ 0x88287630, "register_netdevice" },
	{ 0x48759636, "ip6_tnl_change_mtu" },
	{ 0xc1f0e49d, "make_kuid" },
	{ 0xd8db5ebd, "ip6_tnl_xmit" },
	{ 0x91e48d88, "pskb_expand_head" },
	{ 0x9f65f07, "ip6_tnl_parse_tlv_enc_lim" },
	{ 0x45a9787d, "icmpv6_ndo_send" },
	{ 0xe289201b, "gre_parse_header" },
	{ 0xc53add22, "ip6_redirect" },
	{ 0x15a0849c, "ip6_update_pmtu" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "ip6_tunnel,gre");

