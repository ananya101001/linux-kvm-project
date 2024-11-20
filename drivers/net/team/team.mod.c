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

KSYMTAB_FUNC(team_modeop_port_enter, "", "");
KSYMTAB_FUNC(team_modeop_port_change_dev_addr, "", "");
KSYMTAB_FUNC(team_options_register, "", "");
KSYMTAB_FUNC(team_options_unregister, "", "");
KSYMTAB_FUNC(team_option_inst_set_change, "", "");
KSYMTAB_FUNC(team_options_change_check, "", "");
KSYMTAB_FUNC(team_mode_register, "", "");
KSYMTAB_FUNC(team_mode_unregister, "", "");

SYMBOL_CRC(team_modeop_port_enter, 0x17e9a207, "");
SYMBOL_CRC(team_modeop_port_change_dev_addr, 0x1e5244ba, "");
SYMBOL_CRC(team_options_register, 0xa218d0e8, "");
SYMBOL_CRC(team_options_unregister, 0x9cd24fb5, "");
SYMBOL_CRC(team_option_inst_set_change, 0x18f0d616, "");
SYMBOL_CRC(team_options_change_check, 0x5371510f, "");
SYMBOL_CRC(team_mode_register, 0x96d32a35, "");
SYMBOL_CRC(team_mode_unregister, 0x2b5b320f, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xde7c5c3f, "netdev_has_upper_dev" },
	{ 0x2c877f78, "netdev_change_features" },
	{ 0xd90175d4, "netdev_lower_state_changed" },
	{ 0xd1c27b23, "netdev_master_upper_dev_link" },
	{ 0x1e551f58, "vlan_vids_add_by_dev" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd6e5a44c, "skb_trim" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x5664c757, "__dynamic_netdev_dbg" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xe37056dc, "pv_ops" },
	{ 0xf85b4ed1, "vlan_vids_del_by_dev" },
	{ 0xc4de1936, "__netpoll_setup" },
	{ 0x523d13e7, "__dev_queue_xmit" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x8cf8af2a, "vlan_vid_add" },
	{ 0xc25d94c1, "pcpu_alloc_noprof" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa2d5d276, "call_netdevice_notifiers" },
	{ 0x35def37, "vlan_vid_del" },
	{ 0x6c138d60, "dev_set_allmulti" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0x973881cc, "netif_carrier_off" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xa542eb90, "skb_clone" },
	{ 0xd08685ce, "netif_carrier_on" },
	{ 0x51216e30, "vlan_uses_dev" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xd87d68eb, "netdev_rx_handler_register" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0x67041673, "genl_unregister_family" },
	{ 0x7b494151, "dev_disable_lro" },
	{ 0x754d539c, "strlen" },
	{ 0x1c8d9b8e, "dev_kfree_skb_any_reason" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xb40cf2be, "dev_mc_unsync" },
	{ 0x3facf125, "genl_register_family" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd4ec10e6, "BUG_func" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xbd9af465, "netdev_info" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1d256e4f, "dev_mc_sync_multiple" },
	{ 0x88287630, "register_netdevice" },
	{ 0x2b4e80dd, "dev_set_mtu" },
	{ 0x1f7fdb27, "try_module_get" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x7ef38e38, "__nlmsg_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xe065f55b, "consume_skb" },
	{ 0x57dfe23f, "__netpoll_free" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x70f3d0e7, "netpoll_send_skb" },
	{ 0xc217dd22, "rtnl_link_register" },
	{ 0xc61ff876, "genlmsg_put" },
	{ 0xcce9bcc0, "dev_uc_sync_multiple" },
	{ 0x37a0cba, "kfree" },
	{ 0xad01da46, "dev_set_promiscuity" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x651fd1a4, "netdev_warn" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xfccdc35c, "dev_uc_unsync" },
	{ 0xc15d5e03, "ether_setup" },
	{ 0xbc431e3c, "netlink_broadcast_filtered" },
	{ 0x113ed675, "netdev_err" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x777137ac, "dev_addr_mod" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x25145d1f, "passthru_features_check" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xb80be06, "netdev_rx_handler_unregister" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x1f4733b3, "__alloc_skb" },
	{ 0x7f1fd79f, "module_put" },
	{ 0x9c3c932c, "dev_uc_flush" },
	{ 0xc7468da6, "dev_open" },
	{ 0xc748bccf, "rtnl_link_unregister" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xd0449662, "dev_mc_flush" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0xe8255b35, "netlink_unicast" },
	{ 0xf4f14de6, "rtnl_trylock" },
	{ 0x19e2cc40, "dev_get_by_index" },
	{ 0xe740790b, "dev_close" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x6551c12f, "netdev_upper_dev_unlink" },
	{ 0x36cd5f26, "nla_put" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x1464bd86, "ethtool_op_get_link" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x70a09e5e, "__ethtool_get_link_ksettings" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x11089ac7, "_ctype" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x850ccda7, "dev_set_mac_address" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

