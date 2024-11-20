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

KSYMTAB_FUNC(acpi_parse_trt, "", "");
KSYMTAB_FUNC(acpi_parse_art, "", "");
KSYMTAB_FUNC(acpi_thermal_rel_misc_device_add, "", "");
KSYMTAB_FUNC(acpi_thermal_rel_misc_device_remove, "", "");

SYMBOL_CRC(acpi_parse_trt, 0xf0f9fe0d, "");
SYMBOL_CRC(acpi_parse_art, 0x9103c585, "");
SYMBOL_CRC(acpi_thermal_rel_misc_device_add, 0x1887763e, "");
SYMBOL_CRC(acpi_thermal_rel_misc_device_remove, 0x86c998e6, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xea43f98d, "misc_register" },
	{ 0xcc584249, "nonseekable_open" },
	{ 0xaebd12f0, "acpi_get_name" },
	{ 0x37a0cba, "kfree" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xf80d81c2, "misc_deregister" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x5f93525c, "acpi_extract_package" },
	{ 0x46cbfee1, "acpi_fetch_acpi_dev" },
	{ 0xa916b694, "strnlen" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

