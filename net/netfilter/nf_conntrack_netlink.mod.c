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
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xa916b694, "strnlen" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x754d539c, "strlen" },
	{ 0xed61f6b3, "security_release_secctx" },
	{ 0x6cf6b978, "nf_ct_get_id" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x8ffe7e89, "nf_conntrack_htable_size" },
	{ 0xaf0847f0, "nf_conntrack_locks" },
	{ 0xdba7326b, "nf_conntrack_lock" },
	{ 0x28eff409, "nf_conntrack_hash" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xcef44666, "nf_ct_delete" },
	{ 0xe5684d12, "nf_ct_helper_expectfn_find_by_symbol" },
	{ 0xfe89ea5d, "nfnetlink_has_listeners" },
	{ 0x2c7df7a4, "nfnetlink_set_err" },
	{ 0xaef300e8, "nfnetlink_send" },
	{ 0xc18ac88d, "nf_ct_expect_hsize" },
	{ 0xec8beba6, "nf_ct_expect_hash" },
	{ 0xc96de9a1, "nf_conntrack_find_get" },
	{ 0x6e3e23f1, "__nf_ct_expect_find" },
	{ 0x24d273d1, "add_timer" },
	{ 0x3db5d90c, "nf_ct_iterate_cleanup_net" },
	{ 0x6ec6947a, "nf_conn_pernet_ecache" },
	{ 0x59fe606a, "nf_conntrack_alloc" },
	{ 0xbdd4326c, "nf_ct_helper_ext_add" },
	{ 0x49efa1d8, "nf_ct_ext_add" },
	{ 0x369490a9, "nf_ct_ecache_ext_add" },
	{ 0x94e17a5, "nf_ct_change_status_common" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x61c0d9c9, "nf_conntrack_hash_check_insert" },
	{ 0xfa173562, "nf_conntrack_free" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x22346a96, "nf_conntrack_eventmask_report" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x53f84745, "nfnetlink_subsys_register" },
	{ 0x20548812, "register_pernet_subsys" },
	{ 0x39af3d34, "nfnl_ct_hook" },
	{ 0x122c3a7e, "_printk" },
	{ 0xa84b4980, "nfnetlink_subsys_unregister" },
	{ 0xe62091db, "nf_ct_tcp_seqadj_set" },
	{ 0x89c29bc9, "nf_ct_expect_put" },
	{ 0xf3c11973, "nf_connlabels_replace" },
	{ 0x254ad00e, "nla_policy_len" },
	{ 0x64261cc1, "nf_ct_l4proto_find" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x41cd03ca, "nf_conntrack_unregister_notifier" },
	{ 0xe1c9939, "nf_conntrack_register_notifier" },
	{ 0xe4262c6, "__siphash_unaligned" },
	{ 0xe17678a, "siphash_4u64" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x453ca149, "__do_once_done" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x753e172b, "__netlink_dump_start" },
	{ 0x9ec99ac1, "nf_nat_hook" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x279ed4c, "unregister_pernet_subsys" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x36cd5f26, "nla_put" },
	{ 0xf44d53da, "security_secid_to_secctx" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x3d1059ea, "__nla_validate" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xff2d2bc2, "nf_ct_expect_find_get" },
	{ 0x9adb7399, "nf_conntrack_expect_lock" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0x365369ce, "nf_ct_unlink_expect_report" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xccfe6434, "nf_ct_expect_iterate_net" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x37a0cba, "kfree" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x3f178e25, "nla_put_64bit" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x89d99ee1, "__nf_ct_ext_find" },
	{ 0x1f4733b3, "__alloc_skb" },
	{ 0x7ef38e38, "__nlmsg_put" },
	{ 0x2dbb5fec, "nf_conntrack_count" },
	{ 0xf38bcdf3, "nf_conntrack_max" },
	{ 0xd4be4ee6, "nfnetlink_unicast" },
	{ 0xd6e5a44c, "skb_trim" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x1e415c0e, "nf_ct_expect_alloc" },
	{ 0x4f2cf246, "nf_ct_helper_expectfn_find_by_name" },
	{ 0xce7fc70, "__nf_conntrack_helper_find" },
	{ 0xaef1bb6, "nf_ct_expect_related_report" },
	{ 0x5f3f00ec, "nf_ct_remove_expectations" },
	{ 0xc1ed179e, "__nf_ct_change_timeout" },
	{ 0x3b2d6092, "__nf_ct_change_status" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack,nfnetlink");
