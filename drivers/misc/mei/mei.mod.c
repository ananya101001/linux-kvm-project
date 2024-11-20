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

KSYMTAB_FUNC(mei_fw_status2str, "_gpl", "");
KSYMTAB_FUNC(mei_cancel_work, "_gpl", "");
KSYMTAB_FUNC(mei_reset, "_gpl", "");
KSYMTAB_FUNC(mei_start, "_gpl", "");
KSYMTAB_FUNC(mei_restart, "_gpl", "");
KSYMTAB_FUNC(mei_stop, "_gpl", "");
KSYMTAB_FUNC(mei_write_is_idle, "_gpl", "");
KSYMTAB_FUNC(mei_device_init, "_gpl", "");
KSYMTAB_FUNC(mei_hbm_pg, "_gpl", "");
KSYMTAB_FUNC(mei_hbm_pg_resume, "_gpl", "");
KSYMTAB_FUNC(mei_irq_compl_handler, "_gpl", "");
KSYMTAB_FUNC(mei_irq_read_handler, "_gpl", "");
KSYMTAB_FUNC(mei_irq_write_handler, "_gpl", "");
KSYMTAB_FUNC(mei_cl_all_disconnect, "_gpl", "");
KSYMTAB_FUNC(mei_register, "_gpl", "");
KSYMTAB_FUNC(mei_deregister, "_gpl", "");
KSYMTAB_FUNC(mei_cldev_send_vtag, "_gpl", "");
KSYMTAB_FUNC(mei_cldev_send_vtag_timeout, "_gpl", "");
KSYMTAB_FUNC(mei_cldev_recv_vtag, "_gpl", "");
KSYMTAB_FUNC(mei_cldev_recv_nonblock_vtag, "_gpl", "");
KSYMTAB_FUNC(mei_cldev_recv_timeout, "_gpl", "");
KSYMTAB_FUNC(mei_cldev_recv_vtag_timeout, "_gpl", "");
KSYMTAB_FUNC(mei_cldev_send, "_gpl", "");
KSYMTAB_FUNC(mei_cldev_send_timeout, "_gpl", "");
KSYMTAB_FUNC(mei_cldev_recv, "_gpl", "");
KSYMTAB_FUNC(mei_cldev_recv_nonblock, "_gpl", "");
KSYMTAB_FUNC(mei_cldev_register_rx_cb, "_gpl", "");
KSYMTAB_FUNC(mei_cldev_register_notif_cb, "_gpl", "");
KSYMTAB_FUNC(mei_cldev_get_drvdata, "_gpl", "");
KSYMTAB_FUNC(mei_cldev_set_drvdata, "_gpl", "");
KSYMTAB_FUNC(mei_cldev_uuid, "_gpl", "");
KSYMTAB_FUNC(mei_cldev_ver, "_gpl", "");
KSYMTAB_FUNC(mei_cldev_enabled, "_gpl", "");
KSYMTAB_FUNC(mei_cldev_dma_map, "_gpl", "");
KSYMTAB_FUNC(mei_cldev_dma_unmap, "_gpl", "");
KSYMTAB_FUNC(mei_cldev_enable, "_gpl", "");
KSYMTAB_FUNC(mei_cldev_disable, "_gpl", "");
KSYMTAB_FUNC(mei_cldev_send_gsc_command, "_gpl", "");
KSYMTAB_FUNC(__mei_cldev_driver_register, "_gpl", "");
KSYMTAB_FUNC(mei_cldev_driver_unregister, "_gpl", "");
KSYMTAB_DATA(__tracepoint_mei_reg_read, "", "");
KSYMTAB_FUNC(__traceiter_mei_reg_read, "", "");
KSYMTAB_DATA(__SCK__tp_func_mei_reg_read, "", "");
KSYMTAB_FUNC(__SCT__tp_func_mei_reg_read, "", "");
KSYMTAB_DATA(__tracepoint_mei_reg_write, "", "");
KSYMTAB_FUNC(__traceiter_mei_reg_write, "", "");
KSYMTAB_DATA(__SCK__tp_func_mei_reg_write, "", "");
KSYMTAB_FUNC(__SCT__tp_func_mei_reg_write, "", "");
KSYMTAB_DATA(__tracepoint_mei_pci_cfg_read, "", "");
KSYMTAB_FUNC(__traceiter_mei_pci_cfg_read, "", "");
KSYMTAB_DATA(__SCK__tp_func_mei_pci_cfg_read, "", "");
KSYMTAB_FUNC(__SCT__tp_func_mei_pci_cfg_read, "", "");

SYMBOL_CRC(mei_fw_status2str, 0x90a24af4, "_gpl");
SYMBOL_CRC(mei_cancel_work, 0x7260a168, "_gpl");
SYMBOL_CRC(mei_reset, 0xcfdae50f, "_gpl");
SYMBOL_CRC(mei_start, 0x62413648, "_gpl");
SYMBOL_CRC(mei_restart, 0xdfacbedc, "_gpl");
SYMBOL_CRC(mei_stop, 0xcc749cdf, "_gpl");
SYMBOL_CRC(mei_write_is_idle, 0xf0388734, "_gpl");
SYMBOL_CRC(mei_device_init, 0xdfb1cc52, "_gpl");
SYMBOL_CRC(mei_hbm_pg, 0x47233db3, "_gpl");
SYMBOL_CRC(mei_hbm_pg_resume, 0xb33d5f8f, "_gpl");
SYMBOL_CRC(mei_irq_compl_handler, 0x803aaa78, "_gpl");
SYMBOL_CRC(mei_irq_read_handler, 0xdc5b7013, "_gpl");
SYMBOL_CRC(mei_irq_write_handler, 0x284b6bc0, "_gpl");
SYMBOL_CRC(mei_cl_all_disconnect, 0x0693208d, "_gpl");
SYMBOL_CRC(mei_register, 0xd550d3f5, "_gpl");
SYMBOL_CRC(mei_deregister, 0x9e27f5fe, "_gpl");
SYMBOL_CRC(mei_cldev_send_vtag, 0x305399a0, "_gpl");
SYMBOL_CRC(mei_cldev_send_vtag_timeout, 0x0ca522e7, "_gpl");
SYMBOL_CRC(mei_cldev_recv_vtag, 0x1ffb95f0, "_gpl");
SYMBOL_CRC(mei_cldev_recv_nonblock_vtag, 0x309713cb, "_gpl");
SYMBOL_CRC(mei_cldev_recv_timeout, 0x0fbb3e90, "_gpl");
SYMBOL_CRC(mei_cldev_recv_vtag_timeout, 0x07395e51, "_gpl");
SYMBOL_CRC(mei_cldev_send, 0x96d779ba, "_gpl");
SYMBOL_CRC(mei_cldev_send_timeout, 0xfcd719d0, "_gpl");
SYMBOL_CRC(mei_cldev_recv, 0xbe00fa94, "_gpl");
SYMBOL_CRC(mei_cldev_recv_nonblock, 0xaddfee8c, "_gpl");
SYMBOL_CRC(mei_cldev_register_rx_cb, 0xcb6ef1ca, "_gpl");
SYMBOL_CRC(mei_cldev_register_notif_cb, 0x8e107b79, "_gpl");
SYMBOL_CRC(mei_cldev_get_drvdata, 0x8529f9da, "_gpl");
SYMBOL_CRC(mei_cldev_set_drvdata, 0x73b42c24, "_gpl");
SYMBOL_CRC(mei_cldev_uuid, 0xa2a024f1, "_gpl");
SYMBOL_CRC(mei_cldev_ver, 0xd2fd19ed, "_gpl");
SYMBOL_CRC(mei_cldev_enabled, 0xcf17bde3, "_gpl");
SYMBOL_CRC(mei_cldev_dma_map, 0x71415459, "_gpl");
SYMBOL_CRC(mei_cldev_dma_unmap, 0xe47be644, "_gpl");
SYMBOL_CRC(mei_cldev_enable, 0xaa194141, "_gpl");
SYMBOL_CRC(mei_cldev_disable, 0xb15df04e, "_gpl");
SYMBOL_CRC(mei_cldev_send_gsc_command, 0xd645e108, "_gpl");
SYMBOL_CRC(__mei_cldev_driver_register, 0x1a2b31e5, "_gpl");
SYMBOL_CRC(mei_cldev_driver_unregister, 0x3d13fd0d, "_gpl");
SYMBOL_CRC(__tracepoint_mei_reg_read, 0x50c744a2, "");
SYMBOL_CRC(__traceiter_mei_reg_read, 0x74b1f467, "");
SYMBOL_CRC(__SCK__tp_func_mei_reg_read, 0x673b16f8, "");
SYMBOL_CRC(__SCT__tp_func_mei_reg_read, 0x3b0a488d, "");
SYMBOL_CRC(__tracepoint_mei_reg_write, 0x0775203b, "");
SYMBOL_CRC(__traceiter_mei_reg_write, 0x7b24d7f5, "");
SYMBOL_CRC(__SCK__tp_func_mei_reg_write, 0x8cfc6483, "");
SYMBOL_CRC(__SCT__tp_func_mei_reg_write, 0x0bb25295, "");
SYMBOL_CRC(__tracepoint_mei_pci_cfg_read, 0x86ea273d, "");
SYMBOL_CRC(__traceiter_mei_pci_cfg_read, 0xeec10e21, "");
SYMBOL_CRC(__SCK__tp_func_mei_pci_cfg_read, 0x4dd6399b, "");
SYMBOL_CRC(__SCT__tp_func_mei_pci_cfg_read, 0x14dc7949, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x441a3531, "debugfs_write_file_bool" },
	{ 0xca844bc7, "put_device" },
	{ 0xa916b694, "strnlen" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x5a549f7, "_dev_info" },
	{ 0x7f1fd79f, "module_put" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xc81ce80d, "compat_ptr_ioctl" },
	{ 0x30149b9, "cdev_add" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8b38092, "perf_trace_buf_alloc" },
	{ 0x9cb54e2f, "perf_trace_run_bpf_submit" },
	{ 0xb5228f1a, "bus_unregister" },
	{ 0x57bc19d2, "down_write" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0xce807a25, "up_write" },
	{ 0x86de2938, "simple_open" },
	{ 0x934ea33f, "device_add" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8656f320, "debugfs_remove" },
	{ 0x5a921311, "strncmp" },
	{ 0x3403f878, "fasync_helper" },
	{ 0xde6889d3, "trace_event_reg" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x6aae782e, "driver_unregister" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x9901bc1d, "class_unregister" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xc04e9955, "device_del" },
	{ 0xe73e81df, "dmam_free_coherent" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0x8c30cfd1, "device_match_devt" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x668b19a1, "down_read" },
	{ 0xcc584249, "nonseekable_open" },
	{ 0x5c4440b5, "seq_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdc4290c3, "device_create_with_groups" },
	{ 0x51cd0202, "debugfs_create_file" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x3c7a51a5, "trace_event_buffer_reserve" },
	{ 0x8188f58f, "__pm_runtime_resume" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3d1a1b7b, "seq_write" },
	{ 0x50785e75, "device_destroy" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0x377214d3, "seq_printf" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd4f9fdc4, "single_release" },
	{ 0xdf9734a7, "sg_nents" },
	{ 0x55db1940, "__pm_runtime_suspend" },
	{ 0x15526c27, "device_release_driver" },
	{ 0x754d539c, "strlen" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x50472d9a, "single_open" },
	{ 0x8b0ac9d7, "debugfs_create_dir" },
	{ 0x3e0f9d5b, "generic_file_llseek" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x31f2a14c, "__kvmalloc_node_noprof" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x53b954a2, "up_read" },
	{ 0x972052ee, "driver_register" },
	{ 0x4a958e37, "class_register" },
	{ 0x5d64dd4d, "cdev_init" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xce767f9d, "cdev_del" },
	{ 0xa83a27a3, "bus_register" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x232d6aa4, "class_find_device" },
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0x1f7fdb27, "try_module_get" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xb6671de9, "bpf_trace_run4" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xc6f15b39, "dev_set_name" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x6f00a17a, "dmam_alloc_attrs" },
	{ 0xc1cc4ef1, "trace_raw_output_prep" },
	{ 0xc5597d14, "__trace_trigger_soft_disabled" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xa23d56ab, "kill_fasync" },
	{ 0x825be683, "trace_event_printf" },
	{ 0x96848186, "scnprintf" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xe7fa695f, "device_initialize" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0xaf437a95, "trace_event_raw_init" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x37a0cba, "kfree" },
	{ 0xc520b851, "seq_lseek" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0xe893d918, "__module_get" },
	{ 0x3131271a, "get_device" },
	{ 0x6cc72ac6, "__dynamic_dev_dbg" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xbfb4718b, "debugfs_read_file_bool" },
	{ 0x6d9e9eae, "trace_event_buffer_commit" },
	{ 0x63b1fee2, "sysfs_notify" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

