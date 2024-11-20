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
	{ 0xb66eb73f, "__cpuhp_setup_state" },
	{ 0xf8bb134c, "perf_pmu_register" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x122c3a7e, "_printk" },
	{ 0xaab744b7, "__cpuhp_remove_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xa6729c43, "cpu_info" },
	{ 0x3c427f67, "cpu_die_map" },
	{ 0xb6cb556a, "_find_first_and_bit" },
	{ 0xa9785b49, "cpu_core_map" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x618911fc, "numa_node" },
	{ 0xd9e6ec72, "__kmalloc_cache_node_noprof" },
	{ 0x48879f20, "hrtimer_init" },
	{ 0x9e622e92, "perf_pmu_unregister" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xf3375236, "perf_pmu_migrate_context" },
	{ 0x4a666d56, "hrtimer_cancel" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf07464e4, "hrtimer_forward" },
	{ 0x1a1402be, "perf_event_sysfs_show" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xe37056dc, "pv_ops" },
	{ 0xd4ec10e6, "BUG_func" },
	{ 0xd955afa6, "hrtimer_start_range_ns" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf474c21c, "bitmap_print_to_pagebuf" },
	{ 0x66283031, "x86_match_cpu" },
	{ 0xe9084e8c, "perf_msr_probe" },
	{ 0x39081193, "__max_logical_packages" },
	{ 0x3426ac54, "boot_cpu_data" },
	{ 0xbd48ea6a, "__max_dies_per_package" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("cpu:type:x86,ven*fam*mod*:feature:*007D*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod002A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod002D:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod003A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod003E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod003C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod003F:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0045:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0046:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod003D:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0047:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod004F:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0056:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0057:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0085:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod004E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod005E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0055:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod008E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod009E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0066:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod005C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod005F:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod007A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod007E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod007D:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod006C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod006A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00A6:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00A5:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod008C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod008D:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0097:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod009A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00BE:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod008F:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00CF:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00B7:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00BA:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00BF:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00AC:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00AA:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00C5:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00C6:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00BD:feature:*");
