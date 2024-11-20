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
	{ 0xe37056dc, "pv_ops" },
	{ 0xd4ec10e6, "BUG_func" },
	{ 0xb66eb73f, "__cpuhp_setup_state" },
	{ 0xf8bb134c, "perf_pmu_register" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x2a559e4c, "events_sysfs_show" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf474c21c, "bitmap_print_to_pagebuf" },
	{ 0x3b83610f, "cpu_sibling_map" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xf3375236, "perf_pmu_migrate_context" },
	{ 0xaab744b7, "__cpuhp_remove_state" },
	{ 0x9e622e92, "perf_pmu_unregister" },
	{ 0x66283031, "x86_match_cpu" },
	{ 0x3426ac54, "boot_cpu_data" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

