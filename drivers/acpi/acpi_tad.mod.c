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
	{ 0x46c61de3, "acpi_install_cmos_rtc_space_handler" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0x87b76953, "devm_kmalloc" },
	{ 0x221be355, "device_wakeup_enable" },
	{ 0x31b164e7, "__pm_runtime_set_status" },
	{ 0xa76c6a6e, "pm_runtime_enable" },
	{ 0x55db1940, "__pm_runtime_suspend" },
	{ 0xa1b7a4fb, "sysfs_create_group" },
	{ 0x5a549f7, "_dev_info" },
	{ 0xb3f548ad, "kmemdup_nul" },
	{ 0x349cba85, "strchr" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbc1252bb, "__platform_driver_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xfa017be3, "is_acpi_device_node" },
	{ 0x8188f58f, "__pm_runtime_resume" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x538246ce, "__pm_runtime_idle" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x37a0cba, "kfree" },
	{ 0xa553201f, "platform_driver_unregister" },
	{ 0xbaa39397, "device_wakeup_disable" },
	{ 0x3270b058, "device_set_wakeup_capable" },
	{ 0x980d5636, "sysfs_remove_group" },
	{ 0xc80d13ee, "__pm_runtime_disable" },
	{ 0x3a9e8610, "acpi_remove_cmos_rtc_space_handler" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:ACPI000E:*");
