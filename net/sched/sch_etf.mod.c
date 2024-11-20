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
	{ 0xa5526619, "rb_insert_color" },
	{ 0x532c04c0, "qdisc_watchdog_schedule_range_ns" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x46a85c08, "qdisc_watchdog_init_clockid" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xca9360b5, "rb_next" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xe0f1390c, "rtnl_kfree_skbs" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf3662c8e, "kfree_skb_list_reason" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x799b7b46, "register_qdisc" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0xc5eb9e1b, "qdisc_watchdog_cancel" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xa542eb90, "skb_clone" },
	{ 0x4bfaa1aa, "sock_queue_err_skb" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0x55fae9ab, "unregister_qdisc" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

