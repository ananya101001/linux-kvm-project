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
	{ 0xb4b4b902, "powercap_unregister_control_type" },
	{ 0x50a50fc0, "rapl_find_package_domain_cpuslocked" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0xaf6ee275, "rapl_remove_package_cpuslocked" },
	{ 0x67a264d, "rapl_add_package_cpuslocked" },
	{ 0x6228c21f, "smp_call_function_single" },
	{ 0x66283031, "x86_match_cpu" },
	{ 0x3426ac54, "boot_cpu_data" },
	{ 0x122c3a7e, "_printk" },
	{ 0xa0397e7d, "powercap_register_control_type" },
	{ 0xb66eb73f, "__cpuhp_setup_state" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xa553201f, "platform_driver_unregister" },
	{ 0xa5e55057, "rdmsrl_safe_on_cpu" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe37056dc, "pv_ops" },
	{ 0xd4ec10e6, "BUG_func" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xbc1252bb, "__platform_driver_register" },
	{ 0xaab744b7, "__cpuhp_remove_state" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "intel_rapl_common");

MODULE_ALIAS("platform:intel_rapl_msr");