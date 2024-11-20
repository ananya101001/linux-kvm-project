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

KSYMTAB_FUNC(rmi_dbg, "_gpl", "");
KSYMTAB_FUNC(rmi_register_transport_device, "_gpl", "");
KSYMTAB_FUNC(rmi_unregister_transport_device, "", "");
KSYMTAB_FUNC(__rmi_register_function_handler, "_gpl", "");
KSYMTAB_FUNC(rmi_unregister_function_handler, "_gpl", "");
KSYMTAB_FUNC(rmi_of_property_read_u32, "_gpl", "");
KSYMTAB_FUNC(rmi_set_attn_data, "_gpl", "");
KSYMTAB_FUNC(rmi_driver_suspend, "_gpl", "");
KSYMTAB_FUNC(rmi_driver_resume, "_gpl", "");
KSYMTAB_FUNC(rmi_2d_sensor_abs_process, "_gpl", "");
KSYMTAB_FUNC(rmi_2d_sensor_abs_report, "_gpl", "");
KSYMTAB_FUNC(rmi_2d_sensor_rel_report, "_gpl", "");
KSYMTAB_FUNC(rmi_2d_sensor_configure_input, "_gpl", "");
KSYMTAB_FUNC(rmi_2d_sensor_of_probe, "_gpl", "");

SYMBOL_CRC(rmi_dbg, 0x583436ff, "_gpl");
SYMBOL_CRC(rmi_register_transport_device, 0x04764879, "_gpl");
SYMBOL_CRC(rmi_unregister_transport_device, 0x98b15b15, "");
SYMBOL_CRC(__rmi_register_function_handler, 0xc982ad71, "_gpl");
SYMBOL_CRC(rmi_unregister_function_handler, 0xb521629a, "_gpl");
SYMBOL_CRC(rmi_of_property_read_u32, 0xa8c18fa6, "_gpl");
SYMBOL_CRC(rmi_set_attn_data, 0x3ed7dd74, "_gpl");
SYMBOL_CRC(rmi_driver_suspend, 0xc07a262a, "_gpl");
SYMBOL_CRC(rmi_driver_resume, 0x129d12c2, "_gpl");
SYMBOL_CRC(rmi_2d_sensor_abs_process, 0x5b9b5aff, "_gpl");
SYMBOL_CRC(rmi_2d_sensor_abs_report, 0x47cac3d3, "_gpl");
SYMBOL_CRC(rmi_2d_sensor_rel_report, 0xc10b03cc, "_gpl");
SYMBOL_CRC(rmi_2d_sensor_configure_input, 0x1dc22c67, "_gpl");
SYMBOL_CRC(rmi_2d_sensor_of_probe, 0xc378bbdc, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xca844bc7, "put_device" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x9ee2a14, "handle_simple_irq" },
	{ 0x5a549f7, "_dev_info" },
	{ 0xb5228f1a, "bus_unregister" },
	{ 0xcca3419f, "devm_kfree" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0x934ea33f, "device_add" },
	{ 0xc62019f6, "input_mt_init_slots" },
	{ 0x9172f297, "irq_get_irq_data" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd1907252, "input_set_capability" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x6aae782e, "driver_unregister" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xa1b7a4fb, "sysfs_create_group" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xc04e9955, "device_del" },
	{ 0xdbaa0941, "__irq_resolve_mapping" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0xbcd8a790, "serio_unregister_port" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x77838788, "input_event" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x73c63720, "input_set_abs_params" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe8fbeafc, "devm_kasprintf" },
	{ 0x980d5636, "sysfs_remove_group" },
	{ 0x5562e61a, "serio_interrupt" },
	{ 0xce4eb310, "irq_domain_instantiate" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0x21d67785, "irq_create_mapping_affinity" },
	{ 0xeaa0093e, "input_alloc_absinfo" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0xe3a61ac6, "_dev_printk" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0x972052ee, "driver_register" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xa83a27a3, "bus_register" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xc10c1fc, "input_mt_assign_slots" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x835712e1, "devm_request_threaded_irq" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x87b76953, "devm_kmalloc" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xc6f15b39, "dev_set_name" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0xb9fb958c, "input_mt_sync_frame" },
	{ 0x21ea5251, "__bitmap_weight" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x67d3afcb, "irq_domain_remove" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0x609e2ec3, "request_firmware" },
	{ 0x8f06a947, "input_mt_report_slot_state" },
	{ 0xe7fa695f, "device_initialize" },
	{ 0xcfc4c0f7, "devm_input_allocate_device" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x4040ae5f, "__serio_register_port" },
	{ 0xeca957d1, "__bitmap_and" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xee99c7ef, "dev_driver_string" },
	{ 0x871851f4, "irq_domain_simple_ops" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x83a3674e, "input_register_device" },
	{ 0xf390f6f1, "__bitmap_andnot" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xfa7a62e, "irq_set_chip_and_handler_name" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

