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
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xcc09a84e, "sysfs_remove_file_ns" },
	{ 0x5cad8430, "sysfs_create_link" },
	{ 0x5f93525c, "acpi_extract_package" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0xb7c0f443, "sort" },
	{ 0x7b68bebe, "sysfs_remove_link" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0x8f6013ad, "acpi_device_update_power" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x653fd312, "acpi_device_set_power" },
	{ 0xbc1252bb, "__platform_driver_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xd5c6515a, "thermal_cooling_device_unregister" },
	{ 0x99f2d00a, "sysfs_emit_at" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0xfa017be3, "is_acpi_device_node" },
	{ 0x87b76953, "devm_kmalloc" },
	{ 0xc62c42cf, "sysfs_create_file_ns" },
	{ 0xa553201f, "platform_driver_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x96848186, "scnprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x5ee33c33, "thermal_cooling_device_register" },
	{ 0x6cc72ac6, "__dynamic_dev_dbg" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:INT3404:*");
MODULE_ALIAS("acpi*:INTC1044:*");
MODULE_ALIAS("acpi*:INTC1048:*");
MODULE_ALIAS("acpi*:INTC1063:*");
MODULE_ALIAS("acpi*:INTC106A:*");
MODULE_ALIAS("acpi*:INTC10A2:*");
MODULE_ALIAS("acpi*:PNP0C0B:*");
