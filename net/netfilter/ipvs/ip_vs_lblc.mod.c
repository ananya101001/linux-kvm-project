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
	{ 0xc38c83b8, "mod_timer" },
	{ 0x5ac8c04c, "unregister_net_sysctl_table" },
	{ 0xe5590ebd, "init_net" },
	{ 0x37a0cba, "kfree" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x7919d80, "init_user_ns" },
	{ 0xa4f84056, "register_net_sysctl_sz" },
	{ 0x58295f41, "unregister_ip_vs_scheduler" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdf237453, "timer_shutdown_sync" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xf915d9d, "ip_vs_scheduler_err" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xac4038d6, "proc_dointvec_jiffies" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x20548812, "register_pernet_subsys" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xae536b23, "register_ip_vs_scheduler" },
	{ 0x279ed4c, "unregister_pernet_subsys" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "ip_vs");

