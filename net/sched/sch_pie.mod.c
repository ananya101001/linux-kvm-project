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

KSYMTAB_FUNC(pie_drop_early, "_gpl", "");
KSYMTAB_FUNC(pie_process_dequeue, "_gpl", "");
KSYMTAB_FUNC(pie_calculate_probability, "_gpl", "");

SYMBOL_CRC(pie_drop_early, 0x31ebe818, "_gpl");
SYMBOL_CRC(pie_process_dequeue, 0x4057d875, "_gpl");
SYMBOL_CRC(pie_calculate_probability, 0x6ce9b467, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xe0f1390c, "rtnl_kfree_skbs" },
	{ 0x56470118, "__warn_printk" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x55fae9ab, "unregister_qdisc" },
	{ 0x36cd5f26, "nla_put" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xd6e5a44c, "skb_trim" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x165d5a4a, "qdisc_tree_reduce_backlog" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x799b7b46, "register_qdisc" },
	{ 0x7290e20e, "gnet_stats_copy_app" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

