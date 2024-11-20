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

KSYMTAB_FUNC(proc_thermal_add, "_gpl", "");
KSYMTAB_FUNC(proc_thermal_remove, "_gpl", "");
KSYMTAB_FUNC(proc_thermal_suspend, "_gpl", "");
KSYMTAB_FUNC(proc_thermal_resume, "_gpl", "");
KSYMTAB_FUNC(proc_thermal_mmio_add, "_gpl", "");
KSYMTAB_FUNC(proc_thermal_mmio_remove, "_gpl", "");

SYMBOL_CRC(proc_thermal_add, 0x0a4f3959, "_gpl");
SYMBOL_CRC(proc_thermal_remove, 0x434f7c99, "_gpl");
SYMBOL_CRC(proc_thermal_suspend, 0x648c014a, "_gpl");
SYMBOL_CRC(proc_thermal_resume, 0x8d9d600c, "_gpl");
SYMBOL_CRC(proc_thermal_mmio_add, 0x9aa9c79d, "_gpl");
SYMBOL_CRC(proc_thermal_mmio_remove, 0x6ae6ce30, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x1936331f, "intel_tcc_set_offset" },
	{ 0xfa017be3, "is_acpi_device_node" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xe3746345, "int340x_thermal_zone_add" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0xc62c42cf, "sysfs_create_file_ns" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0x55ec1953, "int340x_thermal_zone_remove" },
	{ 0xa1186518, "intel_tcc_get_tjmax" },
	{ 0xa1b7a4fb, "sysfs_create_group" },
	{ 0xcc09a84e, "sysfs_remove_file_ns" },
	{ 0x980d5636, "sysfs_remove_group" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0xeba8abe7, "pcim_iomap_regions" },
	{ 0x6c8ac046, "pcim_iomap_table" },
	{ 0x433c9502, "proc_thermal_rapl_add" },
	{ 0x7a4608e4, "proc_thermal_rfim_add" },
	{ 0xbbb7f1f8, "proc_thermal_wt_req_add" },
	{ 0x80396fcb, "proc_thermal_rfim_remove" },
	{ 0x98e82d4, "proc_thermal_rapl_remove" },
	{ 0x4baaf171, "proc_thermal_wt_hint_add" },
	{ 0x2c73096a, "proc_thermal_wt_hint_remove" },
	{ 0x1333fac9, "proc_thermal_wt_req_remove" },
	{ 0x6cc72ac6, "__dynamic_dev_dbg" },
	{ 0x94c848a2, "thermal_zone_device_update" },
	{ 0xe37056dc, "pv_ops" },
	{ 0xd4ec10e6, "BUG_func" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x11d53fda, "proc_thermal_power_floor_set_state" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x302cd636, "proc_thermal_power_floor_get_state" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xe1b18e6d, "proc_thermal_read_power_floor_status" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8c32aa7b, "intel_tcc_get_offset" },
	{ 0xdb0da161, "intel_tcc_get_temp" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "int340x_thermal_zone,processor_thermal_rapl,processor_thermal_rfim,processor_thermal_wt_req,processor_thermal_wt_hint,processor_thermal_power_floor");

