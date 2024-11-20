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
	{ 0xbd48ea6a, "__max_dies_per_package" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xe37056dc, "pv_ops" },
	{ 0xe9084e8c, "perf_msr_probe" },
	{ 0x3426ac54, "boot_cpu_data" },
	{ 0xd4ec10e6, "BUG_func" },
	{ 0x66283031, "x86_match_cpu" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf8bb134c, "perf_pmu_register" },
	{ 0x1a1402be, "perf_event_sysfs_show" },
	{ 0x9e622e92, "perf_pmu_unregister" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod001E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod001A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod002E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0025:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod002C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod002F:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod002A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod002D:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod003A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod003E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod003C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod003F:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0046:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0045:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0037:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod004D:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod004C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod003D:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0056:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0047:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod004F:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod004E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod005E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0055:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod008E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod009E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00A6:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00A5:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0066:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0057:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0085:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod005C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod005F:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod007A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0086:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0096:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod009C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00BE:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00AF:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00B6:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod007E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod007D:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod006A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod006C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod008F:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00CF:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00AD:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00AE:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod008C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod008D:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00A7:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0097:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod009A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00B7:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00BA:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00BF:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00AC:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00AA:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00C6:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00C5:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00B5:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00BD:feature:*");
