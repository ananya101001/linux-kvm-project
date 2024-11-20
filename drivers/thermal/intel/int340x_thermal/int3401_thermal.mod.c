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
	{ 0x434f7c99, "proc_thermal_remove" },
	{ 0x87b76953, "devm_kmalloc" },
	{ 0xa4f3959, "proc_thermal_add" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xa553201f, "platform_driver_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbc1252bb, "__platform_driver_register" },
	{ 0x8d9d600c, "proc_thermal_resume" },
	{ 0x648c014a, "proc_thermal_suspend" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "processor_thermal_device");

MODULE_ALIAS("acpi*:INT3401:*");
