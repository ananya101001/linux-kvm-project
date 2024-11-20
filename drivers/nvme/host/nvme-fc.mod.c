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

KSYMTAB_FUNC(nvme_fc_register_localport, "_gpl", "");
KSYMTAB_FUNC(nvme_fc_unregister_localport, "_gpl", "");
KSYMTAB_FUNC(nvme_fc_register_remoteport, "_gpl", "");
KSYMTAB_FUNC(nvme_fc_unregister_remoteport, "_gpl", "");
KSYMTAB_FUNC(nvme_fc_rescan_remoteport, "_gpl", "");
KSYMTAB_FUNC(nvme_fc_set_remoteport_devloss, "_gpl", "");
KSYMTAB_FUNC(nvme_fc_rcv_ls_req, "_gpl", "");
KSYMTAB_FUNC(nvme_fc_io_getuuid, "_gpl", "");

SYMBOL_CRC(nvme_fc_register_localport, 0x07b42238, "_gpl");
SYMBOL_CRC(nvme_fc_unregister_localport, 0x3884f8b8, "_gpl");
SYMBOL_CRC(nvme_fc_register_remoteport, 0x0d12e564, "_gpl");
SYMBOL_CRC(nvme_fc_unregister_remoteport, 0xfca9dc99, "_gpl");
SYMBOL_CRC(nvme_fc_rescan_remoteport, 0x3e33ac54, "_gpl");
SYMBOL_CRC(nvme_fc_set_remoteport_devloss, 0x8a9cf5a7, "_gpl");
SYMBOL_CRC(nvme_fc_rcv_ls_req, 0xbb0e18a6, "_gpl");
SYMBOL_CRC(nvme_fc_io_getuuid, 0xcc8a2d78, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0x24e023f9, "nvme_remove_io_tag_set" },
	{ 0x77d04ef7, "nvme_cleanup_cmd" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe86d1fac, "nvme_mpath_start_request" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2f195f8, "nvmf_unregister_transport" },
	{ 0xca844bc7, "put_device" },
	{ 0xa916b694, "strnlen" },
	{ 0x9f75100, "nvme_change_ctrl_state" },
	{ 0x5a549f7, "_dev_info" },
	{ 0xcbd72b35, "nvme_init_ctrl" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xd58bbbcb, "nvme_delete_wq" },
	{ 0x2311f492, "nvme_alloc_io_tag_set" },
	{ 0xca2f32c6, "nvme_fail_nonready_command" },
	{ 0xf818ae8e, "kobject_uevent_env" },
	{ 0x7f67ab4, "__dma_sync_single_for_cpu" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0x5d480ef3, "device_create" },
	{ 0xf7bdaf53, "blk_sync_queue" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8ad60d40, "__blk_rq_map_sg" },
	{ 0xffb7c514, "ida_free" },
	{ 0x41d99322, "nvmf_reg_read64" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x9901bc1d, "class_unregister" },
	{ 0x49224181, "nvme_reset_wq" },
	{ 0x913f9309, "nvmf_connect_admin_queue" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x7a72231e, "nvme_enable_ctrl" },
	{ 0x99898540, "nvme_unquiesce_admin_queue" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdd064835, "nvme_unquiesce_io_queues" },
	{ 0xb0e0612f, "blk_mq_update_nr_hw_queues" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x26ab7aa5, "nvmf_reg_write32" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x88dfc4d9, "nvmf_should_reconnect" },
	{ 0x5dcfb0c6, "__dma_sync_single_for_device" },
	{ 0xe85c105a, "nvme_complete_async_event" },
	{ 0xfbe215e4, "sg_next" },
	{ 0x50785e75, "device_destroy" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x53735173, "nvme_set_queue_count" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb2fa093e, "blk_mq_map_queues" },
	{ 0xbb065a5f, "nvmf_register_transport" },
	{ 0x3079d629, "blk_mq_start_request" },
	{ 0x910435db, "nvme_quiesce_io_queues" },
	{ 0x287b7c89, "blk_mq_tagset_busy_iter" },
	{ 0x587d28cf, "nvme_stop_ctrl" },
	{ 0x4836cf95, "dma_unmap_sg_attrs" },
	{ 0x469c2c16, "nvme_init_ctrl_finish" },
	{ 0xdb23c420, "nvme_reset_ctrl" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x9e229c49, "sg_alloc_table_chained" },
	{ 0x77c01aa1, "nvme_quiesce_admin_queue" },
	{ 0x4a958e37, "class_register" },
	{ 0x25e83b33, "__nvme_check_ready" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x909396f0, "dma_map_sg_attrs" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x776e35c7, "nvme_add_ctrl" },
	{ 0x1367a542, "nvme_remove_admin_tag_set" },
	{ 0x973b7bc, "nvme_sync_io_queues" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xec266c4a, "nvme_uninit_ctrl" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x400c9cf3, "nvme_complete_rq" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xfcb2b86b, "nvmf_free_options" },
	{ 0xedcae7ad, "nvmf_subsystem_reset" },
	{ 0xc47ea258, "blk_mq_tagset_wait_completed_request" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf520cf, "nvme_stop_keep_alive" },
	{ 0xd182ef5f, "blk_mq_complete_request_remote" },
	{ 0x204033c7, "dma_unmap_page_attrs" },
	{ 0x24e11f05, "nvme_setup_cmd" },
	{ 0x498e9cc7, "nvme_start_ctrl" },
	{ 0x4ad95c4, "nvme_alloc_admin_tag_set" },
	{ 0x5530581a, "nvmf_connect_io_queue" },
	{ 0xfba7ddd2, "match_u64" },
	{ 0x37a0cba, "kfree" },
	{ 0xa56e1a52, "sg_free_table_chained" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x64b62862, "nvme_wq" },
	{ 0x8884974e, "nvmf_reg_read32" },
	{ 0xe2964344, "__wake_up" },
	{ 0xd8f4eeb8, "nvme_delete_ctrl" },
	{ 0x3131271a, "get_device" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xee99c7ef, "dev_driver_string" },
	{ 0xd7f43a5c, "nvmf_get_address" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x28beaeee, "dma_map_page_attrs" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nvme-fabrics");

