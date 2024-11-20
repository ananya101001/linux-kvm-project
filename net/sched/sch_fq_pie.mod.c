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
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x55fae9ab, "unregister_qdisc" },
	{ 0x36cd5f26, "nla_put" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xd6e5a44c, "skb_trim" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x94e5ff8e, "tcf_classify" },
	{ 0x31ebe818, "pie_drop_early" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe5497da, "__skb_get_hash_net" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0x4057d875, "pie_process_dequeue" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x7290e20e, "gnet_stats_copy_app" },
	{ 0x56470118, "__warn_printk" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x165d5a4a, "qdisc_tree_reduce_backlog" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa84ff37b, "tcf_block_get" },
	{ 0x31f2a14c, "__kvmalloc_node_noprof" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x799b7b46, "register_qdisc" },
	{ 0xe0f1390c, "rtnl_kfree_skbs" },
	{ 0xbae8d821, "tcf_block_put" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x6ce9b467, "pie_calculate_probability" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "sch_pie");

