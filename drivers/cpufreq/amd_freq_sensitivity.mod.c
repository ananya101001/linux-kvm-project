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
	{ 0x3426ac54, "boot_cpu_data" },
	{ 0xa90c8360, "pci_get_device" },
	{ 0xf727c35a, "pci_dev_put" },
	{ 0xe37056dc, "pv_ops" },
	{ 0xd4ec10e6, "BUG_func" },
	{ 0x7e6ef8a4, "od_register_powersave_bias_handler" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x20ba4f3e, "rdmsr_on_cpu" },
	{ 0x626da5f, "od_unregister_powersave_bias_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "cpufreq_ondemand");

MODULE_ALIAS("cpu:type:x86,ven*fam*mod*:feature:*00E9*");
