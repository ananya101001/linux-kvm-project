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

KSYMTAB_FUNC(flow_offload_alloc, "_gpl", "");
KSYMTAB_FUNC(flow_offload_route_init, "_gpl", "");
KSYMTAB_FUNC(flow_offload_free, "_gpl", "");
KSYMTAB_FUNC(flow_offload_add, "_gpl", "");
KSYMTAB_FUNC(flow_offload_refresh, "_gpl", "");
KSYMTAB_FUNC(flow_offload_teardown, "_gpl", "");
KSYMTAB_FUNC(flow_offload_lookup, "_gpl", "");
KSYMTAB_FUNC(nf_flow_snat_port, "_gpl", "");
KSYMTAB_FUNC(nf_flow_dnat_port, "_gpl", "");
KSYMTAB_FUNC(nf_flow_table_init, "_gpl", "");
KSYMTAB_FUNC(nf_flow_table_cleanup, "_gpl", "");
KSYMTAB_FUNC(nf_flow_table_free, "_gpl", "");
KSYMTAB_FUNC(nf_flow_offload_ip_hook, "_gpl", "");
KSYMTAB_FUNC(nf_flow_offload_ipv6_hook, "_gpl", "");
KSYMTAB_FUNC(nf_flow_rule_route_ipv4, "_gpl", "");
KSYMTAB_FUNC(nf_flow_rule_route_ipv6, "_gpl", "");
KSYMTAB_FUNC(nf_flow_table_offload_setup, "_gpl", "");

SYMBOL_CRC(flow_offload_alloc, 0x709c7c33, "_gpl");
SYMBOL_CRC(flow_offload_route_init, 0xeb10a186, "_gpl");
SYMBOL_CRC(flow_offload_free, 0xe4cfe12c, "_gpl");
SYMBOL_CRC(flow_offload_add, 0x1ab7a4ad, "_gpl");
SYMBOL_CRC(flow_offload_refresh, 0xda0d97e0, "_gpl");
SYMBOL_CRC(flow_offload_teardown, 0x83420881, "_gpl");
SYMBOL_CRC(flow_offload_lookup, 0x02e02e00, "_gpl");
SYMBOL_CRC(nf_flow_snat_port, 0x9706bc3c, "_gpl");
SYMBOL_CRC(nf_flow_dnat_port, 0xf0b793a4, "_gpl");
SYMBOL_CRC(nf_flow_table_init, 0x79c528ab, "_gpl");
SYMBOL_CRC(nf_flow_table_cleanup, 0xa05ed640, "_gpl");
SYMBOL_CRC(nf_flow_table_free, 0xe5948e60, "_gpl");
SYMBOL_CRC(nf_flow_offload_ip_hook, 0x9b523098, "_gpl");
SYMBOL_CRC(nf_flow_offload_ipv6_hook, 0xf1ace7cb, "_gpl");
SYMBOL_CRC(nf_flow_rule_route_ipv4, 0x1d4cd3da, "_gpl");
SYMBOL_CRC(nf_flow_rule_route_ipv6, 0xc44c36fa, "_gpl");
SYMBOL_CRC(nf_flow_table_offload_setup, 0xe869d0b8, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0x87400f82, "skb_pull" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x19e2cc40, "dev_get_by_index" },
	{ 0x55d5f0df, "dev_get_by_index_rcu" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x9a5dce5c, "rhashtable_walk_start_check" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa4cae616, "flow_indr_dev_setup_offload" },
	{ 0x9cd7551a, "rhashtable_walk_stop" },
	{ 0x279ed4c, "unregister_pernet_subsys" },
	{ 0xb202f0d7, "rht_bucket_nested_insert" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x64f4c46e, "__pskb_pull_tail" },
	{ 0x2a5ea9ef, "rhashtable_destroy" },
	{ 0x668b19a1, "down_read" },
	{ 0x278f8454, "inet_proto_csum_replace16" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe37056dc, "pv_ops" },
	{ 0xe0313d71, "rhashtable_insert_slow" },
	{ 0x523d13e7, "__dev_queue_xmit" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x63db0b8c, "neigh_destroy" },
	{ 0xc25d94c1, "pcpu_alloc_noprof" },
	{ 0x28839c12, "rhashtable_init_noprof" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5c0259ec, "inet_proto_csum_replace4" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x854e4136, "nf_ct_acct_add" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xf04a650c, "dst_release" },
	{ 0x54651f9b, "rhashtable_walk_next" },
	{ 0xa67f7993, "ipv4_dst_check" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0x53b954a2, "up_read" },
	{ 0xf188a662, "rhashtable_walk_exit" },
	{ 0xd4ec10e6, "BUG_func" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x200b2041, "in6addr_any" },
	{ 0xd86a776b, "flow_rule_alloc" },
	{ 0x750babe5, "ip6_dst_check" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0xdc08523f, "skb_gso_validate_network_len" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xd0ba7f1e, "ip_output" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x2f339795, "neigh_xmit" },
	{ 0xcc65f031, "flow_block_cb_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0xb3a71347, "ip6_output" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0xe5ce1a56, "rhashtable_walk_enter" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x91e48d88, "pskb_expand_head" },
	{ 0x20548812, "register_pernet_subsys" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack");

