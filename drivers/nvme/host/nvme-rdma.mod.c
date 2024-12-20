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
	{ 0xee99c7ef, "dev_driver_string" },
	{ 0xd7f43a5c, "nvmf_get_address" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x28beaeee, "dma_map_page_attrs" },
	{ 0x21b39513, "nvme_host_path_error" },
	{ 0x122c3a7e, "_printk" },
	{ 0x24e023f9, "nvme_remove_io_tag_set" },
	{ 0x77d04ef7, "nvme_cleanup_cmd" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x1b34c953, "__rdma_create_kernel_id" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe86d1fac, "nvme_mpath_start_request" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2f195f8, "nvmf_unregister_transport" },
	{ 0xca844bc7, "put_device" },
	{ 0x9f75100, "nvme_change_ctrl_state" },
	{ 0x355d7e38, "nvme_cancel_tagset" },
	{ 0xecaf4bf9, "rdma_resolve_route" },
	{ 0x5a549f7, "_dev_info" },
	{ 0xcbd72b35, "nvme_init_ctrl" },
	{ 0xe2045f4c, "ib_register_client" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd58bbbcb, "nvme_delete_wq" },
	{ 0x2311f492, "nvme_alloc_io_tag_set" },
	{ 0x6951262a, "rdma_create_qp" },
	{ 0xca2f32c6, "nvme_fail_nonready_command" },
	{ 0x1a6a321f, "ib_map_mr_sg" },
	{ 0x7f67ab4, "__dma_sync_single_for_cpu" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0xe5590ebd, "init_net" },
	{ 0x509a2fa6, "ib_cq_pool_put" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf7bdaf53, "blk_sync_queue" },
	{ 0xcba532e6, "__ib_alloc_cq" },
	{ 0x8ad60d40, "__blk_rq_map_sg" },
	{ 0x71fbbe0f, "nvmf_map_queues" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0x41d99322, "nvmf_reg_read64" },
	{ 0x7f3e0d89, "inet_pton_with_scope" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0xe88a86c4, "rdma_destroy_qp" },
	{ 0x18911e06, "ib_check_mr_status" },
	{ 0x49224181, "nvme_reset_wq" },
	{ 0x913f9309, "nvmf_connect_admin_queue" },
	{ 0xf61c73ed, "nvmf_ip_options_match" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x813cf212, "nvme_io_timeout" },
	{ 0x56ee144a, "ib_destroy_qp_user" },
	{ 0x7a72231e, "nvme_enable_ctrl" },
	{ 0x99898540, "nvme_unquiesce_admin_queue" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x40561293, "ib_cq_pool_get" },
	{ 0x4d394006, "rdma_connect_locked" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xdd064835, "nvme_unquiesce_io_queues" },
	{ 0xe5840ec6, "ib_wc_status_msg" },
	{ 0xb0e0612f, "blk_mq_update_nr_hw_queues" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x26ab7aa5, "nvmf_reg_write32" },
	{ 0x16abb535, "blk_mq_complete_request" },
	{ 0xd0918217, "ib_dma_virt_map_sg" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xff3b4a1a, "ib_free_cq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x22199426, "param_ops_bool" },
	{ 0xd57f4f2c, "rdma_destroy_id" },
	{ 0x88dfc4d9, "nvmf_should_reconnect" },
	{ 0x5dcfb0c6, "__dma_sync_single_for_device" },
	{ 0xe85c105a, "nvme_complete_async_event" },
	{ 0xfbe215e4, "sg_next" },
	{ 0xcd11edc7, "blk_rq_map_integrity_sg" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x53735173, "nvme_set_queue_count" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x69a5838f, "ib_mr_pool_get" },
	{ 0xa4db3827, "ib_mr_pool_put" },
	{ 0xbb065a5f, "nvmf_register_transport" },
	{ 0x3079d629, "blk_mq_start_request" },
	{ 0x910435db, "nvme_quiesce_io_queues" },
	{ 0xf4a71580, "nvme_unfreeze" },
	{ 0x587d28cf, "nvme_stop_ctrl" },
	{ 0x9537c987, "ib_drain_qp" },
	{ 0xd9406694, "ib_dealloc_pd_user" },
	{ 0x4836cf95, "dma_unmap_sg_attrs" },
	{ 0xb21b19de, "rdma_consumer_reject_data" },
	{ 0x469c2c16, "nvme_init_ctrl_finish" },
	{ 0x9e229c49, "sg_alloc_table_chained" },
	{ 0x77c01aa1, "nvme_quiesce_admin_queue" },
	{ 0x25e83b33, "__nvme_check_ready" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x909396f0, "dma_map_sg_attrs" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x776e35c7, "nvme_add_ctrl" },
	{ 0x1367a542, "nvme_remove_admin_tag_set" },
	{ 0x973b7bc, "nvme_sync_io_queues" },
	{ 0x883144b2, "ib_mr_pool_destroy" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xbdb50258, "ib_unregister_client" },
	{ 0xec266c4a, "nvme_uninit_ctrl" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x400c9cf3, "nvme_complete_rq" },
	{ 0x45b3572b, "rdma_reject_msg" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x5704c471, "nvme_wait_freeze_timeout" },
	{ 0x907df803, "rdma_event_msg" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x6fa03f81, "nvme_cancel_admin_tagset" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xfcb2b86b, "nvmf_free_options" },
	{ 0xedcae7ad, "nvmf_subsystem_reset" },
	{ 0xf892cbb1, "__ib_alloc_pd" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xf520cf, "nvme_stop_keep_alive" },
	{ 0xd182ef5f, "blk_mq_complete_request_remote" },
	{ 0x204033c7, "dma_unmap_page_attrs" },
	{ 0x24e11f05, "nvme_setup_cmd" },
	{ 0x13c16c61, "nvme_start_freeze" },
	{ 0xf4ec44d1, "rdma_resolve_addr" },
	{ 0x498e9cc7, "nvme_start_ctrl" },
	{ 0x2b537ec0, "rdma_set_service_type" },
	{ 0x16e8c227, "ib_map_mr_sg_pi" },
	{ 0x4ad95c4, "nvme_alloc_admin_tag_set" },
	{ 0x5530581a, "nvmf_connect_io_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x28dd36a7, "ib_mr_pool_init" },
	{ 0xa56e1a52, "sg_free_table_chained" },
	{ 0xcfccf074, "ib_process_cq_direct" },
	{ 0x64b62862, "nvme_wq" },
	{ 0x8884974e, "nvmf_reg_read32" },
	{ 0xd8f4eeb8, "nvme_delete_ctrl" },
	{ 0xf6ed3334, "ib_event_msg" },
	{ 0x6cc72ac6, "__dynamic_dev_dbg" },
	{ 0xf0c1fcee, "nvme_disable_ctrl" },
	{ 0x5d4049d3, "rdma_disconnect" },
	{ 0xc009010e, "nvmf_set_io_queues" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nvme-fabrics,rdma_cm,ib_core");

