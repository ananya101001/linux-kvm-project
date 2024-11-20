#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(proc_thermal_rapl_add, "_gpl", "");
KSYMTAB_FUNC(proc_thermal_rapl_remove, "_gpl", "");

SYMBOL_CRC(proc_thermal_rapl_add, 0x433c9502, "_gpl");
SYMBOL_CRC(proc_thermal_rapl_remove, 0x098e82d4, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xa0397e7d, "powercap_register_control_type" },
	{ 0x363c21dd, "rapl_find_package_domain" },
	{ 0xb4b4b902, "powercap_unregister_control_type" },
	{ 0x869bfecd, "rapl_add_package" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x11fc3226, "rapl_remove_package" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "intel_rapl_common");

