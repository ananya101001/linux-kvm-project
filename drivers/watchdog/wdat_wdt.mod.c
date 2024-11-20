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
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa553201f, "platform_driver_unregister" },
	{ 0xec788566, "acpi_target_system_state" },
	{ 0x16cdc340, "acpi_get_table" },
	{ 0x87b76953, "devm_kmalloc" },
	{ 0x2de77dce, "devm_ioport_map" },
	{ 0x77dfecf7, "devm_ioremap_resource" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0x40333ad, "devm_watchdog_register_device" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0x22199426, "param_ops_bool" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbc1252bb, "__platform_driver_register" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x842c8e9d, "ioread16" },
	{ 0x6cc72ac6, "__dynamic_dev_dbg" },
	{ 0xb19b445, "ioread8" },
	{ 0xa78af5f3, "ioread32" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x848d372e, "iowrite8" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "watchdog");

