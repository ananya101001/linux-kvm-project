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
	{ 0x44f0ad9, "get_random_u16" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x532c04c0, "qdisc_watchdog_schedule_range_ns" },
	{ 0x91e48d88, "pskb_expand_head" },
	{ 0x64f4c46e, "__pskb_pull_tail" },
	{ 0x94e5ff8e, "tcf_classify" },
	{ 0xe065f55b, "consume_skb" },
	{ 0x92f97bbf, "netif_skb_features" },
	{ 0x5320317, "__skb_gso_segment" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x799b7b46, "register_qdisc" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0xc5eb9e1b, "qdisc_watchdog_cancel" },
	{ 0xbae8d821, "tcf_block_put" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x55fae9ab, "unregister_qdisc" },
	{ 0x36cd5f26, "nla_put" },
	{ 0x3f178e25, "nla_put_64bit" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xd6e5a44c, "skb_trim" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x56470118, "__warn_printk" },
	{ 0x42ba52e3, "qdisc_watchdog_init" },
	{ 0xa84ff37b, "tcf_block_get" },
	{ 0x31f2a14c, "__kvmalloc_node_noprof" },
	{ 0x49efda31, "gnet_stats_copy_queue" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xeff39aad, "flow_keys_dissector" },
	{ 0xf35293b1, "__skb_flow_dissect" },
	{ 0x460f4a34, "flow_hash_from_keys" },
	{ 0xa2e1c0b9, "nf_ct_get_tuple_skb" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0x165d5a4a, "qdisc_tree_reduce_backlog" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

