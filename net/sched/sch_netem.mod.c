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
	{ 0x55fae9ab, "unregister_qdisc" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xfc421e79, "gnet_stats_add_queue" },
	{ 0x165d5a4a, "qdisc_tree_reduce_backlog" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x36cd5f26, "nla_put" },
	{ 0x3f178e25, "nla_put_64bit" },
	{ 0xd6e5a44c, "skb_trim" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xa965ca81, "reciprocal_value" },
	{ 0xe3ff2c41, "get_random_u64" },
	{ 0x42ba52e3, "qdisc_watchdog_init" },
	{ 0x1a9a433c, "prandom_u32_state" },
	{ 0xf3662c8e, "kfree_skb_list_reason" },
	{ 0x532c04c0, "qdisc_watchdog_schedule_range_ns" },
	{ 0xeee6d7f3, "skb_orphan_partial" },
	{ 0xdf2c2742, "rb_last" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xa542eb90, "skb_clone" },
	{ 0x92f97bbf, "netif_skb_features" },
	{ 0x5320317, "__skb_gso_segment" },
	{ 0xe065f55b, "consume_skb" },
	{ 0x9858f364, "get_random_u8" },
	{ 0xfba7a5f5, "__get_random_u32_below" },
	{ 0x1c783354, "skb_copy" },
	{ 0xaa866b39, "skb_checksum_help" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x122c3a7e, "_printk" },
	{ 0x799b7b46, "register_qdisc" },
	{ 0x31f2a14c, "__kvmalloc_node_noprof" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc5eb9e1b, "qdisc_watchdog_cancel" },
	{ 0x85fddb68, "qdisc_put" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xece784c2, "rb_first" },
	{ 0xca9360b5, "rb_next" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xe0f1390c, "rtnl_kfree_skbs" },
	{ 0x5ad11a13, "qdisc_reset" },
	{ 0x56470118, "__warn_printk" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

