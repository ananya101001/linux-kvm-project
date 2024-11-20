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

KSYMTAB_DATA(scsi_logging_level, "", "");
KSYMTAB_FUNC(scsi_change_queue_depth, "", "");
KSYMTAB_FUNC(scsi_track_queue_full, "", "");
KSYMTAB_FUNC(scsi_get_vpd_page, "_gpl", "");
KSYMTAB_FUNC(scsi_report_opcode, "", "");
KSYMTAB_FUNC(scsi_device_get, "", "");
KSYMTAB_FUNC(scsi_device_put, "", "");
KSYMTAB_FUNC(__scsi_iterate_devices, "", "");
KSYMTAB_FUNC(starget_for_each_device, "", "");
KSYMTAB_FUNC(__starget_for_each_device, "", "");
KSYMTAB_FUNC(__scsi_device_lookup_by_target, "", "");
KSYMTAB_FUNC(scsi_device_lookup_by_target, "", "");
KSYMTAB_FUNC(__scsi_device_lookup, "", "");
KSYMTAB_FUNC(scsi_device_lookup, "", "");
KSYMTAB_FUNC(scsi_remove_host, "", "");
KSYMTAB_FUNC(scsi_add_host_with_dma, "", "");
KSYMTAB_FUNC(scsi_host_alloc, "", "");
KSYMTAB_FUNC(scsi_host_lookup, "", "");
KSYMTAB_FUNC(scsi_host_get, "", "");
KSYMTAB_FUNC(scsi_host_busy, "", "");
KSYMTAB_FUNC(scsi_host_put, "", "");
KSYMTAB_FUNC(scsi_is_host_device, "", "");
KSYMTAB_FUNC(scsi_queue_work, "_gpl", "");
KSYMTAB_FUNC(scsi_flush_work, "_gpl", "");
KSYMTAB_FUNC(scsi_host_complete_all_commands, "_gpl", "");
KSYMTAB_FUNC(scsi_host_busy_iter, "_gpl", "");
KSYMTAB_FUNC(scsi_set_medium_removal, "", "");
KSYMTAB_FUNC(scsi_cmd_allowed, "", "");
KSYMTAB_FUNC(put_sg_io_hdr, "", "");
KSYMTAB_FUNC(get_sg_io_hdr, "", "");
KSYMTAB_FUNC(scsi_ioctl, "", "");
KSYMTAB_FUNC(scsi_ioctl_block_when_processing_errors, "_gpl", "");
KSYMTAB_FUNC(scsi_bios_ptable, "", "");
KSYMTAB_FUNC(scsi_partsize, "", "");
KSYMTAB_FUNC(scsicam_bios_param, "", "");
KSYMTAB_FUNC(scsi_schedule_eh, "_gpl", "");
KSYMTAB_FUNC(scsi_block_when_processing_errors, "", "");
KSYMTAB_FUNC(scsi_check_sense, "_gpl", "");
KSYMTAB_FUNC(scsi_eh_prep_cmnd, "", "");
KSYMTAB_FUNC(scsi_eh_restore_cmnd, "", "");
KSYMTAB_FUNC(scsi_eh_finish_cmd, "", "");
KSYMTAB_FUNC(scsi_eh_get_sense, "_gpl", "");
KSYMTAB_FUNC(scsi_eh_ready_devs, "_gpl", "");
KSYMTAB_FUNC(scsi_eh_flush_done_q, "", "");
KSYMTAB_FUNC(scsi_report_bus_reset, "", "");
KSYMTAB_FUNC(scsi_report_device_reset, "", "");
KSYMTAB_FUNC(scsi_command_normalize_sense, "", "");
KSYMTAB_FUNC(scsi_get_sense_info_fld, "", "");
KSYMTAB_FUNC(scsi_failures_reset_retries, "_gpl", "");
KSYMTAB_FUNC(scsi_execute_cmd, "", "");
KSYMTAB_FUNC(scsi_free_sgtables, "_gpl", "");
KSYMTAB_FUNC(scsi_alloc_sgtables, "", "");
KSYMTAB_FUNC(scsi_alloc_request, "_gpl", "");
KSYMTAB_FUNC(scsi_done, "", "");
KSYMTAB_FUNC(scsi_done_direct, "", "");
KSYMTAB_FUNC(scsi_init_limits, "_gpl", "");
KSYMTAB_FUNC(scsi_block_requests, "", "");
KSYMTAB_FUNC(scsi_unblock_requests, "", "");
KSYMTAB_FUNC(scsi_mode_select, "_gpl", "");
KSYMTAB_FUNC(scsi_mode_sense, "", "");
KSYMTAB_FUNC(scsi_test_unit_ready, "", "");
KSYMTAB_FUNC(scsi_device_set_state, "", "");
KSYMTAB_FUNC(sdev_evt_send, "_gpl", "");
KSYMTAB_FUNC(sdev_evt_alloc, "_gpl", "");
KSYMTAB_FUNC(sdev_evt_send_simple, "_gpl", "");
KSYMTAB_FUNC(scsi_device_quiesce, "", "");
KSYMTAB_FUNC(scsi_device_resume, "", "");
KSYMTAB_FUNC(scsi_target_quiesce, "", "");
KSYMTAB_FUNC(scsi_target_resume, "", "");
KSYMTAB_FUNC(scsi_internal_device_block_nowait, "_gpl", "");
KSYMTAB_FUNC(scsi_internal_device_unblock_nowait, "_gpl", "");
KSYMTAB_FUNC(scsi_block_targets, "_gpl", "");
KSYMTAB_FUNC(scsi_target_unblock, "_gpl", "");
KSYMTAB_FUNC(scsi_host_block, "_gpl", "");
KSYMTAB_FUNC(scsi_host_unblock, "_gpl", "");
KSYMTAB_FUNC(scsi_kmap_atomic_sg, "", "");
KSYMTAB_FUNC(scsi_kunmap_atomic_sg, "", "");
KSYMTAB_FUNC(sdev_disable_disk_events, "", "");
KSYMTAB_FUNC(sdev_enable_disk_events, "", "");
KSYMTAB_FUNC(scsi_vpd_lun_id, "", "");
KSYMTAB_FUNC(scsi_vpd_tpg_id, "", "");
KSYMTAB_FUNC(scsi_build_sense, "_gpl", "");
KSYMTAB_FUNC(scsi_sense_key_string, "", "");
KSYMTAB_FUNC(scsi_extd_sense_format, "", "");
KSYMTAB_FUNC(scsi_hostbyte_string, "", "");
KSYMTAB_FUNC(scsi_mlreturn_string, "", "");
KSYMTAB_FUNC(scsi_dma_map, "", "");
KSYMTAB_FUNC(scsi_dma_unmap, "", "");
KSYMTAB_FUNC(scsi_is_target_device, "", "");
KSYMTAB_FUNC(scsi_sanitize_inquiry_string, "", "");
KSYMTAB_FUNC(__scsi_add_device, "", "");
KSYMTAB_FUNC(scsi_add_device, "", "");
KSYMTAB_FUNC(scsi_resume_device, "", "");
KSYMTAB_FUNC(scsi_rescan_device, "", "");
KSYMTAB_FUNC(scsi_scan_target, "", "");
KSYMTAB_FUNC(scsi_scan_host, "", "");
KSYMTAB_FUNC(scsi_remove_device, "", "");
KSYMTAB_FUNC(scsi_remove_target, "", "");
KSYMTAB_FUNC(__scsi_register_driver, "", "");
KSYMTAB_FUNC(scsi_register_interface, "", "");
KSYMTAB_FUNC(scsi_is_sdev_device, "", "");
KSYMTAB_FUNC(scsi_dev_info_list_add_keyed, "", "");
KSYMTAB_FUNC(scsi_dev_info_list_del_keyed, "", "");
KSYMTAB_FUNC(scsi_get_device_flags_keyed, "", "");
KSYMTAB_FUNC(scsi_dev_info_add_list, "", "");
KSYMTAB_FUNC(scsi_dev_info_remove_list, "", "");
KSYMTAB_DATA(scsi_nl_sock, "_gpl", "");
KSYMTAB_FUNC(sdev_prefix_printk, "", "");
KSYMTAB_FUNC(scmd_printk, "", "");
KSYMTAB_FUNC(__scsi_format_command, "", "");
KSYMTAB_FUNC(scsi_print_command, "", "");
KSYMTAB_FUNC(scsi_print_sense_hdr, "", "");
KSYMTAB_FUNC(__scsi_print_sense, "", "");
KSYMTAB_FUNC(scsi_print_sense, "", "");
KSYMTAB_FUNC(scsi_print_result, "", "");
KSYMTAB_FUNC(scsi_autopm_get_device, "_gpl", "");
KSYMTAB_FUNC(scsi_autopm_put_device, "_gpl", "");

SYMBOL_CRC(scsi_logging_level, 0xaf3dd7dc, "");
SYMBOL_CRC(scsi_change_queue_depth, 0x3cb5f497, "");
SYMBOL_CRC(scsi_track_queue_full, 0x9d8c66c4, "");
SYMBOL_CRC(scsi_get_vpd_page, 0x5cab88c4, "_gpl");
SYMBOL_CRC(scsi_report_opcode, 0x8c74fa21, "");
SYMBOL_CRC(scsi_device_get, 0xf2cf1a80, "");
SYMBOL_CRC(scsi_device_put, 0x8ffb42d6, "");
SYMBOL_CRC(__scsi_iterate_devices, 0x6e3ae8c8, "");
SYMBOL_CRC(starget_for_each_device, 0xe6322459, "");
SYMBOL_CRC(__starget_for_each_device, 0x26369ee7, "");
SYMBOL_CRC(__scsi_device_lookup_by_target, 0x07e95749, "");
SYMBOL_CRC(scsi_device_lookup_by_target, 0x35d90ce7, "");
SYMBOL_CRC(__scsi_device_lookup, 0x45ac4edd, "");
SYMBOL_CRC(scsi_device_lookup, 0xaef41929, "");
SYMBOL_CRC(scsi_remove_host, 0xa4c8accd, "");
SYMBOL_CRC(scsi_add_host_with_dma, 0x483e46cf, "");
SYMBOL_CRC(scsi_host_alloc, 0x7b1a0218, "");
SYMBOL_CRC(scsi_host_lookup, 0x6ee6c27a, "");
SYMBOL_CRC(scsi_host_get, 0x79882c4b, "");
SYMBOL_CRC(scsi_host_busy, 0xb762f327, "");
SYMBOL_CRC(scsi_host_put, 0x72705ca2, "");
SYMBOL_CRC(scsi_is_host_device, 0x6a6d16d1, "");
SYMBOL_CRC(scsi_queue_work, 0x6d0e761c, "_gpl");
SYMBOL_CRC(scsi_flush_work, 0x8e7f9104, "_gpl");
SYMBOL_CRC(scsi_host_complete_all_commands, 0xeeca3bd8, "_gpl");
SYMBOL_CRC(scsi_host_busy_iter, 0xc5ed7944, "_gpl");
SYMBOL_CRC(scsi_set_medium_removal, 0x21564da5, "");
SYMBOL_CRC(scsi_cmd_allowed, 0xeda2e038, "");
SYMBOL_CRC(put_sg_io_hdr, 0x5ec4aee6, "");
SYMBOL_CRC(get_sg_io_hdr, 0x1de4ccb2, "");
SYMBOL_CRC(scsi_ioctl, 0x4f899bc7, "");
SYMBOL_CRC(scsi_ioctl_block_when_processing_errors, 0x353b6112, "_gpl");
SYMBOL_CRC(scsi_bios_ptable, 0x9d0d66fb, "");
SYMBOL_CRC(scsi_partsize, 0xd9513a00, "");
SYMBOL_CRC(scsicam_bios_param, 0xd2850a7e, "");
SYMBOL_CRC(scsi_schedule_eh, 0x4a0cd517, "_gpl");
SYMBOL_CRC(scsi_block_when_processing_errors, 0x5e69b622, "");
SYMBOL_CRC(scsi_check_sense, 0xdc8205d2, "_gpl");
SYMBOL_CRC(scsi_eh_prep_cmnd, 0xcf27415b, "");
SYMBOL_CRC(scsi_eh_restore_cmnd, 0x7f4143c7, "");
SYMBOL_CRC(scsi_eh_finish_cmd, 0x5ac411fe, "");
SYMBOL_CRC(scsi_eh_get_sense, 0x26c90ea4, "_gpl");
SYMBOL_CRC(scsi_eh_ready_devs, 0x0759a2ce, "_gpl");
SYMBOL_CRC(scsi_eh_flush_done_q, 0xf811e69d, "");
SYMBOL_CRC(scsi_report_bus_reset, 0x61a149aa, "");
SYMBOL_CRC(scsi_report_device_reset, 0x7d7f3a85, "");
SYMBOL_CRC(scsi_command_normalize_sense, 0x0a9f89d9, "");
SYMBOL_CRC(scsi_get_sense_info_fld, 0xdd849d51, "");
SYMBOL_CRC(scsi_failures_reset_retries, 0x7ee9199d, "_gpl");
SYMBOL_CRC(scsi_execute_cmd, 0x5407a918, "");
SYMBOL_CRC(scsi_free_sgtables, 0x51f342fc, "_gpl");
SYMBOL_CRC(scsi_alloc_sgtables, 0x13cb982a, "");
SYMBOL_CRC(scsi_alloc_request, 0xf3c6aee3, "_gpl");
SYMBOL_CRC(scsi_done, 0xecbb1768, "");
SYMBOL_CRC(scsi_done_direct, 0x8173cfc6, "");
SYMBOL_CRC(scsi_init_limits, 0xa6caa586, "_gpl");
SYMBOL_CRC(scsi_block_requests, 0xf4725b80, "");
SYMBOL_CRC(scsi_unblock_requests, 0xf2f6c559, "");
SYMBOL_CRC(scsi_mode_select, 0x8fc97c3a, "_gpl");
SYMBOL_CRC(scsi_mode_sense, 0x2ab3d198, "");
SYMBOL_CRC(scsi_test_unit_ready, 0x184fa3d5, "");
SYMBOL_CRC(scsi_device_set_state, 0xf83473a0, "");
SYMBOL_CRC(sdev_evt_send, 0x9cfcd335, "_gpl");
SYMBOL_CRC(sdev_evt_alloc, 0x13ed8784, "_gpl");
SYMBOL_CRC(sdev_evt_send_simple, 0x8da9e397, "_gpl");
SYMBOL_CRC(scsi_device_quiesce, 0xc5d95c50, "");
SYMBOL_CRC(scsi_device_resume, 0x6bb694fd, "");
SYMBOL_CRC(scsi_target_quiesce, 0xca08a9bb, "");
SYMBOL_CRC(scsi_target_resume, 0x3d01eb12, "");
SYMBOL_CRC(scsi_internal_device_block_nowait, 0x641bbbde, "_gpl");
SYMBOL_CRC(scsi_internal_device_unblock_nowait, 0x80197bc0, "_gpl");
SYMBOL_CRC(scsi_block_targets, 0xd4a53372, "_gpl");
SYMBOL_CRC(scsi_target_unblock, 0xbd609baf, "_gpl");
SYMBOL_CRC(scsi_host_block, 0xa3b092b5, "_gpl");
SYMBOL_CRC(scsi_host_unblock, 0x89241c97, "_gpl");
SYMBOL_CRC(scsi_kmap_atomic_sg, 0xae66472b, "");
SYMBOL_CRC(scsi_kunmap_atomic_sg, 0x56c8799d, "");
SYMBOL_CRC(sdev_disable_disk_events, 0x187d2a6e, "");
SYMBOL_CRC(sdev_enable_disk_events, 0xb2ca5297, "");
SYMBOL_CRC(scsi_vpd_lun_id, 0xc0938b76, "");
SYMBOL_CRC(scsi_vpd_tpg_id, 0xa35f0672, "");
SYMBOL_CRC(scsi_build_sense, 0xc2bda946, "_gpl");
SYMBOL_CRC(scsi_sense_key_string, 0x96cd2b04, "");
SYMBOL_CRC(scsi_extd_sense_format, 0xd8a994eb, "");
SYMBOL_CRC(scsi_hostbyte_string, 0xb3d2c76d, "");
SYMBOL_CRC(scsi_mlreturn_string, 0xd1d87e92, "");
SYMBOL_CRC(scsi_dma_map, 0x3a337acd, "");
SYMBOL_CRC(scsi_dma_unmap, 0x14cca081, "");
SYMBOL_CRC(scsi_is_target_device, 0x4df930a2, "");
SYMBOL_CRC(scsi_sanitize_inquiry_string, 0x27756bc8, "");
SYMBOL_CRC(__scsi_add_device, 0x332e0720, "");
SYMBOL_CRC(scsi_add_device, 0xc67c7580, "");
SYMBOL_CRC(scsi_resume_device, 0xf08a4af4, "");
SYMBOL_CRC(scsi_rescan_device, 0xc9c42b67, "");
SYMBOL_CRC(scsi_scan_target, 0xd6b64063, "");
SYMBOL_CRC(scsi_scan_host, 0x0d1e3ccd, "");
SYMBOL_CRC(scsi_remove_device, 0x04d0bac1, "");
SYMBOL_CRC(scsi_remove_target, 0x47120c82, "");
SYMBOL_CRC(__scsi_register_driver, 0xb4e14f8f, "");
SYMBOL_CRC(scsi_register_interface, 0x5d7421d7, "");
SYMBOL_CRC(scsi_is_sdev_device, 0x18b1a5c4, "");
SYMBOL_CRC(scsi_dev_info_list_add_keyed, 0x2733eaf7, "");
SYMBOL_CRC(scsi_dev_info_list_del_keyed, 0xccfd2ebc, "");
SYMBOL_CRC(scsi_get_device_flags_keyed, 0xe1983f5d, "");
SYMBOL_CRC(scsi_dev_info_add_list, 0x204c5067, "");
SYMBOL_CRC(scsi_dev_info_remove_list, 0x97bdfa60, "");
SYMBOL_CRC(scsi_nl_sock, 0x0d3b5dbd, "_gpl");
SYMBOL_CRC(sdev_prefix_printk, 0xcfeca16c, "");
SYMBOL_CRC(scmd_printk, 0x6e96bbd6, "");
SYMBOL_CRC(__scsi_format_command, 0x93022ba6, "");
SYMBOL_CRC(scsi_print_command, 0xfc609153, "");
SYMBOL_CRC(scsi_print_sense_hdr, 0xb04ce688, "");
SYMBOL_CRC(__scsi_print_sense, 0xe446487a, "");
SYMBOL_CRC(scsi_print_sense, 0xe6e03541, "");
SYMBOL_CRC(scsi_print_result, 0x90b5ffed, "");
SYMBOL_CRC(scsi_autopm_get_device, 0x9898486b, "_gpl");
SYMBOL_CRC(scsi_autopm_put_device, 0x64498edb, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0xac9fb508, "netlink_capable" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xd6ee77a5, "blk_rq_map_kern" },
	{ 0xc6cbbc89, "capable" },
	{ 0x7f1fd79f, "module_put" },
	{ 0x7ead9ba4, "blk_get_queue" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xf818ae8e, "kobject_uevent_env" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8b38092, "perf_trace_buf_alloc" },
	{ 0xd897d355, "blk_rq_map_user" },
	{ 0x9cb54e2f, "perf_trace_run_bpf_submit" },
	{ 0xb5228f1a, "bus_unregister" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0xe5590ebd, "init_net" },
	{ 0x448563a, "blk_update_request" },
	{ 0x87400f82, "skb_pull" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x934ea33f, "device_add" },
	{ 0x262556a9, "blk_rq_map_user_io" },
	{ 0x7efc2c75, "blk_execute_rq_nowait" },
	{ 0xa07a37f0, "memchr" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0x65036d47, "blk_mq_delay_run_hw_queues" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xb609162e, "kmem_cache_free" },
	{ 0x65e0d6d7, "memory_read_from_buffer" },
	{ 0x5a921311, "strncmp" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x5db87f6c, "seq_putc" },
	{ 0x8ad60d40, "__blk_rq_map_sg" },
	{ 0xde6889d3, "trace_event_reg" },
	{ 0x1ab19a06, "blk_mq_alloc_request" },
	{ 0xffb7c514, "ida_free" },
	{ 0xaa9104fb, "transport_configure_device" },
	{ 0x53e80f0, "bsg_register_queue" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x203b9e03, "netlink_kernel_release" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x9901bc1d, "class_unregister" },
	{ 0x4d31cbe2, "blk_mq_free_tag_set" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x650081e1, "class_interface_register" },
	{ 0x72ea7b2d, "scsi_device_type" },
	{ 0x585258e2, "kthread_stop" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x6d294e43, "clock_t_to_jiffies" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xaff1c4a0, "transport_add_device" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x7ce3208b, "blk_put_queue" },
	{ 0x95a052b1, "bpf_trace_run1" },
	{ 0xc04e9955, "device_del" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x3bd45f5c, "register_sysctl_sz" },
	{ 0xfb578fc5, "memset" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x823e8f52, "blk_mq_wait_quiesce_done" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x506db883, "blk_post_runtime_resume" },
	{ 0x9207278f, "__kmem_cache_create_args" },
	{ 0x66f36e00, "blk_rq_unmap_user" },
	{ 0x19a55fde, "param_ops_string" },
	{ 0xd5de5f2b, "blk_clear_pm_only" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc03f042e, "kthread_create_on_node" },
	{ 0xe37056dc, "pv_ops" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x16abb535, "blk_mq_complete_request" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x67b9625c, "pm_runtime_forbid" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0xce2667da, "blk_mq_freeze_queue" },
	{ 0x3c7a51a5, "trace_event_buffer_reserve" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0x8188f58f, "__pm_runtime_resume" },
	{ 0x85df9b6c, "strsep" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd129338b, "blk_mq_destroy_queue" },
	{ 0xfbe215e4, "sg_next" },
	{ 0x35792863, "sysfs_break_active_protection" },
	{ 0x94c1bfc3, "__folio_put" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xcd11edc7, "blk_rq_map_integrity_sg" },
	{ 0x538d6f90, "transport_destroy_device" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x46358b27, "blk_mq_alloc_queue" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0x377214d3, "seq_printf" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb2fa093e, "blk_mq_map_queues" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x8112b3d2, "scsi_build_sense_buffer" },
	{ 0xcf3cd7e, "blk_mq_unfreeze_queue" },
	{ 0x3079d629, "blk_mq_start_request" },
	{ 0x287b7c89, "blk_mq_tagset_busy_iter" },
	{ 0xb837b08e, "queue_limits_commit_update" },
	{ 0xf943375f, "proc_dointvec" },
	{ 0xced038c4, "blk_mq_quiesce_queue_nowait" },
	{ 0x233622c7, "sbitmap_weight" },
	{ 0x4836cf95, "dma_unmap_sg_attrs" },
	{  0xfeccb, "__seq_puts" },
	{ 0x399ce4ec, "blk_pre_runtime_suspend" },
	{ 0x55db1940, "__pm_runtime_suspend" },
	{  0x3eed8, "kmem_cache_alloc_node_noprof" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x754d539c, "strlen" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0xe3a61ac6, "_dev_printk" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x8e66f282, "blk_mq_run_hw_queues" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0xc80d13ee, "__pm_runtime_disable" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x9e229c49, "sg_alloc_table_chained" },
	{ 0xeafa5113, "sbitmap_get" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x71cd0451, "blk_post_runtime_suspend" },
	{ 0x3eec5bd1, "blk_mq_requeue_request" },
	{ 0x972052ee, "driver_register" },
	{ 0xd4ec10e6, "BUG_func" },
	{ 0x4a958e37, "class_register" },
	{ 0x538246ce, "__pm_runtime_idle" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb033617e, "blk_queue_rq_timeout" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xeeea671c, "device_remove_file" },
	{ 0xa83a27a3, "bus_register" },
	{ 0x6c90184e, "kmem_cache_destroy" },
	{ 0x909396f0, "dma_map_sg_attrs" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x232d6aa4, "class_find_device" },
	{ 0xaca2d48b, "__blk_mq_end_request" },
	{ 0x61b7b126, "simple_strtoull" },
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0x6f4b9c2d, "param_ops_ullong" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xaa0c318b, "vscnprintf" },
	{ 0x1f7fdb27, "try_module_get" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x94078854, "add_disk_randomness" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x566b7206, "param_ops_uint" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xc6f15b39, "dev_set_name" },
	{ 0x24ec9086, "sbitmap_resize" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xfe13a601, "trace_seq_printf" },
	{ 0x594558fc, "blk_pre_runtime_resume" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xc1cc4ef1, "trace_raw_output_prep" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x11d5d485, "transport_remove_device" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xdedf4785, "device_unregister" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xc5597d14, "__trace_trigger_soft_disabled" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x825be683, "trace_event_printf" },
	{ 0x96848186, "scnprintf" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xbb53a751, "read_cache_folio" },
	{ 0x34173ca4, "sysfs_unbreak_active_protection" },
	{ 0xe7fa695f, "device_initialize" },
	{ 0x40e668b1, "blk_mq_unquiesce_queue" },
	{ 0x463c3e3b, "sbitmap_init_node" },
	{ 0xaf437a95, "trace_event_raw_init" },
	{ 0x8900d05a, "trace_print_symbols_seq" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x37a0cba, "kfree" },
	{ 0x10d9f885, "scsi_sense_desc_find" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x43babd19, "sg_init_one" },
	{ 0xe68a26a4, "__netlink_kernel_create" },
	{ 0xa56e1a52, "sg_free_table_chained" },
	{ 0xaebbb3cc, "blk_mq_kick_requeue_list" },
	{ 0xa8694ecd, "kblockd_schedule_work" },
	{ 0x80b29ea5, "device_for_each_child" },
	{ 0xcf8e538f, "bpf_trace_run2" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x697ed5f0, "memcpy_and_pad" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xe2964344, "__wake_up" },
	{ 0x3131271a, "get_device" },
	{ 0xbbc0b04a, "blk_set_queue_depth" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x6cc72ac6, "__dynamic_dev_dbg" },
	{ 0x5e651d9f, "trace_print_hex_seq" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xae865e4e, "netlink_ack" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfb6bbba0, "blk_mq_delay_kick_requeue_list" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xd8a883a8, "platform_bus" },
	{ 0xd095e5c, "blk_mq_alloc_tag_set" },
	{ 0x16d30c75, "wake_up_process" },
	{ 0x23c37ad3, "trace_seq_puts" },
	{ 0x6d9e9eae, "trace_event_buffer_commit" },
	{ 0xe3f1bfb4, "blk_rq_init" },
	{ 0x41b9a6e6, "bsg_unregister_queue" },
	{ 0x398c28ae, "transport_setup_device" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x31b164e7, "__pm_runtime_set_status" },
	{ 0xf5f370e0, "async_schedule_node" },
	{ 0x5566284a, "trace_seq_putc" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xfb23ba51, "blk_execute_rq" },
	{ 0x1693c4c3, "unregister_sysctl_table" },
	{ 0xf39d4e69, "blk_set_pm_only" },
	{ 0xeeb9f651, "dma_max_mapping_size" },
	{ 0xca844bc7, "put_device" },
	{ 0xa76c6a6e, "pm_runtime_enable" },
	{ 0xfe916dc6, "hex_dump_to_buffer" },
	{ 0xa916b694, "strnlen" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x42f9b424, "blk_mq_free_request" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "scsi_common");

