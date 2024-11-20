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
	{ 0xf9a482f9, "msleep" },
	{ 0x2bdf5ab0, "pm_wakeup_pending" },
	{ 0x6cc72ac6, "__dynamic_dev_dbg" },
	{ 0xe28725a8, "thermal_zone_device_unregister" },
	{ 0xedc03953, "iounmap" },
	{ 0xdfaa93c9, "pci_release_regions" },
	{ 0x544253f5, "pci_disable_device" },
	{ 0x9738a5c2, "thermal_zone_device_priv" },
	{ 0xd79a07ea, "pci_unregister_driver" },
	{ 0x797d8409, "thermal_zone_device_type" },
	{ 0x6b0b462f, "thermal_zone_device" },
	{ 0x87b76953, "devm_kmalloc" },
	{ 0xaad21b46, "pci_enable_device" },
	{ 0xb2cacf1e, "pci_request_regions" },
	{ 0xe309dde, "pci_ioremap_bar" },
	{ 0xfa017be3, "is_acpi_device_node" },
	{ 0x3d8ee44d, "thermal_acpi_passive_trip_temp" },
	{ 0x3ea53409, "thermal_zone_device_register_with_trips" },
	{ 0xb332f7f0, "thermal_zone_device_enable" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x423a7b8f, "__pci_register_driver" },
	{ 0x42635d55, "pm_suspend_global_flags" },
	{ 0x5a549f7, "_dev_info" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d00009C24sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C24sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CA4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D31sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A131sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DF9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A379sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002F9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000006F9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A1B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D24sv*sd*bc*sc*i*");
