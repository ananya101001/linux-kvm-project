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
	{ 0x37a0cba, "kfree" },
	{ 0xd91e03bc, "power_supply_get_drvdata" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x3f941f1b, "acpi_bus_unregister_driver" },
	{ 0x5fb4dbaf, "power_supply_changed" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x96f5f143, "power_supply_register" },
	{ 0x122c3a7e, "_printk" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x556cca46, "x86_apple_machine" },
	{ 0x87bd07bd, "acpi_smbus_register_callback" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x566b7206, "param_ops_uint" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfc167278, "__acpi_bus_register_driver" },
	{ 0x4f6c2360, "acpi_smbus_read" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x96eb492d, "acpi_smbus_write" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x1c8984c7, "acpi_smbus_unregister_callback" },
	{ 0x38bfdb90, "power_supply_unregister" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "sbshc");

MODULE_ALIAS("acpi*:ACPI0002:*");
