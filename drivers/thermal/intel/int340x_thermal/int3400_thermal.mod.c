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
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xc62c42cf, "sysfs_create_file_ns" },
	{ 0xfa017be3, "is_acpi_device_node" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xb89b6e6b, "guid_parse" },
	{ 0x9103c585, "acpi_parse_art" },
	{ 0xf0f9fe0d, "acpi_parse_trt" },
	{ 0x1b02271f, "thermal_tripless_zone_device_register" },
	{ 0x1887763e, "acpi_thermal_rel_misc_device_add" },
	{ 0xa1b7a4fb, "sysfs_create_group" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0x980d5636, "sysfs_remove_group" },
	{ 0xe28725a8, "thermal_zone_device_unregister" },
	{ 0x6cc72ac6, "__dynamic_dev_dbg" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x86c998e6, "acpi_thermal_rel_misc_device_remove" },
	{ 0x6b0b462f, "thermal_zone_device" },
	{ 0x797d8409, "thermal_zone_device_type" },
	{ 0xf818ae8e, "kobject_uevent_env" },
	{ 0x9738a5c2, "thermal_zone_device_priv" },
	{ 0xb8879222, "sysfs_bin_attr_simple_read" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xbc1252bb, "__platform_driver_register" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb26b8c8, "acpi_run_osc" },
	{ 0x37a0cba, "kfree" },
	{ 0x5a921311, "strncmp" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x99f2d00a, "sysfs_emit_at" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xcc09a84e, "sysfs_remove_file_ns" },
	{ 0xa553201f, "platform_driver_unregister" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "acpi_thermal_rel");

MODULE_ALIAS("acpi*:INT3400:*");
MODULE_ALIAS("acpi*:INTC1040:*");
MODULE_ALIAS("acpi*:INTC1041:*");
MODULE_ALIAS("acpi*:INTC1042:*");
MODULE_ALIAS("acpi*:INTC1068:*");
MODULE_ALIAS("acpi*:INTC10A0:*");
