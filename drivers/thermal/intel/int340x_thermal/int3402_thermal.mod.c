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
	{ 0x55ec1953, "int340x_thermal_zone_remove" },
	{ 0xfa017be3, "is_acpi_device_node" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0x87b76953, "devm_kmalloc" },
	{ 0xe3746345, "int340x_thermal_zone_add" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xa553201f, "platform_driver_unregister" },
	{ 0x94c848a2, "thermal_zone_device_update" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbc1252bb, "__platform_driver_register" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "int340x_thermal_zone");

MODULE_ALIAS("acpi*:INT3402:*");
