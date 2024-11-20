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
	{ 0x36cd5f26, "nla_put" },
	{ 0xd6e5a44c, "skb_trim" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x5b605494, "pfifo_qdisc_ops" },
	{ 0x45b1b8b8, "qdisc_create_dflt" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xb2d37e5e, "qdisc_hash_add" },
	{ 0x42ba52e3, "qdisc_watchdog_init" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xfc421e79, "gnet_stats_add_queue" },
	{ 0x5ad11a13, "qdisc_reset" },
	{ 0x165d5a4a, "qdisc_tree_reduce_backlog" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x4efaf33e, "noop_qdisc" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x799b7b46, "register_qdisc" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x70a09e5e, "__ethtool_get_link_ksettings" },
	{ 0x5664c757, "__dynamic_netdev_dbg" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x122c3a7e, "_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x532c04c0, "qdisc_watchdog_schedule_range_ns" },
	{ 0xc5eb9e1b, "qdisc_watchdog_cancel" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x85fddb68, "qdisc_put" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe0f1390c, "rtnl_kfree_skbs" },
	{ 0x55fae9ab, "unregister_qdisc" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

