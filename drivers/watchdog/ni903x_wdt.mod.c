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
	{ 0x6cc72ac6, "__dynamic_dev_dbg" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0x3f941f1b, "acpi_bus_unregister_driver" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x26f50494, "__devm_request_region" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0x566b7206, "param_ops_uint" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xfc167278, "__acpi_bus_register_driver" },
	{ 0xc83ce30b, "watchdog_unregister_device" },
	{ 0x87b76953, "devm_kmalloc" },
	{ 0x2e0a637d, "acpi_walk_resources" },
	{ 0x1754c363, "watchdog_init_timeout" },
	{ 0xa5f17a9a, "watchdog_register_device" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "watchdog");

MODULE_ALIAS("acpi*:NIC775C:*");
