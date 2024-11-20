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

KSYMTAB_FUNC(macvlan_common_setup, "_gpl", "");
KSYMTAB_FUNC(macvlan_common_newlink, "_gpl", "");
KSYMTAB_FUNC(macvlan_dellink, "_gpl", "");
KSYMTAB_FUNC(macvlan_link_register, "_gpl", "");

SYMBOL_CRC(macvlan_common_setup, 0xd5f7d3b8, "_gpl");
SYMBOL_CRC(macvlan_common_newlink, 0x3cddee16, "_gpl");
SYMBOL_CRC(macvlan_dellink, 0x84b11e88, "_gpl");
SYMBOL_CRC(macvlan_link_register, 0x72cac600, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x777137ac, "dev_addr_mod" },
	{ 0x681d3773, "dev_uc_add" },
	{ 0xa2d5d276, "call_netdevice_notifiers" },
	{ 0x390d57cf, "netdev_update_features" },
	{ 0x7ac2d08d, "netif_stacked_transfer_operstate" },
	{ 0x2b4e80dd, "dev_set_mtu" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x77cb69cc, "__dev_get_by_index" },
	{ 0x325ff2fd, "netdev_is_rx_handler_busy" },
	{ 0xd87d68eb, "netdev_rx_handler_register" },
	{ 0x88287630, "register_netdevice" },
	{ 0x94b3cca2, "netdev_upper_dev_link" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x9b4af65a, "linkwatch_fire_event" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x82879e15, "unregister_netdevice_queue" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x6551c12f, "netdev_upper_dev_unlink" },
	{ 0x6335dfe9, "netif_rx" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xa542eb90, "skb_clone" },
	{ 0xa9b48314, "__dev_forward_skb" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xe065f55b, "consume_skb" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0xe37056dc, "pv_ops" },
	{ 0xd4ec10e6, "BUG_func" },
	{ 0x523d13e7, "__dev_queue_xmit" },
	{ 0xcb5ef587, "dev_forward_skb" },
	{ 0x70f3d0e7, "netpoll_send_skb" },
	{ 0x3727f74a, "__netif_rx" },
	{ 0x57e6a403, "ip_check_defrag" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd4c14632, "system_unbound_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xc479b7cf, "netdev_core_stats_inc" },
	{ 0x25145d1f, "passthru_features_check" },
	{ 0xf6774a0b, "eth_validate_addr" },
	{ 0xb0791d6b, "ndo_dflt_fdb_dump" },
	{ 0x1464bd86, "ethtool_op_get_link" },
	{ 0x25d60bc3, "eth_header_parse" },
	{ 0x9c7d0b39, "eth_header_cache" },
	{ 0xaf78866f, "eth_header_cache_update" },
	{ 0x812e093e, "eth_header_parse_protocol" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xc15d5e03, "ether_setup" },
	{ 0x70a09e5e, "__ethtool_get_link_ksettings" },
	{ 0x540aaac, "ethtool_get_ts_info_by_layer" },
	{ 0xe5590ebd, "init_net" },
	{ 0x6b420db9, "generic_hwtstamp_set_lower" },
	{ 0x6a55556a, "generic_hwtstamp_get_lower" },
	{ 0xd3a4257, "dev_mc_del" },
	{ 0x7e3debf0, "dev_uc_del" },
	{ 0x5b602469, "dev_mc_add_excl" },
	{ 0xa8590dd0, "dev_uc_add_excl" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0x57dfe23f, "__netpoll_free" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x35def37, "vlan_vid_del" },
	{ 0x8cf8af2a, "vlan_vid_add" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x57b6140f, "dev_uc_sync" },
	{ 0x8c093088, "dev_mc_sync" },
	{ 0x6c138d60, "dev_set_allmulti" },
	{ 0xad01da46, "dev_set_promiscuity" },
	{ 0xfccdc35c, "dev_uc_unsync" },
	{ 0xb40cf2be, "dev_mc_unsync" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xb80be06, "netdev_rx_handler_unregister" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0x37a0cba, "kfree" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x850ccda7, "dev_set_mac_address" },
	{ 0x73a6c00c, "netif_inherit_tso_max" },
	{ 0xc25d94c1, "pcpu_alloc_noprof" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xc217dd22, "rtnl_link_register" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc748bccf, "rtnl_link_unregister" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x36cd5f26, "nla_put" },
	{ 0xc4de1936, "__netpoll_setup" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

