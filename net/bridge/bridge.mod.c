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

KSYMTAB_DATA(nf_br_ops, "_gpl", "");
KSYMTAB_FUNC(br_fdb_find_port, "_gpl", "");
KSYMTAB_FUNC(br_fdb_clear_offload, "_gpl", "");
KSYMTAB_FUNC(br_dev_queue_push_xmit, "_gpl", "");
KSYMTAB_FUNC(br_forward_finish, "_gpl", "");
KSYMTAB_FUNC(br_forward, "_gpl", "");
KSYMTAB_FUNC(br_port_flag_is_set, "_gpl", "");
KSYMTAB_FUNC(br_handle_frame_finish, "_gpl", "");
KSYMTAB_FUNC(br_port_get_stp_state, "_gpl", "");
KSYMTAB_FUNC(br_get_ageing_time, "_gpl", "");
KSYMTAB_FUNC(br_multicast_enabled, "_gpl", "");
KSYMTAB_FUNC(br_multicast_router, "_gpl", "");
KSYMTAB_FUNC(br_multicast_list_adjacent, "_gpl", "");
KSYMTAB_FUNC(br_multicast_has_querier_anywhere, "_gpl", "");
KSYMTAB_FUNC(br_multicast_has_querier_adjacent, "_gpl", "");
KSYMTAB_FUNC(br_multicast_has_router_adjacent, "_gpl", "");
KSYMTAB_FUNC(br_vlan_enabled, "_gpl", "");
KSYMTAB_FUNC(br_vlan_get_proto, "_gpl", "");
KSYMTAB_FUNC(br_vlan_get_pvid, "_gpl", "");
KSYMTAB_FUNC(br_vlan_get_pvid_rcu, "_gpl", "");
KSYMTAB_FUNC(br_vlan_get_info, "_gpl", "");
KSYMTAB_FUNC(br_vlan_get_info_rcu, "_gpl", "");
KSYMTAB_FUNC(br_mst_enabled, "_gpl", "");
KSYMTAB_FUNC(br_mst_get_info, "_gpl", "");
KSYMTAB_FUNC(br_mst_get_state, "_gpl", "");

SYMBOL_CRC(nf_br_ops, 0x4b2b2734, "_gpl");
SYMBOL_CRC(br_fdb_find_port, 0x80418e2c, "_gpl");
SYMBOL_CRC(br_fdb_clear_offload, 0x6ef5895f, "_gpl");
SYMBOL_CRC(br_dev_queue_push_xmit, 0xed781b3e, "_gpl");
SYMBOL_CRC(br_forward_finish, 0x7fe35934, "_gpl");
SYMBOL_CRC(br_forward, 0x38e082ba, "_gpl");
SYMBOL_CRC(br_port_flag_is_set, 0xbe79cef6, "_gpl");
SYMBOL_CRC(br_handle_frame_finish, 0x9f3ea012, "_gpl");
SYMBOL_CRC(br_port_get_stp_state, 0x9ed4bfb9, "_gpl");
SYMBOL_CRC(br_get_ageing_time, 0xbc3c109b, "_gpl");
SYMBOL_CRC(br_multicast_enabled, 0x991541f1, "_gpl");
SYMBOL_CRC(br_multicast_router, 0x8c3ec2bf, "_gpl");
SYMBOL_CRC(br_multicast_list_adjacent, 0xcb74f177, "_gpl");
SYMBOL_CRC(br_multicast_has_querier_anywhere, 0xee039780, "_gpl");
SYMBOL_CRC(br_multicast_has_querier_adjacent, 0xbe9ee776, "_gpl");
SYMBOL_CRC(br_multicast_has_router_adjacent, 0xb011346e, "_gpl");
SYMBOL_CRC(br_vlan_enabled, 0xf9bef16d, "_gpl");
SYMBOL_CRC(br_vlan_get_proto, 0x70ff70b2, "_gpl");
SYMBOL_CRC(br_vlan_get_pvid, 0xa6ce4c45, "_gpl");
SYMBOL_CRC(br_vlan_get_pvid_rcu, 0x4e9cb30d, "_gpl");
SYMBOL_CRC(br_vlan_get_info, 0x70f481e3, "_gpl");
SYMBOL_CRC(br_vlan_get_info_rcu, 0x0c66d56e, "_gpl");
SYMBOL_CRC(br_mst_enabled, 0xd98f33fb, "_gpl");
SYMBOL_CRC(br_mst_get_info, 0x0c8b0684, "_gpl");
SYMBOL_CRC(br_mst_get_state, 0xf3668f61, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x523d13e7, "__dev_queue_xmit" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x8cf8af2a, "vlan_vid_add" },
	{ 0x63db0b8c, "neigh_destroy" },
	{ 0x69559fd8, "__tracepoint_br_fdb_external_learn_add" },
	{ 0xc25d94c1, "pcpu_alloc_noprof" },
	{ 0xf24e5dec, "kobject_del" },
	{ 0x28839c12, "rhashtable_init_noprof" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2d44be3b, "__SCT__tp_func_br_fdb_add" },
	{ 0x5b25a00f, "__SCK__tp_func_br_fdb_update" },
	{ 0xa2d5d276, "call_netdevice_notifiers" },
	{ 0x2d3d2669, "is_skb_forwardable" },
	{ 0x35def37, "vlan_vid_del" },
	{ 0x6c138d60, "dev_set_allmulti" },
	{ 0xd73dd5a5, "net_ns_get_ownership" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x79b6649b, "netdev_master_upper_dev_get" },
	{ 0x31d7c8e5, "ipv6_dev_mc_inc" },
	{ 0x857c1f58, "rtnl_notify" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0x973881cc, "netif_carrier_off" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x38f209a3, "__vlan_find_dev_deep_rcu" },
	{ 0x5089f45f, "ip_send_check" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xa542eb90, "skb_clone" },
	{ 0x6964113c, "__SCK__tp_func_br_fdb_external_learn_add" },
	{ 0xc9110e8f, "metadata_dst_alloc" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xf04a650c, "dst_release" },
	{ 0xd08685ce, "netif_carrier_on" },
	{ 0xaedb2a25, "kobject_uevent" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x76b64028, "arp_tbl" },
	{ 0xb9426fe0, "ipv6_dev_mc_dec" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xd87d68eb, "netdev_rx_handler_register" },
	{ 0x681d3773, "dev_uc_add" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xc68c5134, "netif_set_tso_max_size" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0x7b494151, "dev_disable_lro" },
	{ 0x55c28c9f, "ipv6_chk_addr" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x687d062a, "dev_get_flags" },
	{ 0x49585b97, "__rtnl_unregister_many" },
	{ 0x754d539c, "strlen" },
	{ 0x1c8d9b8e, "dev_kfree_skb_any_reason" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xddd7e768, "netdev_notice" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x3d15a3ab, "nf_queue" },
	{ 0x20eadeb6, "ip_compute_csum" },
	{ 0xabec15d7, "netif_set_tso_max_segs" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x349cba85, "strchr" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xe11820ff, "sysfs_remove_bin_file" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0x4c600a76, "stp_proto_unregister" },
	{ 0xd4ec10e6, "BUG_func" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xabd1812a, "neigh_lookup" },
	{ 0x6c90184e, "kmem_cache_destroy" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x7ab30f45, "kobject_put" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x88287630, "register_netdevice" },
	{ 0x6b2b69f7, "static_key_enable" },
	{ 0x2b4e80dd, "dev_set_mtu" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xa44c211e, "dev_pre_changeaddr_notify" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0x7ef38e38, "__nlmsg_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xcc08abfd, "ipv6_mc_check_mld" },
	{ 0xd6625cfb, "skb_put" },
	{ 0x916aefbe, "__percpu_counter_init_many" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc62c42cf, "sysfs_create_file_ns" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x390d57cf, "netdev_update_features" },
	{ 0xe065f55b, "consume_skb" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xb0e602eb, "memmove" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x57dfe23f, "__netpoll_free" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0x3f178e25, "nla_put_64bit" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x19e0ae50, "__SCT__tp_func_br_fdb_external_learn_add" },
	{ 0x733ec33e, "__SCT__tp_func_fdb_delete" },
	{ 0x7e3debf0, "dev_uc_del" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x70f3d0e7, "netpoll_send_skb" },
	{ 0xc217dd22, "rtnl_link_register" },
	{ 0x3117c2cd, "sysfs_create_bin_file" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0xdb2e4f7d, "percpu_counter_destroy_many" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1d07ba4, "dev_get_iflink" },
	{ 0x37a0cba, "kfree" },
	{ 0xad01da46, "dev_set_promiscuity" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x82879e15, "unregister_netdevice_queue" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x42e0bcc9, "netdev_state_change" },
	{ 0x1c59eff6, "__pskb_copy_fclone" },
	{ 0x6e697614, "__dev_get_by_name" },
	{ 0xc15d5e03, "ether_setup" },
	{ 0x113ed675, "netdev_err" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x91e48d88, "pskb_expand_head" },
	{ 0x20548812, "register_pernet_subsys" },
	{ 0x81850611, "brioctl_set" },
	{ 0x777137ac, "dev_addr_mod" },
	{ 0xb912560d, "static_key_disable" },
	{ 0xad0c9118, "arp_xmit" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x1b6287cd, "alloc_netdev_mqs" },
	{ 0x25145d1f, "passthru_features_check" },
	{ 0x1d77292e, "nla_put_nohdr" },
	{ 0x122c3a7e, "_printk" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xb80be06, "netdev_rx_handler_unregister" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xfacda1f0, "__SCK__tp_func_br_mdb_full" },
	{ 0xe3354a93, "rtnl_af_register" },
	{ 0x2c30323f, "__tracepoint_br_mdb_full" },
	{ 0xb11cc43b, "__SCT__tp_func_br_fdb_update" },
	{ 0x7916343c, "__SCT__tp_func_br_mdb_full" },
	{ 0xa916b694, "strnlen" },
	{ 0x1f4733b3, "__alloc_skb" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x5a1e5efb, "rtnl_set_sk_err" },
	{ 0xa3b6124a, "skb_vlan_pop" },
	{ 0xf8873f4c, "rtnl_unicast" },
	{ 0x5cad8430, "sysfs_create_link" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x2ad3e064, "ipv6_dev_get_saddr" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xba5ca25f, "nla_reserve_64bit" },
	{ 0x352f7125, "__ip_mc_dec_group" },
	{ 0x33338211, "rcuref_get_slowpath" },
	{ 0x77cb69cc, "__dev_get_by_index" },
	{ 0xc748bccf, "rtnl_link_unregister" },
	{ 0x7e3191f6, "try_to_del_timer_sync" },
	{ 0xe5590ebd, "init_net" },
	{ 0x396a1105, "ipv6_stub" },
	{ 0xea93860b, "inet_confirm_addr" },
	{ 0x87400f82, "skb_pull" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x7b68bebe, "sysfs_remove_link" },
	{ 0x302d8032, "skb_vlan_untag" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xa71c8903, "__SCK__tp_func_br_fdb_add" },
	{ 0x53d021b1, "rtnl_af_unregister" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xa7eedcc4, "call_usermodehelper" },
	{ 0xf4f14de6, "rtnl_trylock" },
	{ 0x3b70bf06, "arp_send" },
	{ 0x55d5f0df, "dev_get_by_index_rcu" },
	{ 0x8c2caea3, "__tracepoint_br_fdb_add" },
	{ 0x652032cb, "mac_pton" },
	{ 0x6775c90f, "skb_push" },
	{ 0xb609162e, "kmem_cache_free" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0xb0791d6b, "ndo_dflt_fdb_dump" },
	{ 0x5a921311, "strncmp" },
	{ 0x6551c12f, "netdev_upper_dev_unlink" },
	{ 0x9d9392c0, "netif_receive_skb" },
	{ 0x36cd5f26, "nla_put" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x1b8d3761, "llc_mac_hdr_init" },
	{ 0xcd4aed9d, "__rtnl_register_many" },
	{ 0x56d691a8, "free_netdev" },
	{ 0xcd279169, "nla_find" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x9529375, "__SCK__tp_func_fdb_delete" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x9f7d1bf1, "kobject_init_and_add" },
	{ 0x9fd7c553, "__skb_warn_lro_forwarding" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x182d39a9, "ns_capable" },
	{ 0xe4ab9d56, "inet_select_addr" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa1b7a4fb, "sysfs_create_group" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x1464bd86, "ethtool_op_get_link" },
	{ 0x6d294e43, "clock_t_to_jiffies" },
	{ 0xb589d84a, "arp_create" },
	{ 0x70a09e5e, "__ethtool_get_link_ksettings" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x157d0334, "stp_proto_register" },
	{ 0x7e417f8d, "__tracepoint_br_fdb_update" },
	{ 0x6ae0b9, "sysfs_rename_link_ns" },
	{ 0x279ed4c, "unregister_pernet_subsys" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xfb578fc5, "memset" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0xb202f0d7, "rht_bucket_nested_insert" },
	{ 0xdf237453, "timer_shutdown_sync" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xc8817ac9, "kmem_cache_alloc_noprof" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x64f4c46e, "__pskb_pull_tail" },
	{ 0x6f379e5c, "dev_get_tstats64" },
	{ 0x6335dfe9, "netif_rx" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xece784c2, "rb_first" },
	{ 0x123f5263, "ip_mc_check_igmp" },
	{ 0xbcad99e6, "__netdev_alloc_skb" },
	{ 0x2a5ea9ef, "rhashtable_destroy" },
	{ 0x9207278f, "__kmem_cache_create_args" },
	{ 0xd1c27b23, "netdev_master_upper_dev_link" },
	{ 0x131db64a, "system_long_wq" },
	{ 0x59f073a6, "kobject_create_and_add" },
	{ 0xd6e5a44c, "skb_trim" },
	{ 0x1d064d06, "nf_hook_slow" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x5664c757, "__dynamic_netdev_dbg" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd8639326, "__ip_mc_inc_group" },
	{ 0x96ca2c9d, "netdev_walk_all_upper_dev_rcu" },
	{ 0xe37056dc, "pv_ops" },
	{ 0x980d5636, "sysfs_remove_group" },
	{ 0xcf94de11, "in_dev_finish_destroy" },
	{ 0xd83898d5, "nf_hooks_needed" },
	{ 0xe0313d71, "rhashtable_insert_slow" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2262b4d5, "__tracepoint_fdb_delete" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xc4de1936, "__netpoll_setup" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "stp,llc");


MODULE_INFO(srcversion, "F18385620CDCBBFC080F184");
