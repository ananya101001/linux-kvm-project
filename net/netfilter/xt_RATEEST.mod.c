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

KSYMTAB_FUNC(xt_rateest_lookup, "_gpl", "");
KSYMTAB_FUNC(xt_rateest_put, "_gpl", "");

SYMBOL_CRC(xt_rateest_lookup, 0x19f77f77, "_gpl");
SYMBOL_CRC(xt_rateest_put, 0xa7a56313, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xded39a6b, "gen_kill_estimator" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x20548812, "register_pernet_subsys" },
	{ 0xc2d5d571, "xt_register_targets" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9d47a039, "xt_unregister_targets" },
	{ 0x279ed4c, "unregister_pernet_subsys" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa916b694, "strnlen" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x453ca149, "__do_once_done" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x866a62b2, "gnet_stats_basic_sync_init" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x5e9a01ce, "gen_new_estimator" },
	{ 0x37a0cba, "kfree" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "x_tables");

