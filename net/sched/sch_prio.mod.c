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
	{ 0x85fddb68, "qdisc_put" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xfc421e79, "gnet_stats_add_queue" },
	{ 0x165d5a4a, "qdisc_tree_reduce_backlog" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x56d7d316, "qdisc_offload_graft_helper" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x56470118, "__warn_printk" },
	{ 0x5b605494, "pfifo_qdisc_ops" },
	{ 0x45b1b8b8, "qdisc_create_dflt" },
	{ 0xb2d37e5e, "qdisc_hash_add" },
	{ 0x4efaf33e, "noop_qdisc" },
	{ 0xa84ff37b, "tcf_block_get" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x799b7b46, "register_qdisc" },
	{ 0xfffbcf0f, "qdisc_offload_dump_helper" },
	{ 0x36cd5f26, "nla_put" },
	{ 0xd6e5a44c, "skb_trim" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x5ad11a13, "qdisc_reset" },
	{ 0x94e5ff8e, "tcf_classify" },
	{ 0x94eee8bc, "gnet_stats_copy_basic" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x49efda31, "gnet_stats_copy_queue" },
	{ 0x55fae9ab, "unregister_qdisc" },
	{ 0xbae8d821, "tcf_block_put" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

