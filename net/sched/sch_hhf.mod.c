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
	{ 0x7aa1756e, "kvfree" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x37a0cba, "kfree" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xe0f1390c, "rtnl_kfree_skbs" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x89662bed, "skb_get_hash_perturb" },
	{ 0x165d5a4a, "qdisc_tree_reduce_backlog" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x56470118, "__warn_printk" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x31f2a14c, "__kvmalloc_node_noprof" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x799b7b46, "register_qdisc" },
	{ 0x7290e20e, "gnet_stats_copy_app" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x55fae9ab, "unregister_qdisc" },
	{ 0x36cd5f26, "nla_put" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

