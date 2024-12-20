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
	{ 0x59c98678, "del_gendisk" },
	{ 0x51641162, "opal_unlock_from_suspend" },
	{ 0xc04e9955, "device_del" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0x815fda83, "sed_ioctl" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xedb0d088, "blk_integrity_profile_name" },
	{ 0xb0df78e1, "disk_alloc_independent_access_ranges" },
	{ 0x13cb982a, "scsi_alloc_sgtables" },
	{ 0xcbfb33e4, "init_opal_dev" },
	{ 0x9898486b, "scsi_autopm_get_device" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfc609153, "scsi_print_command" },
	{ 0xd8bb697, "bpf_trace_run3" },
	{ 0xcde77bcc, "free_opal_dev" },
	{ 0xb4e14f8f, "__scsi_register_driver" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xce2667da, "blk_mq_freeze_queue" },
	{ 0x3c7a51a5, "trace_event_buffer_reserve" },
	{ 0x8188f58f, "__pm_runtime_resume" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0x2213aa1f, "mempool_create_node_noprof" },
	{ 0x6e96bbd6, "scmd_printk" },
	{ 0x5407a918, "scsi_execute_cmd" },
	{ 0x51f342fc, "scsi_free_sgtables" },
	{ 0x61e21924, "disk_set_independent_access_ranges" },
	{ 0x8fc97c3a, "scsi_mode_select" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x9a10cdbe, "disk_check_media_change" },
	{ 0xcf3cd7e, "blk_mq_unfreeze_queue" },
	{ 0x353b6112, "scsi_ioctl_block_when_processing_errors" },
	{ 0xb837b08e, "queue_limits_commit_update" },
	{ 0x2ff715a7, "blkdev_compat_ptr_ioctl" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x31f2a14c, "__kvmalloc_node_noprof" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x4a958e37, "class_register" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb033617e, "blk_queue_rq_timeout" },
	{ 0x7ee9199d, "scsi_failures_reset_retries" },
	{ 0x74bf2e01, "scsi_pr_type_to_block" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x766a0927, "mempool_alloc_pages" },
	{ 0x21564da5, "scsi_set_medium_removal" },
	{ 0x750d357, "set_capacity_and_notify" },
	{ 0xfac73ba8, "set_disk_ro" },
	{ 0xb04ce688, "scsi_print_sense_hdr" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x2ab3d198, "scsi_mode_sense" },
	{ 0xb6671de9, "bpf_trace_run4" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x64498edb, "scsi_autopm_put_device" },
	{ 0xf2cf1a80, "scsi_device_get" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xc6f15b39, "dev_set_name" },
	{ 0xb0e602eb, "memmove" },
	{ 0x69e9c1d7, "device_add_disk" },
	{ 0xc1cc4ef1, "trace_raw_output_prep" },
	{ 0xdedf4785, "device_unregister" },
	{ 0x5d4810e0, "pm_runtime_set_autosuspend_delay" },
	{ 0xc5597d14, "__trace_trigger_soft_disabled" },
	{ 0x75ae2c58, "blk_pm_runtime_init" },
	{ 0x825be683, "trace_event_printf" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xf7370f56, "system_state" },
	{ 0xdd849d51, "scsi_get_sense_info_fld" },
	{ 0x5cab88c4, "scsi_get_vpd_page" },
	{ 0xe7fa695f, "device_initialize" },
	{ 0xaf437a95, "trace_event_raw_init" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x37a0cba, "kfree" },
	{ 0x3c6785b7, "block_pr_type_to_scsi" },
	{ 0xd2850a7e, "scsicam_bios_param" },
	{ 0xca37042f, "blk_mq_alloc_disk_for_queue" },
	{ 0x3131271a, "get_device" },
	{ 0xa9f89d9, "scsi_command_normalize_sense" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xb3d2c76d, "scsi_hostbyte_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xf83473a0, "scsi_device_set_state" },
	{ 0x6d9e9eae, "trace_event_buffer_commit" },
	{ 0x184fa3d5, "scsi_test_unit_ready" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5e69b622, "scsi_block_when_processing_errors" },
	{ 0x122c3a7e, "_printk" },
	{ 0x80131ca2, "put_disk" },
	{ 0x4f899bc7, "scsi_ioctl" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xca844bc7, "put_device" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x23b4e0d7, "clear_page_rep" },
	{ 0xc6cbbc89, "capable" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x8ffb42d6, "scsi_device_put" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xfeb343d1, "mempool_alloc_noprof" },
	{ 0x8b38092, "perf_trace_buf_alloc" },
	{ 0x9cb54e2f, "perf_trace_run_bpf_submit" },
	{ 0xda7a3e8d, "blk_revalidate_disk_zones" },
	{ 0x934ea33f, "device_add" },
	{ 0x24eef9d8, "string_get_size" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xcfeca16c, "sdev_prefix_printk" },
	{ 0x925493f, "clear_page_orig" },
	{ 0xd985dc99, "mempool_free_pages" },
	{ 0x5a921311, "strncmp" },
	{ 0x8c74fa21, "scsi_report_opcode" },
	{ 0xde6889d3, "trace_event_reg" },
	{ 0xffb7c514, "ida_free" },
	{ 0x6aae782e, "driver_unregister" },
	{ 0x9084b044, "clear_page_erms" },
	{ 0xaf3dd7dc, "scsi_logging_level" },
	{ 0x9901bc1d, "class_unregister" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "scsi_mod,scsi_common");

