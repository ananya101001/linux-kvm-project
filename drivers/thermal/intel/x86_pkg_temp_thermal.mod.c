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
	{ 0x90de0452, "platform_thermal_package_notify" },
	{ 0x8a7cb9c4, "platform_thermal_package_rate_control" },
	{ 0xaab744b7, "__cpuhp_remove_state" },
	{ 0x8656f320, "debugfs_remove" },
	{ 0x37a0cba, "kfree" },
	{ 0x66283031, "x86_match_cpu" },
	{ 0x39081193, "__max_logical_packages" },
	{ 0xbd48ea6a, "__max_dies_per_package" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xb66eb73f, "__cpuhp_setup_state" },
	{ 0x8b0ac9d7, "debugfs_create_dir" },
	{ 0xb35da0cc, "debugfs_create_u32" },
	{ 0xa6729c43, "cpu_info" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe28725a8, "thermal_zone_device_unregister" },
	{ 0xe37056dc, "pv_ops" },
	{ 0xd4ec10e6, "BUG_func" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3ea53409, "thermal_zone_device_register_with_trips" },
	{ 0xb332f7f0, "thermal_zone_device_enable" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xf5f214b9, "thermal_clear_package_intr_status" },
	{ 0x94c848a2, "thermal_zone_device_update" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x9738a5c2, "thermal_zone_device_priv" },
	{ 0xa1186518, "intel_tcc_get_tjmax" },
	{ 0x20ba4f3e, "rdmsr_on_cpu" },
	{ 0x23d1b90, "wrmsr_on_cpu" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdb0da161, "intel_tcc_get_temp" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("cpu:type:x86,ven0000fam*mod*:feature:*01C6*");
