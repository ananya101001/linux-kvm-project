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

KSYMTAB_FUNC(nft_do_chain, "_gpl", "");
KSYMTAB_FUNC(nft_reg_track_update, "_gpl", "");
KSYMTAB_FUNC(nft_reg_track_cancel, "_gpl", "");
KSYMTAB_FUNC(__nft_reg_track_cancel, "_gpl", "");
KSYMTAB_FUNC(nft_request_module, "_gpl", "");
KSYMTAB_FUNC(nft_register_chain_type, "_gpl", "");
KSYMTAB_FUNC(nft_unregister_chain_type, "_gpl", "");
KSYMTAB_FUNC(nft_register_expr, "_gpl", "");
KSYMTAB_FUNC(nft_unregister_expr, "_gpl", "");
KSYMTAB_FUNC(nft_chain_validate, "_gpl", "");
KSYMTAB_FUNC(nft_set_lookup_global, "_gpl", "");
KSYMTAB_FUNC(nf_tables_bind_set, "_gpl", "");
KSYMTAB_FUNC(nf_tables_activate_set, "_gpl", "");
KSYMTAB_FUNC(nf_tables_deactivate_set, "_gpl", "");
KSYMTAB_FUNC(nf_tables_destroy_set, "_gpl", "");
KSYMTAB_FUNC(nft_set_elem_destroy, "_gpl", "");
KSYMTAB_FUNC(nft_set_catchall_lookup, "_gpl", "");
KSYMTAB_FUNC(nft_register_obj, "_gpl", "");
KSYMTAB_FUNC(nft_unregister_obj, "_gpl", "");
KSYMTAB_FUNC(nft_obj_lookup, "_gpl", "");
KSYMTAB_FUNC(nft_obj_notify, "_gpl", "");
KSYMTAB_FUNC(nft_register_flowtable_type, "_gpl", "");
KSYMTAB_FUNC(nft_unregister_flowtable_type, "_gpl", "");
KSYMTAB_FUNC(nft_flowtable_lookup, "_gpl", "");
KSYMTAB_FUNC(nf_tables_deactivate_flowtable, "_gpl", "");
KSYMTAB_FUNC(nf_tables_trans_destroy_flush_work, "_gpl", "");
KSYMTAB_FUNC(nft_chain_validate_dependency, "_gpl", "");
KSYMTAB_FUNC(nft_chain_validate_hooks, "_gpl", "");
KSYMTAB_FUNC(nft_parse_u32_check, "_gpl", "");
KSYMTAB_FUNC(nft_dump_register, "_gpl", "");
KSYMTAB_FUNC(nft_parse_register_load, "_gpl", "");
KSYMTAB_FUNC(nft_parse_register_store, "_gpl", "");
KSYMTAB_FUNC(nft_data_init, "_gpl", "");
KSYMTAB_FUNC(nft_data_release, "_gpl", "");
KSYMTAB_FUNC(nft_data_dump, "_gpl", "");
KSYMTAB_FUNC(__nft_release_basechain, "_gpl", "");
KSYMTAB_DATA(nft_trace_enabled, "_gpl", "");
KSYMTAB_FUNC(nft_expr_reduce_bitwise, "_gpl", "");
KSYMTAB_FUNC(nft_set_do_lookup, "_gpl", "");
KSYMTAB_FUNC(nft_meta_get_eval, "_gpl", "");
KSYMTAB_FUNC(nft_meta_set_eval, "_gpl", "");
KSYMTAB_DATA(nft_meta_policy, "_gpl", "");
KSYMTAB_FUNC(nft_meta_get_init, "_gpl", "");
KSYMTAB_FUNC(nft_meta_set_validate, "_gpl", "");
KSYMTAB_FUNC(nft_meta_set_init, "_gpl", "");
KSYMTAB_FUNC(nft_meta_get_dump, "_gpl", "");
KSYMTAB_FUNC(nft_meta_set_dump, "_gpl", "");
KSYMTAB_FUNC(nft_meta_set_destroy, "_gpl", "");
KSYMTAB_FUNC(nft_meta_get_reduce, "_gpl", "");
KSYMTAB_FUNC(nft_meta_inner_eval, "_gpl", "");
KSYMTAB_FUNC(nft_ct_get_fast_eval, "_gpl", "");

SYMBOL_CRC(nft_do_chain, 0x0e711bf8, "_gpl");
SYMBOL_CRC(nft_reg_track_update, 0x9d3e6477, "_gpl");
SYMBOL_CRC(nft_reg_track_cancel, 0xfe9fbfec, "_gpl");
SYMBOL_CRC(__nft_reg_track_cancel, 0x1cfe9388, "_gpl");
SYMBOL_CRC(nft_request_module, 0x05fe85e0, "_gpl");
SYMBOL_CRC(nft_register_chain_type, 0xd831dbab, "_gpl");
SYMBOL_CRC(nft_unregister_chain_type, 0x29cba8e5, "_gpl");
SYMBOL_CRC(nft_register_expr, 0xf274816b, "_gpl");
SYMBOL_CRC(nft_unregister_expr, 0x41746749, "_gpl");
SYMBOL_CRC(nft_chain_validate, 0x2d578192, "_gpl");
SYMBOL_CRC(nft_set_lookup_global, 0x9bcbdc1b, "_gpl");
SYMBOL_CRC(nf_tables_bind_set, 0xcd0a1780, "_gpl");
SYMBOL_CRC(nf_tables_activate_set, 0x93ff0e28, "_gpl");
SYMBOL_CRC(nf_tables_deactivate_set, 0x96e8549f, "_gpl");
SYMBOL_CRC(nf_tables_destroy_set, 0x3aa29e18, "_gpl");
SYMBOL_CRC(nft_set_elem_destroy, 0x97f9aff0, "_gpl");
SYMBOL_CRC(nft_set_catchall_lookup, 0x60f088c8, "_gpl");
SYMBOL_CRC(nft_register_obj, 0x92e68c1d, "_gpl");
SYMBOL_CRC(nft_unregister_obj, 0xe3ed4b17, "_gpl");
SYMBOL_CRC(nft_obj_lookup, 0xca4f5ffa, "_gpl");
SYMBOL_CRC(nft_obj_notify, 0x18e3b52d, "_gpl");
SYMBOL_CRC(nft_register_flowtable_type, 0x00d0acf2, "_gpl");
SYMBOL_CRC(nft_unregister_flowtable_type, 0xd27d8dca, "_gpl");
SYMBOL_CRC(nft_flowtable_lookup, 0xa768c55f, "_gpl");
SYMBOL_CRC(nf_tables_deactivate_flowtable, 0x456d127a, "_gpl");
SYMBOL_CRC(nf_tables_trans_destroy_flush_work, 0x3251d762, "_gpl");
SYMBOL_CRC(nft_chain_validate_dependency, 0x98c13c06, "_gpl");
SYMBOL_CRC(nft_chain_validate_hooks, 0xf0565d17, "_gpl");
SYMBOL_CRC(nft_parse_u32_check, 0xde57b5f5, "_gpl");
SYMBOL_CRC(nft_dump_register, 0x0a086b5b, "_gpl");
SYMBOL_CRC(nft_parse_register_load, 0xc403a2f4, "_gpl");
SYMBOL_CRC(nft_parse_register_store, 0x38d69b4c, "_gpl");
SYMBOL_CRC(nft_data_init, 0xcc3e08f4, "_gpl");
SYMBOL_CRC(nft_data_release, 0x010ee279, "_gpl");
SYMBOL_CRC(nft_data_dump, 0xc4c8fba3, "_gpl");
SYMBOL_CRC(__nft_release_basechain, 0x975cefbd, "_gpl");
SYMBOL_CRC(nft_trace_enabled, 0x41b71e65, "_gpl");
SYMBOL_CRC(nft_expr_reduce_bitwise, 0xde1137d4, "_gpl");
SYMBOL_CRC(nft_set_do_lookup, 0x429da82f, "_gpl");
SYMBOL_CRC(nft_meta_get_eval, 0xfb740b57, "_gpl");
SYMBOL_CRC(nft_meta_set_eval, 0x07dcbc84, "_gpl");
SYMBOL_CRC(nft_meta_policy, 0xe2c74001, "_gpl");
SYMBOL_CRC(nft_meta_get_init, 0xa12096ca, "_gpl");
SYMBOL_CRC(nft_meta_set_validate, 0xff696451, "_gpl");
SYMBOL_CRC(nft_meta_set_init, 0xe375a340, "_gpl");
SYMBOL_CRC(nft_meta_get_dump, 0xc823b9c0, "_gpl");
SYMBOL_CRC(nft_meta_set_dump, 0xd616513a, "_gpl");
SYMBOL_CRC(nft_meta_set_destroy, 0xcc4bfd38, "_gpl");
SYMBOL_CRC(nft_meta_get_reduce, 0xd5927754, "_gpl");
SYMBOL_CRC(nft_meta_inner_eval, 0x437564cf, "_gpl");
SYMBOL_CRC(nft_ct_get_fast_eval, 0x8002cbaf, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x2c82c36a, "security_secmark_relabel_packet" },
	{ 0x2c7df7a4, "nfnetlink_set_err" },
	{ 0x75d0deb9, "nsecs_to_jiffies64" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0x6d7c7dcc, "bitmap_cut" },
	{ 0xcc65f031, "flow_block_cb_free" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x53f84745, "nfnetlink_subsys_register" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xd4a178, "ip6_route_me_harder" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0xeca957d1, "__bitmap_and" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xe893d918, "__module_get" },
	{ 0x148653, "vsnprintf" },
	{ 0xe5ce1a56, "rhashtable_walk_enter" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x6e697614, "__dev_get_by_name" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x20548812, "register_pernet_subsys" },
	{ 0x2f4880df, "static_key_slow_dec" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x7743caaf, "__ip_options_compile" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xf82ec573, "rb_prev" },
	{ 0xa9c64adf, "nf_route" },
	{ 0x4129f5ee, "kernel_fpu_begin_mask" },
	{ 0xa916b694, "strnlen" },
	{ 0x1f4733b3, "__alloc_skb" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0x618911fc, "numa_node" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x7f1fd79f, "module_put" },
	{ 0x8f14d45b, "get_zeroed_page_noprof" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x615911d7, "__bitmap_set" },
	{ 0xf76a44bd, "nf_unregister_net_hook" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0x80850fae, "nf_register_net_hook" },
	{ 0xe5497da, "__skb_get_hash_net" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x19bd383b, "security_secmark_refcount_dec" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xbca24e1e, "ip6_mtu" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0x7647e788, "ip_route_me_harder" },
	{ 0x9908bd84, "skb_store_bits" },
	{ 0x55d5f0df, "dev_get_by_index_rcu" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd4be4ee6, "nfnetlink_unicast" },
	{ 0x36cd5f26, "nla_put" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xb8efc77a, "skb_ensure_writable" },
	{ 0xc0ff12fb, "nla_strdup" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x9a5dce5c, "rhashtable_walk_start_check" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xa4cae616, "flow_indr_dev_setup_offload" },
	{ 0x9cd7551a, "rhashtable_walk_stop" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xb44e18ea, "audit_enabled" },
	{ 0x838d2bc8, "siphash_3u32" },
	{ 0x279ed4c, "unregister_pernet_subsys" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x7f6cee89, "rhashtable_free_and_destroy" },
	{ 0x9591300f, "skb_checksum" },
	{ 0xfb578fc5, "memset" },
	{ 0x92ec510d, "jiffies64_to_msecs" },
	{ 0xb202f0d7, "rht_bucket_nested_insert" },
	{ 0xaef300e8, "nfnetlink_send" },
	{ 0x5823e4ac, "__get_task_comm" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x64f4c46e, "__pskb_pull_tail" },
	{ 0xece784c2, "rb_first" },
	{ 0xa84b4980, "nfnetlink_subsys_unregister" },
	{ 0x9102cff1, "from_kgid_munged" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd6e5a44c, "skb_trim" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe37056dc, "pv_ops" },
	{ 0x92104429, "__put_net" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xe0313d71, "rhashtable_insert_slow" },
	{ 0x83823fac, "ipv6_find_hdr" },
	{ 0xb15b4109, "crc32c" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x39374f5e, "ipv4_mtu" },
	{ 0x8d2f7c81, "rhltable_init_noprof" },
	{ 0xc25d94c1, "pcpu_alloc_noprof" },
	{ 0x28839c12, "rhashtable_init_noprof" },
	{ 0x2f03fc4b, "security_secmark_refcount_inc" },
	{ 0xcdf8a269, "__skb_checksum" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5c0259ec, "inet_proto_csum_replace4" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xfff5afc, "time64_to_tm" },
	{ 0xf04a650c, "dst_release" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x3426ac54, "boot_cpu_data" },
	{ 0x54651f9b, "rhashtable_walk_next" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0xc0b8681e, "from_kuid_munged" },
	{ 0xf9c1f9ab, "security_secctx_to_secid" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x754d539c, "strlen" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x349cba85, "strchr" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x31f2a14c, "__kvmalloc_node_noprof" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0xf188a662, "rhashtable_walk_exit" },
	{ 0xd4ec10e6, "BUG_func" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x7d5e1008, "__crc32c_le_shift" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x18e60984, "__do_once_start" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xfe89ea5d, "nfnetlink_has_listeners" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x6b2b69f7, "static_key_enable" },
	{ 0x453ca149, "__do_once_done" },
	{ 0x753e172b, "__netlink_dump_start" },
	{ 0xd86a776b, "flow_rule_alloc" },
	{ 0x1f7fdb27, "try_module_get" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0x5afc722e, "__audit_log_nfcfg" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0x7ef38e38, "__nlmsg_put" },
	{ 0xd6625cfb, "skb_put" },
	{ 0xafd744c6, "__x86_indirect_thunk_rbp" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2c834418, "static_key_slow_inc" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xedbaee5e, "nla_strcmp" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xb0e602eb, "memmove" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4dc8c704, "nla_reserve" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x73dd54eb, "irq_fpu_usable" },
	{ 0x7a53a06d, "flow_indr_dev_exists" },
	{ 0x3f178e25, "nla_put_64bit" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xca9360b5, "rb_next" },
	{ 0xd7c9f34b, "__kmalloc_node_noprof" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nfnetlink,libcrc32c");

