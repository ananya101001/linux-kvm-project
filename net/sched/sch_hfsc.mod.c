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
	{ 0xded39a6b, "gen_kill_estimator" },
	{ 0x37a0cba, "kfree" },
	{ 0xf53d4c26, "qdisc_class_hash_destroy" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xece784c2, "rb_first" },
	{ 0xdf2c2742, "rb_last" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x165d5a4a, "qdisc_tree_reduce_backlog" },
	{ 0x4c0de954, "qdisc_class_hash_remove" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xca9360b5, "rb_next" },
	{ 0x532c04c0, "qdisc_watchdog_schedule_range_ns" },
	{ 0x8b2b9ef2, "qdisc_warn_nonwc" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xf630261, "gen_replace_estimator" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x5e9a01ce, "gen_new_estimator" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x94e5ff8e, "tcf_classify" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x799b7b46, "register_qdisc" },
	{ 0x36cd5f26, "nla_put" },
	{ 0xd6e5a44c, "skb_trim" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x5ad11a13, "qdisc_reset" },
	{ 0xc5eb9e1b, "qdisc_watchdog_cancel" },
	{ 0x42ba52e3, "qdisc_watchdog_init" },
	{ 0x117093be, "qdisc_class_hash_init" },
	{ 0xa84ff37b, "tcf_block_get" },
	{ 0x866a62b2, "gnet_stats_basic_sync_init" },
	{ 0x5b605494, "pfifo_qdisc_ops" },
	{ 0x45b1b8b8, "qdisc_create_dflt" },
	{ 0xb2d37e5e, "qdisc_hash_add" },
	{ 0x7b9d9306, "qdisc_class_hash_insert" },
	{ 0x24ddaf3c, "qdisc_class_hash_grow" },
	{ 0x4efaf33e, "noop_qdisc" },
	{ 0xfc421e79, "gnet_stats_add_queue" },
	{ 0x94eee8bc, "gnet_stats_copy_basic" },
	{ 0x791606be, "gnet_stats_copy_rate_est" },
	{ 0x49efda31, "gnet_stats_copy_queue" },
	{ 0x7290e20e, "gnet_stats_copy_app" },
	{ 0x56470118, "__warn_printk" },
	{ 0x55fae9ab, "unregister_qdisc" },
	{ 0xbae8d821, "tcf_block_put" },
	{ 0x85fddb68, "qdisc_put" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");
