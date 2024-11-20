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

KSYMTAB_FUNC(rapl_package_add_pmu, "_gpl", "");
KSYMTAB_FUNC(rapl_package_remove_pmu, "_gpl", "");
KSYMTAB_FUNC(rapl_remove_package_cpuslocked, "_gpl", "");
KSYMTAB_FUNC(rapl_remove_package, "_gpl", "");
KSYMTAB_FUNC(rapl_find_package_domain_cpuslocked, "_gpl", "");
KSYMTAB_FUNC(rapl_find_package_domain, "_gpl", "");
KSYMTAB_FUNC(rapl_add_package_cpuslocked, "_gpl", "");
KSYMTAB_FUNC(rapl_add_package, "_gpl", "");

SYMBOL_CRC(rapl_package_add_pmu, 0xc15257bc, "_gpl");
SYMBOL_CRC(rapl_package_remove_pmu, 0x3d706f96, "_gpl");
SYMBOL_CRC(rapl_remove_package_cpuslocked, 0xaf6ee275, "_gpl");
SYMBOL_CRC(rapl_remove_package, 0x11fc3226, "_gpl");
SYMBOL_CRC(rapl_find_package_domain_cpuslocked, 0x50a50fc0, "_gpl");
SYMBOL_CRC(rapl_find_package_domain, 0x363c21dd, "_gpl");
SYMBOL_CRC(rapl_add_package_cpuslocked, 0x067a264d, "_gpl");
SYMBOL_CRC(rapl_add_package, 0x869bfecd, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9e622e92, "perf_pmu_unregister" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xd955afa6, "hrtimer_start_range_ns" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x4a666d56, "hrtimer_cancel" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0xf07464e4, "hrtimer_forward" },
	{ 0xe37056dc, "pv_ops" },
	{ 0xd4ec10e6, "BUG_func" },
	{ 0x10f20687, "powercap_unregister_zone" },
	{ 0x6228c21f, "smp_call_function_single" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xbd48ea6a, "__max_dies_per_package" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xe060d7b4, "powercap_register_zone" },
	{ 0x1a1402be, "perf_event_sysfs_show" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0x3426ac54, "boot_cpu_data" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xa6729c43, "cpu_info" },
	{ 0x122c3a7e, "_printk" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x7a88da87, "iosf_mbi_write" },
	{ 0x86c7272b, "iosf_mbi_read" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0xe23b37f, "alloc_cpumask_var_node" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xfb578fc5, "memset" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xf474c21c, "bitmap_print_to_pagebuf" },
	{ 0xb86f74c5, "free_cpumask_var" },
	{ 0x37a0cba, "kfree" },
	{ 0x66283031, "x86_match_cpu" },
	{ 0x3972051f, "platform_device_alloc" },
	{ 0xde5fe577, "platform_device_add" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0xe2961b01, "platform_device_del" },
	{ 0x49c5dd60, "platform_device_put" },
	{ 0xfd4a5a9c, "platform_device_unregister" },
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0x48879f20, "hrtimer_init" },
	{ 0xf8bb134c, "perf_pmu_register" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "iosf_mbi");

MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod002A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod002D:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod003A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod003E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod003C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0045:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0046:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod003F:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod003D:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0047:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0056:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod004F:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod005E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod004E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0055:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod008E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod009E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0066:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod007E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod007D:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod009D:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod006A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod006C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00A6:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00A5:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod008C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod008D:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00A7:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0097:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod009A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00BE:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00B7:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00BA:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00BF:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00AC:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00AA:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod008F:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00CF:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00BD:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00C5:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00C6:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00B5:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod008A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0037:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod004C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod004A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod005A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod005C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod007A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod005F:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0096:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0086:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod009C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0057:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0085:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0002fam0017mod*:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0002fam0019mod*:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0002fam001Amod*:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0009fam0018mod*:feature:*");
