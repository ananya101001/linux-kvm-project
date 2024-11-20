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
	{ 0x56470118, "__warn_printk" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x5b605494, "pfifo_qdisc_ops" },
	{ 0xbfab7505, "fifo_create_dflt" },
	{ 0xb2d37e5e, "qdisc_hash_add" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa84ff37b, "tcf_block_get" },
	{ 0x94e5ff8e, "tcf_classify" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0x70002fe8, "siphash_1u32" },
	{ 0x44f0ad9, "get_random_u16" },
	{ 0x89662bed, "skb_get_hash_perturb" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x799b7b46, "register_qdisc" },
	{ 0x7290e20e, "gnet_stats_copy_app" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x5ad11a13, "qdisc_reset" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xbae8d821, "tcf_block_put" },
	{ 0x85fddb68, "qdisc_put" },
	{ 0x55fae9ab, "unregister_qdisc" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x36cd5f26, "nla_put" },
	{ 0xd6e5a44c, "skb_trim" },
	{ 0x4efaf33e, "noop_qdisc" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xfc421e79, "gnet_stats_add_queue" },
	{ 0x165d5a4a, "qdisc_tree_reduce_backlog" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

