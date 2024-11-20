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

KSYMTAB_DATA(nf_conntrack_locks, "_gpl", "");
KSYMTAB_DATA(nf_conntrack_expect_lock, "_gpl", "");
KSYMTAB_DATA(nf_conntrack_hash, "_gpl", "");
KSYMTAB_FUNC(nf_conntrack_lock, "_gpl", "");
KSYMTAB_DATA(nf_conntrack_htable_size, "_gpl", "");
KSYMTAB_DATA(nf_conntrack_max, "_gpl", "");
KSYMTAB_FUNC(nf_ct_get_tuplepr, "_gpl", "");
KSYMTAB_FUNC(nf_ct_invert_tuple, "_gpl", "");
KSYMTAB_FUNC(nf_ct_get_id, "_gpl", "");
KSYMTAB_FUNC(nf_ct_tmpl_alloc, "_gpl", "");
KSYMTAB_FUNC(nf_ct_tmpl_free, "_gpl", "");
KSYMTAB_FUNC(nf_ct_destroy, "", "");
KSYMTAB_FUNC(nf_ct_delete, "_gpl", "");
KSYMTAB_FUNC(nf_conntrack_find_get, "_gpl", "");
KSYMTAB_FUNC(nf_conntrack_hash_check_insert, "_gpl", "");
KSYMTAB_FUNC(nf_ct_acct_add, "_gpl", "");
KSYMTAB_FUNC(__nf_conntrack_confirm, "_gpl", "");
KSYMTAB_FUNC(nf_conntrack_tuple_taken, "_gpl", "");
KSYMTAB_FUNC(nf_conntrack_alloc, "_gpl", "");
KSYMTAB_FUNC(nf_conntrack_free, "_gpl", "");
KSYMTAB_FUNC(nf_conntrack_in, "_gpl", "");
KSYMTAB_FUNC(__nf_ct_refresh_acct, "_gpl", "");
KSYMTAB_FUNC(nf_ct_kill_acct, "_gpl", "");
KSYMTAB_FUNC(nf_ct_port_tuple_to_nlattr, "_gpl", "");
KSYMTAB_DATA(nf_ct_port_nla_policy, "_gpl", "");
KSYMTAB_FUNC(nf_ct_port_nlattr_to_tuple, "_gpl", "");
KSYMTAB_FUNC(nf_ct_port_nlattr_tuple_size, "_gpl", "");
KSYMTAB_FUNC(nf_ct_iterate_cleanup_net, "_gpl", "");
KSYMTAB_FUNC(nf_ct_iterate_destroy, "_gpl", "");
KSYMTAB_FUNC(nf_ct_alloc_hashtable, "_gpl", "");
KSYMTAB_FUNC(__nf_ct_change_timeout, "_gpl", "");
KSYMTAB_FUNC(__nf_ct_change_status, "_gpl", "");
KSYMTAB_FUNC(nf_ct_change_status_common, "_gpl", "");
KSYMTAB_FUNC(print_tuple, "_gpl", "");
KSYMTAB_FUNC(nf_conntrack_count, "_gpl", "");
KSYMTAB_DATA(nf_ct_expect_hsize, "_gpl", "");
KSYMTAB_DATA(nf_ct_expect_hash, "_gpl", "");
KSYMTAB_FUNC(nf_ct_unlink_expect_report, "_gpl", "");
KSYMTAB_FUNC(nf_ct_remove_expect, "_gpl", "");
KSYMTAB_FUNC(__nf_ct_expect_find, "_gpl", "");
KSYMTAB_FUNC(nf_ct_expect_find_get, "_gpl", "");
KSYMTAB_FUNC(nf_ct_remove_expectations, "_gpl", "");
KSYMTAB_FUNC(nf_ct_unexpect_related, "_gpl", "");
KSYMTAB_FUNC(nf_ct_expect_alloc, "_gpl", "");
KSYMTAB_FUNC(nf_ct_expect_init, "_gpl", "");
KSYMTAB_FUNC(nf_ct_expect_put, "_gpl", "");
KSYMTAB_FUNC(nf_ct_expect_related_report, "_gpl", "");
KSYMTAB_FUNC(nf_ct_expect_iterate_destroy, "_gpl", "");
KSYMTAB_FUNC(nf_ct_expect_iterate_net, "_gpl", "");
KSYMTAB_DATA(nf_ct_helper_hash, "_gpl", "");
KSYMTAB_DATA(nf_ct_helper_hsize, "_gpl", "");
KSYMTAB_FUNC(__nf_conntrack_helper_find, "_gpl", "");
KSYMTAB_FUNC(nf_conntrack_helper_try_module_get, "_gpl", "");
KSYMTAB_FUNC(nf_conntrack_helper_put, "_gpl", "");
KSYMTAB_FUNC(nf_nat_helper_try_module_get, "_gpl", "");
KSYMTAB_FUNC(nf_nat_helper_put, "_gpl", "");
KSYMTAB_FUNC(nf_ct_helper_ext_add, "_gpl", "");
KSYMTAB_FUNC(__nf_ct_try_assign_helper, "_gpl", "");
KSYMTAB_FUNC(nf_ct_helper_expectfn_register, "_gpl", "");
KSYMTAB_FUNC(nf_ct_helper_expectfn_unregister, "_gpl", "");
KSYMTAB_FUNC(nf_ct_helper_expectfn_find_by_name, "_gpl", "");
KSYMTAB_FUNC(nf_ct_helper_expectfn_find_by_symbol, "_gpl", "");
KSYMTAB_FUNC(nf_ct_helper_log, "_gpl", "");
KSYMTAB_FUNC(nf_conntrack_helper_register, "_gpl", "");
KSYMTAB_FUNC(nf_conntrack_helper_unregister, "_gpl", "");
KSYMTAB_FUNC(nf_ct_helper_init, "_gpl", "");
KSYMTAB_FUNC(nf_conntrack_helpers_register, "_gpl", "");
KSYMTAB_FUNC(nf_conntrack_helpers_unregister, "_gpl", "");
KSYMTAB_FUNC(nf_nat_helper_register, "_gpl", "");
KSYMTAB_FUNC(nf_nat_helper_unregister, "_gpl", "");
KSYMTAB_FUNC(nf_l4proto_log_invalid, "_gpl", "");
KSYMTAB_FUNC(nf_ct_l4proto_log_invalid, "_gpl", "");
KSYMTAB_FUNC(nf_ct_l4proto_find, "_gpl", "");
KSYMTAB_FUNC(nf_confirm, "_gpl", "");
KSYMTAB_FUNC(nf_ct_netns_get, "_gpl", "");
KSYMTAB_FUNC(nf_ct_netns_put, "_gpl", "");
KSYMTAB_FUNC(nf_ct_bridge_register, "_gpl", "");
KSYMTAB_FUNC(nf_ct_bridge_unregister, "_gpl", "");
KSYMTAB_FUNC(nf_ct_ext_add, "", "");
KSYMTAB_FUNC(__nf_ct_ext_find, "", "");
KSYMTAB_FUNC(nf_ct_seqadj_init, "_gpl", "");
KSYMTAB_FUNC(nf_ct_seqadj_set, "_gpl", "");
KSYMTAB_FUNC(nf_ct_tcp_seqadj_set, "_gpl", "");
KSYMTAB_FUNC(nf_ct_seq_adjust, "_gpl", "");
KSYMTAB_FUNC(nf_ct_seq_offset, "_gpl", "");
KSYMTAB_DATA(nf_ct_timeout_hook, "_gpl", "");
KSYMTAB_FUNC(nf_ct_untimeout, "_gpl", "");
KSYMTAB_FUNC(nf_ct_set_timeout, "_gpl", "");
KSYMTAB_FUNC(nf_ct_destroy_timeout, "_gpl", "");
KSYMTAB_FUNC(nf_conn_pernet_ecache, "_gpl", "");
KSYMTAB_FUNC(nf_conntrack_eventmask_report, "_gpl", "");
KSYMTAB_FUNC(nf_ct_deliver_cached_events, "_gpl", "");
KSYMTAB_FUNC(nf_conntrack_register_notifier, "_gpl", "");
KSYMTAB_FUNC(nf_conntrack_unregister_notifier, "_gpl", "");
KSYMTAB_FUNC(nf_ct_ecache_ext_add, "_gpl", "");
KSYMTAB_FUNC(nf_connlabels_replace, "_gpl", "");
KSYMTAB_FUNC(nf_connlabels_get, "_gpl", "");
KSYMTAB_FUNC(nf_connlabels_put, "_gpl", "");
KSYMTAB_FUNC(nf_ct_helper, "_gpl", "");
KSYMTAB_FUNC(nf_ct_add_helper, "_gpl", "");
KSYMTAB_FUNC(nf_ct_skb_network_trim, "_gpl", "");
KSYMTAB_FUNC(nf_ct_handle_fragments, "_gpl", "");
KSYMTAB_FUNC(nf_ct_gre_keymap_add, "_gpl", "");
KSYMTAB_FUNC(nf_ct_gre_keymap_destroy, "_gpl", "");

SYMBOL_CRC(nf_conntrack_locks, 0xaf0847f0, "_gpl");
SYMBOL_CRC(nf_conntrack_expect_lock, 0x9adb7399, "_gpl");
SYMBOL_CRC(nf_conntrack_hash, 0x28eff409, "_gpl");
SYMBOL_CRC(nf_conntrack_lock, 0xdba7326b, "_gpl");
SYMBOL_CRC(nf_conntrack_htable_size, 0x8ffe7e89, "_gpl");
SYMBOL_CRC(nf_conntrack_max, 0xf38bcdf3, "_gpl");
SYMBOL_CRC(nf_ct_get_tuplepr, 0xfe13d629, "_gpl");
SYMBOL_CRC(nf_ct_invert_tuple, 0x0460ec0f, "_gpl");
SYMBOL_CRC(nf_ct_get_id, 0x6cf6b978, "_gpl");
SYMBOL_CRC(nf_ct_tmpl_alloc, 0xc97cfd53, "_gpl");
SYMBOL_CRC(nf_ct_tmpl_free, 0xf38a1a13, "_gpl");
SYMBOL_CRC(nf_ct_destroy, 0x3b08a8f0, "");
SYMBOL_CRC(nf_ct_delete, 0xcef44666, "_gpl");
SYMBOL_CRC(nf_conntrack_find_get, 0xc96de9a1, "_gpl");
SYMBOL_CRC(nf_conntrack_hash_check_insert, 0x61c0d9c9, "_gpl");
SYMBOL_CRC(nf_ct_acct_add, 0x854e4136, "_gpl");
SYMBOL_CRC(__nf_conntrack_confirm, 0xf2d9c32d, "_gpl");
SYMBOL_CRC(nf_conntrack_tuple_taken, 0xf753ecf7, "_gpl");
SYMBOL_CRC(nf_conntrack_alloc, 0x59fe606a, "_gpl");
SYMBOL_CRC(nf_conntrack_free, 0xfa173562, "_gpl");
SYMBOL_CRC(nf_conntrack_in, 0xb57a7efb, "_gpl");
SYMBOL_CRC(__nf_ct_refresh_acct, 0x0d92a2d2, "_gpl");
SYMBOL_CRC(nf_ct_kill_acct, 0x44fffe6f, "_gpl");
SYMBOL_CRC(nf_ct_port_tuple_to_nlattr, 0xd15edf3c, "_gpl");
SYMBOL_CRC(nf_ct_port_nla_policy, 0xeb0ab313, "_gpl");
SYMBOL_CRC(nf_ct_port_nlattr_to_tuple, 0x752f0aa2, "_gpl");
SYMBOL_CRC(nf_ct_port_nlattr_tuple_size, 0xd505c3e0, "_gpl");
SYMBOL_CRC(nf_ct_iterate_cleanup_net, 0x3db5d90c, "_gpl");
SYMBOL_CRC(nf_ct_iterate_destroy, 0x49450d8f, "_gpl");
SYMBOL_CRC(nf_ct_alloc_hashtable, 0x289c3714, "_gpl");
SYMBOL_CRC(__nf_ct_change_timeout, 0xc1ed179e, "_gpl");
SYMBOL_CRC(__nf_ct_change_status, 0x3b2d6092, "_gpl");
SYMBOL_CRC(nf_ct_change_status_common, 0x094e17a5, "_gpl");
SYMBOL_CRC(print_tuple, 0x4b4bfd43, "_gpl");
SYMBOL_CRC(nf_conntrack_count, 0x2dbb5fec, "_gpl");
SYMBOL_CRC(nf_ct_expect_hsize, 0xc18ac88d, "_gpl");
SYMBOL_CRC(nf_ct_expect_hash, 0xec8beba6, "_gpl");
SYMBOL_CRC(nf_ct_unlink_expect_report, 0x365369ce, "_gpl");
SYMBOL_CRC(nf_ct_remove_expect, 0x7905937b, "_gpl");
SYMBOL_CRC(__nf_ct_expect_find, 0x6e3e23f1, "_gpl");
SYMBOL_CRC(nf_ct_expect_find_get, 0xff2d2bc2, "_gpl");
SYMBOL_CRC(nf_ct_remove_expectations, 0x5f3f00ec, "_gpl");
SYMBOL_CRC(nf_ct_unexpect_related, 0xf7d5ca7f, "_gpl");
SYMBOL_CRC(nf_ct_expect_alloc, 0x1e415c0e, "_gpl");
SYMBOL_CRC(nf_ct_expect_init, 0x26b0ff0f, "_gpl");
SYMBOL_CRC(nf_ct_expect_put, 0x89c29bc9, "_gpl");
SYMBOL_CRC(nf_ct_expect_related_report, 0x0aef1bb6, "_gpl");
SYMBOL_CRC(nf_ct_expect_iterate_destroy, 0x81ae8f5b, "_gpl");
SYMBOL_CRC(nf_ct_expect_iterate_net, 0xccfe6434, "_gpl");
SYMBOL_CRC(nf_ct_helper_hash, 0x693c3961, "_gpl");
SYMBOL_CRC(nf_ct_helper_hsize, 0xc40f284c, "_gpl");
SYMBOL_CRC(__nf_conntrack_helper_find, 0x0ce7fc70, "_gpl");
SYMBOL_CRC(nf_conntrack_helper_try_module_get, 0x24574fc9, "_gpl");
SYMBOL_CRC(nf_conntrack_helper_put, 0x824aae3f, "_gpl");
SYMBOL_CRC(nf_nat_helper_try_module_get, 0x0bc00f80, "_gpl");
SYMBOL_CRC(nf_nat_helper_put, 0xfd4e6f56, "_gpl");
SYMBOL_CRC(nf_ct_helper_ext_add, 0xbdd4326c, "_gpl");
SYMBOL_CRC(__nf_ct_try_assign_helper, 0x06c4243a, "_gpl");
SYMBOL_CRC(nf_ct_helper_expectfn_register, 0xab4922c1, "_gpl");
SYMBOL_CRC(nf_ct_helper_expectfn_unregister, 0xdfdde0a9, "_gpl");
SYMBOL_CRC(nf_ct_helper_expectfn_find_by_name, 0x4f2cf246, "_gpl");
SYMBOL_CRC(nf_ct_helper_expectfn_find_by_symbol, 0xe5684d12, "_gpl");
SYMBOL_CRC(nf_ct_helper_log, 0xc219e5b6, "_gpl");
SYMBOL_CRC(nf_conntrack_helper_register, 0x0f6f05b8, "_gpl");
SYMBOL_CRC(nf_conntrack_helper_unregister, 0x979a7de0, "_gpl");
SYMBOL_CRC(nf_ct_helper_init, 0x40dbcb49, "_gpl");
SYMBOL_CRC(nf_conntrack_helpers_register, 0xdf27da0b, "_gpl");
SYMBOL_CRC(nf_conntrack_helpers_unregister, 0x05f21bd3, "_gpl");
SYMBOL_CRC(nf_nat_helper_register, 0x6f343ed4, "_gpl");
SYMBOL_CRC(nf_nat_helper_unregister, 0x29263903, "_gpl");
SYMBOL_CRC(nf_l4proto_log_invalid, 0xaf161368, "_gpl");
SYMBOL_CRC(nf_ct_l4proto_log_invalid, 0x1deb7fd7, "_gpl");
SYMBOL_CRC(nf_ct_l4proto_find, 0x64261cc1, "_gpl");
SYMBOL_CRC(nf_confirm, 0x06f88660, "_gpl");
SYMBOL_CRC(nf_ct_netns_get, 0x7affc372, "_gpl");
SYMBOL_CRC(nf_ct_netns_put, 0x26040007, "_gpl");
SYMBOL_CRC(nf_ct_bridge_register, 0x8a1fdb66, "_gpl");
SYMBOL_CRC(nf_ct_bridge_unregister, 0xfcc2c59e, "_gpl");
SYMBOL_CRC(nf_ct_ext_add, 0x49efa1d8, "");
SYMBOL_CRC(__nf_ct_ext_find, 0x89d99ee1, "");
SYMBOL_CRC(nf_ct_seqadj_init, 0xd50b254a, "_gpl");
SYMBOL_CRC(nf_ct_seqadj_set, 0x72260330, "_gpl");
SYMBOL_CRC(nf_ct_tcp_seqadj_set, 0xe62091db, "_gpl");
SYMBOL_CRC(nf_ct_seq_adjust, 0x8697cb31, "_gpl");
SYMBOL_CRC(nf_ct_seq_offset, 0xe1aabc94, "_gpl");
SYMBOL_CRC(nf_ct_timeout_hook, 0x05f8319a, "_gpl");
SYMBOL_CRC(nf_ct_untimeout, 0x15755874, "_gpl");
SYMBOL_CRC(nf_ct_set_timeout, 0x66ae4279, "_gpl");
SYMBOL_CRC(nf_ct_destroy_timeout, 0xa02efb9e, "_gpl");
SYMBOL_CRC(nf_conn_pernet_ecache, 0x6ec6947a, "_gpl");
SYMBOL_CRC(nf_conntrack_eventmask_report, 0x22346a96, "_gpl");
SYMBOL_CRC(nf_ct_deliver_cached_events, 0x6e5f9ff3, "_gpl");
SYMBOL_CRC(nf_conntrack_register_notifier, 0x0e1c9939, "_gpl");
SYMBOL_CRC(nf_conntrack_unregister_notifier, 0x41cd03ca, "_gpl");
SYMBOL_CRC(nf_ct_ecache_ext_add, 0x369490a9, "_gpl");
SYMBOL_CRC(nf_connlabels_replace, 0xf3c11973, "_gpl");
SYMBOL_CRC(nf_connlabels_get, 0x0192a9ae, "_gpl");
SYMBOL_CRC(nf_connlabels_put, 0xb01b476d, "_gpl");
SYMBOL_CRC(nf_ct_helper, 0xa70c51e7, "_gpl");
SYMBOL_CRC(nf_ct_add_helper, 0xa5869079, "_gpl");
SYMBOL_CRC(nf_ct_skb_network_trim, 0x7ddd9a99, "_gpl");
SYMBOL_CRC(nf_ct_handle_fragments, 0xbd34b140, "_gpl");
SYMBOL_CRC(nf_ct_gre_keymap_add, 0xebc5116a, "_gpl");
SYMBOL_CRC(nf_ct_gre_keymap_destroy, 0x17a51546, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe2c1468c, "nf_defrag_ipv6_disable" },
	{ 0xe6f295a9, "ipv6_skip_exthdr" },
	{ 0x380ce666, "nf_register_net_hooks" },
	{ 0xa916b694, "strnlen" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0xf44d53da, "security_secid_to_secctx" },
	{ 0xed61f6b3, "security_release_secctx" },
	{ 0x7f1fd79f, "module_put" },
	{ 0x5b7a55ec, "nf_checksum" },
	{ 0xe5590ebd, "init_net" },
	{ 0xd5ef03b6, "nf_ip6_check_hbh_len" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x24d273d1, "add_timer" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xb609162e, "kmem_cache_free" },
	{ 0x5db87f6c, "seq_putc" },
	{ 0x36cd5f26, "nla_put" },
	{ 0xee679caa, "nf_checksum_partial" },
	{ 0xb8efc77a, "skb_ensure_writable" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x7d511f68, "nf_unregister_net_hooks" },
	{ 0xdc145e5, "lock_sock_nested" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x944375db, "_totalram_pages" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x279ed4c, "unregister_pernet_subsys" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x6d2fc5a6, "net_namespace_list" },
	{ 0xf34a82b4, "ip_defrag" },
	{ 0x19f33626, "nf_ctnetlink_has_listener" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xc8817ac9, "kmem_cache_alloc_noprof" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xcb57f3e2, "nf_log_packet" },
	{ 0xa3951d2b, "make_kgid" },
	{ 0x7d02f564, "nf_ip_checksum" },
	{ 0x9207278f, "__kmem_cache_create_args" },
	{ 0xe4262c6, "__siphash_unaligned" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x254ad00e, "nla_policy_len" },
	{ 0xb15b4109, "crc32c" },
	{ 0xe17678a, "siphash_4u64" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0xc25d94c1, "pcpu_alloc_noprof" },
	{ 0xcdf8a269, "__skb_checksum" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x43c2d3b, "proc_set_user" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x22199426, "param_ops_bool" },
	{ 0x5c0259ec, "inet_proto_csum_replace4" },
	{ 0x3d1a1b7b, "seq_write" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xab3fc466, "remove_proc_entry" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0x377214d3, "seq_printf" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xa082f2ef, "nf_defrag_ipv6_enable" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0xf943375f, "proc_dointvec" },
	{ 0x9ec99ac1, "nf_nat_hook" },
	{ 0xf44a904a, "net_ns_barrier" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0x5ac8c04c, "unregister_net_sysctl_table" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x2ecc9deb, "nf_queue_nf_hook_drop" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x86f6b99d, "synchronize_rcu_expedited" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x31f2a14c, "__kvmalloc_node_noprof" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x67d19474, "pskb_trim_rcsum_slow" },
	{ 0x53b954a2, "up_read" },
	{ 0xe1a8d7c9, "net_rwsem" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x7d5e1008, "__crc32c_le_shift" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x847188e8, "krealloc_noprof" },
	{ 0x9858f364, "get_random_u8" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x6c90184e, "kmem_cache_destroy" },
	{ 0xdb579ef1, "release_sock" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x453ca149, "__do_once_done" },
	{ 0x1f7fdb27, "try_module_get" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x55ecc4c2, "nf_defrag_ipv4_disable" },
	{ 0x6e382972, "nf_ip6_checksum" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x917a760d, "proc_dou8vec_minmax" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0x566b7206, "param_ops_uint" },
	{ 0xac4038d6, "proc_dointvec_jiffies" },
	{ 0xafd744c6, "__x86_indirect_thunk_rbp" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb2239bc4, "nf_register_sockopt" },
	{ 0x3f178e25, "nla_put_64bit" },
	{ 0x4e16163e, "param_set_uint" },
	{ 0x9c9a9f36, "nf_defrag_ipv4_enable" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x37a0cba, "kfree" },
	{ 0x3706bbc7, "nf_ct_frag6_gather" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x81edf8b2, "nf_ct_hook" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x861b6aec, "proc_create_net_data" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x20548812, "register_pernet_subsys" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xa4f84056, "register_net_sysctl_sz" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x1000e51, "schedule" },
	{ 0xcafd02ec, "nf_unregister_sockopt" },
	{ 0x311637c4, "param_get_uint" },
	{ 0xc8827b75, "sysctl_vals" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc1f0e49d, "make_kuid" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nf_defrag_ipv6,libcrc32c,nf_defrag_ipv4");

