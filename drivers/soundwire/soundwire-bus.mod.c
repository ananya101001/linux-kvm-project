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

KSYMTAB_DATA(sdw_bus_type, "_gpl", "");
KSYMTAB_FUNC(__sdw_register_driver, "_gpl", "");
KSYMTAB_FUNC(sdw_unregister_driver, "_gpl", "");
KSYMTAB_FUNC(sdw_bus_master_add, "", "");
KSYMTAB_FUNC(sdw_bus_master_delete, "", "");
KSYMTAB_FUNC(sdw_show_ping_status, "", "");
KSYMTAB_FUNC(sdw_nread_no_pm, "", "");
KSYMTAB_FUNC(sdw_nwrite_no_pm, "", "");
KSYMTAB_FUNC(sdw_write_no_pm, "", "");
KSYMTAB_FUNC(sdw_bread_no_pm_unlocked, "", "");
KSYMTAB_FUNC(sdw_bwrite_no_pm_unlocked, "", "");
KSYMTAB_FUNC(sdw_read_no_pm, "", "");
KSYMTAB_FUNC(sdw_update_no_pm, "", "");
KSYMTAB_FUNC(sdw_update, "", "");
KSYMTAB_FUNC(sdw_nread, "", "");
KSYMTAB_FUNC(sdw_nwrite, "", "");
KSYMTAB_FUNC(sdw_read, "", "");
KSYMTAB_FUNC(sdw_write, "", "");
KSYMTAB_FUNC(sdw_compare_devid, "", "");
KSYMTAB_FUNC(sdw_extract_slave_id, "", "");
KSYMTAB_FUNC(sdw_bus_prep_clk_stop, "", "");
KSYMTAB_FUNC(sdw_bus_clk_stop, "", "");
KSYMTAB_FUNC(sdw_bus_exit_clk_stop, "", "");
KSYMTAB_FUNC(sdw_handle_slave_status, "", "");
KSYMTAB_FUNC(sdw_clear_slave_status, "", "");
KSYMTAB_FUNC(sdw_slave_add, "", "");
KSYMTAB_FUNC(sdw_master_read_prop, "", "");
KSYMTAB_FUNC(sdw_slave_read_prop, "", "");
KSYMTAB_DATA(sdw_rows, "", "");
KSYMTAB_DATA(sdw_cols, "", "");
KSYMTAB_FUNC(sdw_find_col_index, "", "");
KSYMTAB_FUNC(sdw_find_row_index, "", "");
KSYMTAB_FUNC(sdw_prepare_stream, "", "");
KSYMTAB_FUNC(sdw_enable_stream, "", "");
KSYMTAB_FUNC(sdw_disable_stream, "", "");
KSYMTAB_FUNC(sdw_deprepare_stream, "", "");
KSYMTAB_FUNC(sdw_alloc_stream, "", "");
KSYMTAB_FUNC(sdw_startup_stream, "", "");
KSYMTAB_FUNC(sdw_shutdown_stream, "", "");
KSYMTAB_FUNC(sdw_release_stream, "", "");
KSYMTAB_FUNC(sdw_stream_add_master, "", "");
KSYMTAB_FUNC(sdw_stream_remove_master, "", "");
KSYMTAB_FUNC(sdw_stream_add_slave, "", "");
KSYMTAB_FUNC(sdw_stream_remove_slave, "", "");

SYMBOL_CRC(sdw_bus_type, 0x45e127dd, "_gpl");
SYMBOL_CRC(__sdw_register_driver, 0xe6e27b86, "_gpl");
SYMBOL_CRC(sdw_unregister_driver, 0xd0b3dea9, "_gpl");
SYMBOL_CRC(sdw_bus_master_add, 0x2b50142b, "");
SYMBOL_CRC(sdw_bus_master_delete, 0x55ee2968, "");
SYMBOL_CRC(sdw_show_ping_status, 0x852d2531, "");
SYMBOL_CRC(sdw_nread_no_pm, 0x8123acee, "");
SYMBOL_CRC(sdw_nwrite_no_pm, 0x55db9728, "");
SYMBOL_CRC(sdw_write_no_pm, 0xe2a400dd, "");
SYMBOL_CRC(sdw_bread_no_pm_unlocked, 0xb74b10db, "");
SYMBOL_CRC(sdw_bwrite_no_pm_unlocked, 0xceebdc63, "");
SYMBOL_CRC(sdw_read_no_pm, 0xdb58b7c0, "");
SYMBOL_CRC(sdw_update_no_pm, 0xafe17918, "");
SYMBOL_CRC(sdw_update, 0x934ed8ae, "");
SYMBOL_CRC(sdw_nread, 0xaea59114, "");
SYMBOL_CRC(sdw_nwrite, 0x48b9f80a, "");
SYMBOL_CRC(sdw_read, 0x6f3be364, "");
SYMBOL_CRC(sdw_write, 0x5b1a9c77, "");
SYMBOL_CRC(sdw_compare_devid, 0xecae627e, "");
SYMBOL_CRC(sdw_extract_slave_id, 0xd674c6cc, "");
SYMBOL_CRC(sdw_bus_prep_clk_stop, 0x00ada37c, "");
SYMBOL_CRC(sdw_bus_clk_stop, 0xfec8ed9f, "");
SYMBOL_CRC(sdw_bus_exit_clk_stop, 0x098f7881, "");
SYMBOL_CRC(sdw_handle_slave_status, 0x659ca181, "");
SYMBOL_CRC(sdw_clear_slave_status, 0x9694a715, "");
SYMBOL_CRC(sdw_slave_add, 0x72e31257, "");
SYMBOL_CRC(sdw_master_read_prop, 0xaf1bc4dc, "");
SYMBOL_CRC(sdw_slave_read_prop, 0x9b0c6911, "");
SYMBOL_CRC(sdw_rows, 0xf53ba0b8, "");
SYMBOL_CRC(sdw_cols, 0xba54b904, "");
SYMBOL_CRC(sdw_find_col_index, 0x60e31fbb, "");
SYMBOL_CRC(sdw_find_row_index, 0x1deee061, "");
SYMBOL_CRC(sdw_prepare_stream, 0x16d1706b, "");
SYMBOL_CRC(sdw_enable_stream, 0xbbec2c2e, "");
SYMBOL_CRC(sdw_disable_stream, 0x4cde88bf, "");
SYMBOL_CRC(sdw_deprepare_stream, 0x71891d59, "");
SYMBOL_CRC(sdw_alloc_stream, 0x9e122d79, "");
SYMBOL_CRC(sdw_startup_stream, 0x3b0a8582, "");
SYMBOL_CRC(sdw_shutdown_stream, 0x6f95b16b, "");
SYMBOL_CRC(sdw_release_stream, 0xda5bce09, "");
SYMBOL_CRC(sdw_stream_add_master, 0xc3770902, "");
SYMBOL_CRC(sdw_stream_remove_master, 0xa9572769, "");
SYMBOL_CRC(sdw_stream_add_slave, 0x40661e72, "");
SYMBOL_CRC(sdw_stream_remove_slave, 0x654f91a5, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe8fbeafc, "devm_kasprintf" },
	{ 0x5c4440b5, "seq_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x62d766fc, "fwnode_property_present" },
	{ 0x51cd0202, "debugfs_create_file" },
	{ 0xce4eb310, "irq_domain_instantiate" },
	{ 0x8188f58f, "__pm_runtime_resume" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc9c07d72, "device_get_named_child_node" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x377214d3, "seq_printf" },
	{ 0x21d67785, "irq_create_mapping_affinity" },
	{ 0xd4f9fdc4, "single_release" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0x9dd9e2c2, "acpi_dev_for_each_child" },
	{ 0x55db1940, "__pm_runtime_suspend" },
	{ 0x7c8b2883, "irq_set_chip" },
	{ 0xf413b4e1, "__pm_runtime_use_autosuspend" },
	{ 0x50472d9a, "single_open" },
	{ 0xc80d13ee, "__pm_runtime_disable" },
	{ 0x8b0ac9d7, "debugfs_create_dir" },
	{ 0x972052ee, "driver_register" },
	{ 0x538246ce, "__pm_runtime_idle" },
	{ 0x597db3ac, "acpi_get_local_u64_address" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xa83a27a3, "bus_register" },
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0xf47ee508, "debugfs_create_str" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xd3c72924, "device_property_present" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xfa017be3, "is_acpi_device_node" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xc76f9d9a, "simple_attr_open" },
	{ 0x65fa940a, "debugfs_attr_write" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x87b76953, "devm_kmalloc" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc6f15b39, "dev_set_name" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xdedf4785, "device_unregister" },
	{ 0x5d4810e0, "pm_runtime_set_autosuspend_delay" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x67d3afcb, "irq_domain_remove" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0x609e2ec3, "request_firmware" },
	{ 0x96848186, "scnprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0xc520b851, "seq_lseek" },
	{ 0xd819cf4b, "dev_pm_domain_attach" },
	{ 0xabed9abe, "devm_device_add_group" },
	{ 0x80b29ea5, "device_for_each_child" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x6cc72ac6, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc74f507d, "pm_generic_runtime_resume" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x31b164e7, "__pm_runtime_set_status" },
	{ 0x122c3a7e, "_printk" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xca844bc7, "put_device" },
	{ 0xa76c6a6e, "pm_runtime_enable" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0x56ecd06e, "device_property_read_u32_array" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x22b1a754, "fwnode_property_read_u32_array" },
	{ 0xeb6eb87, "add_taint" },
	{ 0xafd326cd, "dev_pm_domain_detach" },
	{ 0x49141d4d, "pm_generic_runtime_suspend" },
	{ 0x8b76c7b, "debugfs_attr_read" },
	{ 0xb5228f1a, "bus_unregister" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0x42499514, "simple_attr_release" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8656f320, "debugfs_remove" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0xffb7c514, "ida_free" },
	{ 0x6aae782e, "driver_unregister" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x3d4155c2, "device_register" },
	{ 0xdbaa0941, "__irq_resolve_mapping" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

