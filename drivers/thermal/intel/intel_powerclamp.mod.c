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
	{ 0xb86f74c5, "free_cpumask_var" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x50472d9a, "single_open" },
	{ 0x377214d3, "seq_printf" },
	{ 0xc18575af, "idle_inject_set_duration" },
	{ 0x60b2e814, "idle_inject_register" },
	{ 0x95e93783, "idle_inject_set_latency" },
	{ 0x5b3a2cd6, "idle_inject_start" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x85c2b7eb, "idle_inject_stop" },
	{ 0xf0e96547, "idle_inject_unregister" },
	{ 0xa66c1ea7, "idle_inject_register_full" },
	{ 0x39081193, "__max_logical_packages" },
	{ 0xbd48ea6a, "__max_dies_per_package" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0xd5c6515a, "thermal_cooling_device_unregister" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x8656f320, "debugfs_remove" },
	{ 0x66283031, "x86_match_cpu" },
	{ 0x5ee33c33, "thermal_cooling_device_register" },
	{ 0x8b0ac9d7, "debugfs_create_dir" },
	{ 0x51cd0202, "debugfs_create_file" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xc520b851, "seq_lseek" },
	{ 0x5c4440b5, "seq_read" },
	{ 0xd4f9fdc4, "single_release" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xeacb1238, "param_get_int" },
	{ 0x98c1ff80, "param_get_byte" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe37056dc, "pv_ops" },
	{ 0xd4ec10e6, "BUG_func" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x122c3a7e, "_printk" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf474c21c, "bitmap_print_to_pagebuf" },
	{ 0x7aff77a3, "__cpu_present_mask" },
	{ 0x6d11488, "__bitmap_equal" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe23b37f, "alloc_cpumask_var_node" },
	{ 0x754d539c, "strlen" },
	{ 0xb97220ff, "bitmap_parse" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("cpu:type:x86,ven0000fam*mod*:feature:*0083*");
