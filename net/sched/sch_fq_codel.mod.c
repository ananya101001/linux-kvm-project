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
	{ 0x7290e20e, "gnet_stats_copy_app" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x56470118, "__warn_printk" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0x64f4c46e, "__pskb_pull_tail" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xa84ff37b, "tcf_block_get" },
	{ 0x31f2a14c, "__kvmalloc_node_noprof" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x799b7b46, "register_qdisc" },
	{ 0xbae8d821, "tcf_block_put" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xe0f1390c, "rtnl_kfree_skbs" },
	{ 0xfb578fc5, "memset" },
	{ 0x94e5ff8e, "tcf_classify" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x165d5a4a, "qdisc_tree_reduce_backlog" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xe5497da, "__skb_get_hash_net" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x55fae9ab, "unregister_qdisc" },
	{ 0x36cd5f26, "nla_put" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0x49efda31, "gnet_stats_copy_queue" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

