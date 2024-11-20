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

KSYMTAB_FUNC(geneve_dev_create_fb, "_gpl", "");

SYMBOL_CRC(geneve_dev_create_fb, 0x1ef9a0f0, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0xcb5f73e8, "udp_tunnel_notify_del_rx_port" },
	{ 0x1f43ca7b, "udp_tunnel_sock_release" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x550a028e, "gro_cells_init" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0xe99714a6, "udp_tunnel_notify_add_rx_port" },
	{ 0x2efa4fd6, "setup_udp_tunnel_sock" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e7f0ccc, "rtnl_create_link" },
	{ 0x6acd4a1f, "rtnl_configure_link" },
	{ 0x56d691a8, "free_netdev" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x64f4c46e, "__pskb_pull_tail" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0x50242d10, "__iptunnel_pull_header" },
	{ 0x66628bf3, "ip_tunnel_metadata_cnt" },
	{ 0x1d982a7d, "gro_cells_receive" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x7e1dd234, "udp_tun_rx_dst" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x1f415566, "eth_type_trans" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x122c3a7e, "_printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x125aa384, "eth_gro_receive" },
	{ 0xa891b946, "gro_find_receive_by_type" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x90f5bf2a, "udp_tunnel_dst_lookup" },
	{ 0x6680605e, "udp_tunnel6_dst_lookup" },
	{ 0xe5497da, "__skb_get_hash_net" },
	{ 0xe065f55b, "consume_skb" },
	{ 0xdfa53dd, "skb_tunnel_check_pmtu" },
	{ 0xc9110e8f, "metadata_dst_alloc" },
	{ 0x3727f74a, "__netif_rx" },
	{ 0xfd4fbf9e, "udp_tunnel6_xmit_skb" },
	{ 0x20f84273, "ip6_dst_hoplimit" },
	{ 0xf6369320, "udp_tunnel_xmit_skb" },
	{ 0x5664c757, "__dynamic_netdev_dbg" },
	{ 0x70585b85, "metadata_dst_free" },
	{ 0x1464bd86, "ethtool_op_get_link" },
	{ 0xb9ffdc54, "eth_mac_addr" },
	{ 0xf6774a0b, "eth_validate_addr" },
	{ 0x22199426, "param_ops_bool" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x36cd5f26, "nla_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x1aa68030, "skb_scrub_packet" },
	{ 0x9e62cb44, "iptunnel_handle_offloads" },
	{ 0x91e48d88, "pskb_expand_head" },
	{ 0xf04a650c, "dst_release" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x16b80cb3, "eth_gro_complete" },
	{ 0xcd565b3a, "gro_find_complete_by_type" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe993cf6a, "udp_sock_create4" },
	{ 0xece4834d, "udp_sock_create6" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xc15d5e03, "ether_setup" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x777137ac, "dev_addr_mod" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x88287630, "register_netdevice" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x82879e15, "unregister_netdevice_queue" },
	{ 0x20548812, "register_pernet_subsys" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xc217dd22, "rtnl_link_register" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x279ed4c, "unregister_pernet_subsys" },
	{ 0xc708e35e, "udp_tunnel_push_rx_port" },
	{ 0x69c8db41, "udp_tunnel_drop_rx_port" },
	{ 0xc748bccf, "rtnl_link_unregister" },
	{ 0x57342c38, "rt6_lookup" },
	{ 0x32cd197c, "ip_route_output_flow" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "udp_tunnel,ip6_udp_tunnel");


MODULE_INFO(srcversion, "2F8AC577969ED4F3B431EF0");
