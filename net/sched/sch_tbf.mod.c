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
	{ 0xfffbcf0f, "qdisc_offload_dump_helper" },
	{ 0x36cd5f26, "nla_put" },
	{ 0x3f178e25, "nla_put_64bit" },
	{ 0xd6e5a44c, "skb_trim" },
	{ 0x4efaf33e, "noop_qdisc" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xfc421e79, "gnet_stats_add_queue" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x56d7d316, "qdisc_offload_graft_helper" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x56470118, "__warn_printk" },
	{ 0x532c04c0, "qdisc_watchdog_schedule_range_ns" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xb6e36ce2, "psched_ratecfg_precompute" },
	{ 0x81c20683, "fifo_set_limit" },
	{ 0x8c459bf3, "qdisc_get_rtab" },
	{ 0xa61ced89, "qdisc_put_rtab" },
	{ 0x3ae74f69, "bfifo_qdisc_ops" },
	{ 0xbfab7505, "fifo_create_dflt" },
	{ 0xb2d37e5e, "qdisc_hash_add" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0x42ba52e3, "qdisc_watchdog_init" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x799b7b46, "register_qdisc" },
	{ 0xc5eb9e1b, "qdisc_watchdog_cancel" },
	{ 0x85fddb68, "qdisc_put" },
	{ 0x5ad11a13, "qdisc_reset" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x4f0d13d, "skb_gso_validate_mac_len" },
	{ 0x92f97bbf, "netif_skb_features" },
	{ 0x5320317, "__skb_gso_segment" },
	{ 0x165d5a4a, "qdisc_tree_reduce_backlog" },
	{ 0xe065f55b, "consume_skb" },
	{ 0x55fae9ab, "unregister_qdisc" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

