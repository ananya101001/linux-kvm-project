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

KSYMTAB_FUNC(sas_register_ha, "_gpl", "");
KSYMTAB_FUNC(sas_unregister_ha, "_gpl", "");
KSYMTAB_FUNC(sas_phy_enable, "_gpl", "");
KSYMTAB_FUNC(sas_phy_reset, "_gpl", "");
KSYMTAB_FUNC(sas_prep_resume_ha, "", "");
KSYMTAB_FUNC(sas_resume_ha, "", "");
KSYMTAB_FUNC(sas_resume_ha_no_sync, "", "");
KSYMTAB_FUNC(sas_suspend_ha, "", "");
KSYMTAB_DATA(dev_attr_phy_event_threshold, "_gpl", "");
KSYMTAB_FUNC(sas_domain_attach_transport, "_gpl", "");
KSYMTAB_FUNC(sas_drain_work, "_gpl", "");
KSYMTAB_FUNC(sas_notify_port_event, "_gpl", "");
KSYMTAB_FUNC(sas_notify_phy_event, "_gpl", "");
KSYMTAB_FUNC(sas_find_attached_phy_id, "_gpl", "");
KSYMTAB_FUNC(sas_queuecommand, "_gpl", "");
KSYMTAB_FUNC(sas_get_local_phy, "_gpl", "");
KSYMTAB_FUNC(sas_eh_abort_handler, "_gpl", "");
KSYMTAB_FUNC(sas_eh_device_reset_handler, "_gpl", "");
KSYMTAB_FUNC(sas_eh_target_reset_handler, "_gpl", "");
KSYMTAB_FUNC(sas_ioctl, "_gpl", "");
KSYMTAB_FUNC(sas_target_alloc, "_gpl", "");
KSYMTAB_FUNC(sas_device_configure, "_gpl", "");
KSYMTAB_FUNC(sas_change_queue_depth, "_gpl", "");
KSYMTAB_FUNC(sas_bios_param, "_gpl", "");
KSYMTAB_FUNC(sas_execute_internal_abort_single, "_gpl", "");
KSYMTAB_FUNC(sas_execute_internal_abort_dev, "_gpl", "");
KSYMTAB_FUNC(sas_abort_task_set, "_gpl", "");
KSYMTAB_FUNC(sas_clear_task_set, "_gpl", "");
KSYMTAB_FUNC(sas_lu_reset, "_gpl", "");
KSYMTAB_FUNC(sas_query_task, "_gpl", "");
KSYMTAB_FUNC(sas_abort_task, "_gpl", "");
KSYMTAB_FUNC(sas_task_abort, "_gpl", "");
KSYMTAB_FUNC(sas_slave_alloc, "_gpl", "");
KSYMTAB_FUNC(sas_target_destroy, "_gpl", "");
KSYMTAB_FUNC(sas_request_addr, "_gpl", "");
KSYMTAB_FUNC(sas_ssp_task_response, "_gpl", "");
KSYMTAB_FUNC(smp_ata_check_ready_type, "_gpl", "");
KSYMTAB_FUNC(sas_ata_schedule_reset, "_gpl", "");
KSYMTAB_FUNC(sas_ata_device_link_abort, "_gpl", "");
KSYMTAB_FUNC(sas_execute_ata_cmd, "_gpl", "");
KSYMTAB_DATA(sas_ata_sdev_attr_group, "_gpl", "");
KSYMTAB_FUNC(try_test_sas_gpio_gp_bit, "", "");

SYMBOL_CRC(sas_register_ha, 0xcbe2c2b8, "_gpl");
SYMBOL_CRC(sas_unregister_ha, 0x6ea652b2, "_gpl");
SYMBOL_CRC(sas_phy_enable, 0x4c63bf64, "_gpl");
SYMBOL_CRC(sas_phy_reset, 0x7eea7f16, "_gpl");
SYMBOL_CRC(sas_prep_resume_ha, 0x5cfe1031, "");
SYMBOL_CRC(sas_resume_ha, 0x90bd235c, "");
SYMBOL_CRC(sas_resume_ha_no_sync, 0xafb2915c, "");
SYMBOL_CRC(sas_suspend_ha, 0x12199daa, "");
SYMBOL_CRC(dev_attr_phy_event_threshold, 0xb72376c1, "_gpl");
SYMBOL_CRC(sas_domain_attach_transport, 0x85cd5826, "_gpl");
SYMBOL_CRC(sas_drain_work, 0x8ee0176b, "_gpl");
SYMBOL_CRC(sas_notify_port_event, 0x02c51436, "_gpl");
SYMBOL_CRC(sas_notify_phy_event, 0xa6003223, "_gpl");
SYMBOL_CRC(sas_find_attached_phy_id, 0xac834326, "_gpl");
SYMBOL_CRC(sas_queuecommand, 0xb689f307, "_gpl");
SYMBOL_CRC(sas_get_local_phy, 0x23f6088b, "_gpl");
SYMBOL_CRC(sas_eh_abort_handler, 0xd5b24777, "_gpl");
SYMBOL_CRC(sas_eh_device_reset_handler, 0x77fde9e7, "_gpl");
SYMBOL_CRC(sas_eh_target_reset_handler, 0x11a99501, "_gpl");
SYMBOL_CRC(sas_ioctl, 0x646b519c, "_gpl");
SYMBOL_CRC(sas_target_alloc, 0x00350813, "_gpl");
SYMBOL_CRC(sas_device_configure, 0x1fb0eec8, "_gpl");
SYMBOL_CRC(sas_change_queue_depth, 0xba897204, "_gpl");
SYMBOL_CRC(sas_bios_param, 0xab3e81dd, "_gpl");
SYMBOL_CRC(sas_execute_internal_abort_single, 0x61afb864, "_gpl");
SYMBOL_CRC(sas_execute_internal_abort_dev, 0x490f7bdc, "_gpl");
SYMBOL_CRC(sas_abort_task_set, 0x935ea03a, "_gpl");
SYMBOL_CRC(sas_clear_task_set, 0xee1bf9a0, "_gpl");
SYMBOL_CRC(sas_lu_reset, 0x6faf1517, "_gpl");
SYMBOL_CRC(sas_query_task, 0x2090a8ca, "_gpl");
SYMBOL_CRC(sas_abort_task, 0x81c75f56, "_gpl");
SYMBOL_CRC(sas_task_abort, 0x768af4e8, "_gpl");
SYMBOL_CRC(sas_slave_alloc, 0x3c611e34, "_gpl");
SYMBOL_CRC(sas_target_destroy, 0x02c913ae, "_gpl");
SYMBOL_CRC(sas_request_addr, 0xb1056c9b, "_gpl");
SYMBOL_CRC(sas_ssp_task_response, 0xc9b1cfc0, "_gpl");
SYMBOL_CRC(smp_ata_check_ready_type, 0xa6e7d446, "_gpl");
SYMBOL_CRC(sas_ata_schedule_reset, 0xa72a0253, "_gpl");
SYMBOL_CRC(sas_ata_device_link_abort, 0x98e11a04, "_gpl");
SYMBOL_CRC(sas_execute_ata_cmd, 0x00be602f, "_gpl");
SYMBOL_CRC(sas_ata_sdev_attr_group, 0xed147e71, "_gpl");
SYMBOL_CRC(try_test_sas_gpio_gp_bit, 0x4a8e3d34, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xdf0c757f, "ata_tf_to_fis" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xca844bc7, "put_device" },
	{ 0xa916b694, "strnlen" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x5bcc0df7, "ata_dev_classify" },
	{ 0x5a549f7, "_dev_info" },
	{ 0x8bc46e82, "sas_phy_free" },
	{ 0x5ac411fe, "scsi_eh_finish_cmd" },
	{ 0x96f0e74b, "ata_port_schedule_eh" },
	{ 0x8cb330ba, "ata_tport_delete" },
	{ 0xf811e69d, "scsi_eh_flush_done_q" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x24d273d1, "add_timer" },
	{ 0x7bcb3aa4, "sas_port_add" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc405fca5, "sas_port_mark_backlink" },
	{ 0xb609162e, "kmem_cache_free" },
	{ 0x61141da, "ata_link_abort" },
	{ 0x2f2ed291, "ata_std_qc_defer" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xde7a6282, "ata_scsi_port_error_handler" },
	{ 0x6a856cd4, "ata_change_queue_depth" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x90b4511f, "ata_port_probe" },
	{ 0x137be620, "ata_std_error_handler" },
	{ 0xfb869467, "ata_port_free" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4d238193, "sas_end_device_alloc" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x29ff0c4c, "sas_read_port_mode_page" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xead86383, "sas_expander_alloc" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0xa4217cea, "sas_rphy_delete" },
	{ 0x6a6d16d1, "scsi_is_host_device" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xa8b4ee43, "sas_attach_transport" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xc8817ac9, "kmem_cache_alloc_noprof" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9207278f, "__kmem_cache_create_args" },
	{ 0xb762f327, "scsi_host_busy" },
	{ 0xd87ea073, "sas_port_delete" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1865aabf, "ata_sas_port_suspend" },
	{ 0xd4c625d7, "sas_rphy_add" },
	{ 0x8188f58f, "__pm_runtime_resume" },
	{ 0x792e26fc, "sas_port_delete_phy" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x8a0d651a, "sas_rphy_free" },
	{ 0xfbe215e4, "sg_next" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0x78849a78, "sas_port_add_phy" },
	{ 0x2a4f9542, "ata_scsi_cmd_error_handler" },
	{ 0xbd360abe, "ata_ncq_prio_enable" },
	{ 0xd21b61bd, "async_schedule_node_domain" },
	{ 0x287b7c89, "blk_mq_tagset_busy_iter" },
	{ 0xecbb1768, "scsi_done" },
	{ 0xf2f6c559, "scsi_unblock_requests" },
	{ 0xd1d317cc, "sas_phy_add" },
	{ 0xdcbeba1d, "sg_copy_from_buffer" },
	{ 0x845b4f94, "ata_host_put" },
	{ 0x4f02c77a, "sas_port_free" },
	{ 0xf84c93fc, "ata_std_sched_eh" },
	{ 0xcf2dcb52, "ata_port_alloc" },
	{ 0xf4725b80, "scsi_block_requests" },
	{ 0x9111f7d6, "blk_abort_request" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x4e3c79, "ata_ncq_prio_supported" },
	{ 0x16f123e, "sg_copy_to_buffer" },
	{ 0x7fc45931, "sas_remove_children" },
	{ 0x3cb5f497, "scsi_change_queue_depth" },
	{ 0x538246ce, "__pm_runtime_idle" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xc330c295, "ata_port_wait_eh" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x6c90184e, "kmem_cache_destroy" },
	{ 0x1f8ae973, "ata_qc_complete" },
	{ 0xe913f82b, "ata_sas_scsi_ioctl" },
	{ 0x40c6a926, "ata_tport_add" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x6fb78a13, "sas_rphy_remove" },
	{ 0xd2deb7bf, "ata_sas_device_configure" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xa38602cd, "drain_workqueue" },
	{ 0x765cf494, "bsg_job_done" },
	{ 0x9fe6e080, "ata_sas_queuecmd" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0x16315d3c, "sas_rphy_unlink" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x4a0cd517, "scsi_schedule_eh" },
	{ 0x609e2ec3, "request_firmware" },
	{ 0x96848186, "scnprintf" },
	{ 0xc2e2d1a9, "ata_ncq_prio_enabled" },
	{ 0x644c59aa, "ata_host_init" },
	{ 0xf47769d5, "sas_port_alloc" },
	{ 0xa4c085f8, "ata_tf_from_fis" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6ca4bf88, "async_synchronize_full_domain" },
	{ 0x37a0cba, "kfree" },
	{ 0x759a2ce, "scsi_eh_ready_devs" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0xcbf557ce, "sas_port_get_phy" },
	{ 0x111eb5c7, "ata_sas_port_resume" },
	{ 0x43babd19, "sg_init_one" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xe2964344, "__wake_up" },
	{ 0x26c90ea4, "scsi_eh_get_sense" },
	{ 0x3131271a, "get_device" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb0bdcd2c, "ata_wait_after_reset" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x50cf7585, "hex2bin" },
	{ 0x4c7a1d0b, "sas_phy_alloc" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "libata,scsi_transport_sas,scsi_mod,scsi_common");

