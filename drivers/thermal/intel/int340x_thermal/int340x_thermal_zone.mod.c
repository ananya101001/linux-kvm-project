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

KSYMTAB_FUNC(int340x_thermal_zone_add, "_gpl", "");
KSYMTAB_FUNC(int340x_thermal_zone_remove, "_gpl", "");
KSYMTAB_FUNC(int340x_thermal_update_trips, "_gpl", "");

SYMBOL_CRC(int340x_thermal_zone_add, 0xe3746345, "_gpl");
SYMBOL_CRC(int340x_thermal_zone_remove, 0x55ec1953, "_gpl");
SYMBOL_CRC(int340x_thermal_update_trips, 0xc5d178c2, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe28725a8, "thermal_zone_device_unregister" },
	{ 0x7de65a03, "acpi_lpat_free_conversion_table" },
	{ 0x37a0cba, "kfree" },
	{ 0x9738a5c2, "thermal_zone_device_priv" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xdaa06dc1, "acpi_lpat_raw_to_temp" },
	{ 0x9974ebe9, "thermal_zone_for_each_trip" },
	{ 0x3d8ee44d, "thermal_acpi_passive_trip_temp" },
	{ 0x464f28f4, "thermal_zone_set_trip_temp" },
	{ 0x65228521, "thermal_acpi_critical_trip_temp" },
	{ 0x956e661f, "thermal_acpi_active_trip_temp" },
	{ 0x842940e9, "thermal_acpi_hot_trip_temp" },
	{ 0x797d8409, "thermal_zone_device_type" },
	{ 0x6b0b462f, "thermal_zone_device" },
	{ 0x6cc72ac6, "__dynamic_dev_dbg" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xdb63a944, "acpi_lpat_get_conversion_table" },
	{ 0x3ea53409, "thermal_zone_device_register_with_trips" },
	{ 0xb332f7f0, "thermal_zone_device_enable" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

