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

KSYMTAB_FUNC(ipvlan_count_rx, "_gpl", "");
KSYMTAB_FUNC(ipvlan_link_new, "_gpl", "");
KSYMTAB_FUNC(ipvlan_link_delete, "_gpl", "");
KSYMTAB_FUNC(ipvlan_link_setup, "_gpl", "");
KSYMTAB_FUNC(ipvlan_link_register, "_gpl", "");

SYMBOL_CRC(ipvlan_count_rx, 0xe55c4f13, "_gpl");
SYMBOL_CRC(ipvlan_link_new, 0x261079b3, "_gpl");
SYMBOL_CRC(ipvlan_link_delete, 0x06e62f1c, "_gpl");
SYMBOL_CRC(ipvlan_link_setup, 0x6d64943f, "_gpl");
SYMBOL_CRC(ipvlan_link_register, 0xe6393c04, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x25d60bc3, "eth_header_parse" },
	{ 0xb80be06, "netdev_rx_handler_unregister" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xaf78866f, "eth_header_cache_update" },
	{ 0x380ce666, "nf_register_net_hooks" },
	{ 0x496e68b4, "ip6_route_output_flags" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0x305e018b, "ip_route_input_noref" },
	{ 0x77cb69cc, "__dev_get_by_index" },
	{ 0xc748bccf, "rtnl_link_unregister" },
	{ 0x87400f82, "skb_pull" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0x7ac2d08d, "netif_stacked_transfer_operstate" },
	{ 0x6551c12f, "netdev_upper_dev_unlink" },
	{ 0x36cd5f26, "nla_put" },
	{ 0xffb7c514, "ida_free" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x182d39a9, "ns_capable" },
	{ 0x7d511f68, "nf_unregister_net_hooks" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x1464bd86, "ethtool_op_get_link" },
	{ 0x70a09e5e, "__ethtool_get_link_ksettings" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x279ed4c, "unregister_pernet_subsys" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x64f4c46e, "__pskb_pull_tail" },
	{ 0x6335dfe9, "netif_rx" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x1aa68030, "skb_scrub_packet" },
	{ 0x47c65bfc, "unregister_inet6addr_validator_notifier" },
	{ 0x523d13e7, "__dev_queue_xmit" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x8cf8af2a, "vlan_vid_add" },
	{ 0xc25d94c1, "pcpu_alloc_noprof" },
	{ 0xa2d5d276, "call_netdevice_notifiers" },
	{ 0x35def37, "vlan_vid_del" },
	{ 0x6c138d60, "dev_set_allmulti" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xa542eb90, "skb_clone" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xf04a650c, "dst_release" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0xd87d68eb, "netdev_rx_handler_register" },
	{ 0xab63baa5, "unregister_inetaddr_validator_notifier" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x660e27f2, "ip_local_out" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x812e093e, "eth_header_parse_protocol" },
	{ 0xc32c71af, "register_inetaddr_validator_notifier" },
	{ 0xb40cf2be, "dev_mc_unsync" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xbabd7d63, "dev_change_flags" },
	{ 0xc479b7cf, "netdev_core_stats_inc" },
	{ 0xcb5ef587, "dev_forward_skb" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x18e60984, "__do_once_start" },
	{ 0xa77bfd29, "register_inet6addr_validator_notifier" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x88287630, "register_netdevice" },
	{ 0x453ca149, "__do_once_done" },
	{ 0xfa2b0e9d, "ip6_route_input_lookup" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0xa44c211e, "dev_pre_changeaddr_notify" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x8c093088, "dev_mc_sync" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x325ff2fd, "netdev_is_rx_handler_busy" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x390d57cf, "netdev_update_features" },
	{ 0xe065f55b, "consume_skb" },
	{ 0x36a8b5d0, "ip6_local_out" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x57b6140f, "dev_uc_sync" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xc217dd22, "rtnl_link_register" },
	{ 0x73a6c00c, "netif_inherit_tso_max" },
	{ 0x9c7d0b39, "eth_header_cache" },
	{ 0x37a0cba, "kfree" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x32cd197c, "ip_route_output_flow" },
	{ 0x82879e15, "unregister_netdevice_queue" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xfccdc35c, "dev_uc_unsync" },
	{ 0xc15d5e03, "ether_setup" },
	{ 0x113ed675, "netdev_err" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x94b3cca2, "netdev_upper_dev_link" },
	{ 0x20548812, "register_pernet_subsys" },
	{ 0x777137ac, "dev_addr_mod" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

