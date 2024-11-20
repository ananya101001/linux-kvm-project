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

KSYMTAB_FUNC(to_nfit_uuid, "", "");
KSYMTAB_FUNC(acpi_nfit_ctl, "_gpl", "");
KSYMTAB_FUNC(nfit_get_smbios_id, "_gpl", "");
KSYMTAB_FUNC(__acpi_nvdimm_notify, "_gpl", "");
KSYMTAB_FUNC(acpi_nfit_init, "_gpl", "");
KSYMTAB_FUNC(acpi_nfit_desc_init, "_gpl", "");
KSYMTAB_FUNC(acpi_nfit_shutdown, "_gpl", "");
KSYMTAB_FUNC(__acpi_nfit_notify, "_gpl", "");

SYMBOL_CRC(to_nfit_uuid, 0x06848c60, "");
SYMBOL_CRC(acpi_nfit_ctl, 0x9713b89b, "_gpl");
SYMBOL_CRC(nfit_get_smbios_id, 0x499bbf57, "_gpl");
SYMBOL_CRC(__acpi_nvdimm_notify, 0x0ac2ae83, "_gpl");
SYMBOL_CRC(acpi_nfit_init, 0x4f8324d1, "_gpl");
SYMBOL_CRC(acpi_nfit_desc_init, 0x44727295, "_gpl");
SYMBOL_CRC(acpi_nfit_shutdown, 0x4639bcda, "_gpl");
SYMBOL_CRC(__acpi_nfit_notify, 0x02f691aa, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x449ad0a7, "memcmp" },
	{ 0x56cb6f9c, "nvdimm_volatile_region_create" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x5b45aaa8, "nvdimm_provider_data" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xfb578fc5, "memset" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0x5f23e3fa, "insert_resource" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xc5b65c75, "nvdimm_in_overwrite" },
	{ 0xcdebca1e, "nvdimm_to_bus" },
	{ 0xe37056dc, "pv_ops" },
	{ 0x577d95f8, "nvdimm_bus_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc05f42a8, "nd_region_dev" },
	{ 0x16cdc340, "acpi_get_table" },
	{ 0xb08c4ce7, "nd_cmd_in_size" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x22199426, "param_ops_bool" },
	{ 0x3f941f1b, "acpi_bus_unregister_driver" },
	{ 0xb89b6e6b, "guid_parse" },
	{ 0x98a57143, "kernfs_put" },
	{ 0xe091c977, "list_sort" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x6f897810, "nvdimm_pmem_region_create" },
	{ 0xf11871e3, "nvdimm_kobj" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x1cd8438b, "pxm_to_node" },
	{ 0xdd18a993, "acpi_check_dsm" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0xe9bb6414, "__devm_add_action" },
	{ 0xaf076aec, "nd_fletcher64" },
	{ 0xf6a28554, "region_intersects" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x77358855, "iomem_resource" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0xd4ec10e6, "BUG_func" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x3d8d952b, "nvdimm_cmd_mask" },
	{ 0x18ac5b56, "nvdimm_region_notify" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x5c546278, "nd_region_provider_data" },
	{ 0x64ad7fa9, "nvdimm_bus_add_badrange" },
	{ 0xde8c1673, "param_ops_ulong" },
	{ 0xa01a8d9b, "nd_cmd_bus_desc" },
	{ 0x87b76953, "devm_kmalloc" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xb88fa80a, "to_nvdimm" },
	{ 0xc1b444d6, "__nvdimm_create" },
	{ 0x7e58e25b, "to_nd_region" },
	{ 0x2ce5c14e, "nvdimm_bus_check_dimm_count" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x4431be0b, "acpi_dev_remove_notify_handler" },
	{ 0xaab33bc6, "phys_to_target_node" },
	{ 0x6cc72ac6, "__dynamic_dev_dbg" },
	{ 0x16062d10, "kernfs_notify" },
	{ 0xe65142a5, "to_nvdimm_bus" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x8a665bfa, "numa_nearest_node" },
	{ 0xee99c7ef, "dev_driver_string" },
	{ 0xfc167278, "__acpi_bus_register_driver" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x4d164e41, "acpi_find_child_device" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x638a9653, "memory_add_physaddr_to_nid" },
	{ 0x5a549f7, "_dev_info" },
	{ 0xc6cbbc89, "capable" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xb2db2d5, "remove_resource" },
	{ 0xc2c5802, "work_busy" },
	{ 0x92b99a33, "acpi_put_table" },
	{ 0x5322663e, "acpi_get_handle" },
	{ 0x67f13363, "acpi_dev_install_notify_handler" },
	{ 0x9cdca57c, "to_nd_desc" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0x87f8c15b, "nd_cmd_out_size" },
	{ 0xb7c0f443, "sort" },
	{ 0xb501b2df, "nd_cmd_dimm_desc" },
	{ 0x148d23a1, "nvdimm_bus_unregister" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3088fe39, "kernfs_find_and_get_ns" },
	{ 0xf865c2da, "nvdimm_name" },
	{ 0xd70ba0c8, "to_nvdimm_bus_dev" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "libnvdimm");

MODULE_ALIAS("acpi*:ACPI0012:*");
