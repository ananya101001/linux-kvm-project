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

KSYMTAB_FUNC(vhost_work_init, "_gpl", "");
KSYMTAB_FUNC(vhost_poll_init, "_gpl", "");
KSYMTAB_FUNC(vhost_poll_start, "_gpl", "");
KSYMTAB_FUNC(vhost_poll_stop, "_gpl", "");
KSYMTAB_FUNC(vhost_vq_work_queue, "_gpl", "");
KSYMTAB_FUNC(vhost_dev_flush, "_gpl", "");
KSYMTAB_FUNC(vhost_vq_has_work, "_gpl", "");
KSYMTAB_FUNC(vhost_poll_queue, "_gpl", "");
KSYMTAB_FUNC(vhost_vq_is_setup, "_gpl", "");
KSYMTAB_FUNC(vhost_exceeds_weight, "_gpl", "");
KSYMTAB_FUNC(vhost_dev_init, "_gpl", "");
KSYMTAB_FUNC(vhost_dev_check_owner, "_gpl", "");
KSYMTAB_FUNC(vhost_dev_has_owner, "_gpl", "");
KSYMTAB_FUNC(vhost_worker_ioctl, "_gpl", "");
KSYMTAB_FUNC(vhost_dev_set_owner, "_gpl", "");
KSYMTAB_FUNC(vhost_dev_reset_owner_prepare, "_gpl", "");
KSYMTAB_FUNC(vhost_dev_reset_owner, "_gpl", "");
KSYMTAB_FUNC(vhost_dev_stop, "_gpl", "");
KSYMTAB_FUNC(vhost_clear_msg, "_gpl", "");
KSYMTAB_FUNC(vhost_dev_cleanup, "_gpl", "");
KSYMTAB_FUNC(vhost_chr_write_iter, "", "");
KSYMTAB_FUNC(vhost_chr_poll, "", "");
KSYMTAB_FUNC(vhost_chr_read_iter, "_gpl", "");
KSYMTAB_FUNC(vq_meta_prefetch, "_gpl", "");
KSYMTAB_FUNC(vhost_log_access_ok, "_gpl", "");
KSYMTAB_FUNC(vhost_vq_access_ok, "_gpl", "");
KSYMTAB_FUNC(vhost_vring_ioctl, "_gpl", "");
KSYMTAB_FUNC(vhost_init_device_iotlb, "_gpl", "");
KSYMTAB_FUNC(vhost_dev_ioctl, "_gpl", "");
KSYMTAB_FUNC(vhost_log_write, "_gpl", "");
KSYMTAB_FUNC(vhost_vq_init_access, "_gpl", "");
KSYMTAB_FUNC(vhost_get_vq_desc, "_gpl", "");
KSYMTAB_FUNC(vhost_discard_vq_desc, "_gpl", "");
KSYMTAB_FUNC(vhost_add_used, "_gpl", "");
KSYMTAB_FUNC(vhost_add_used_n, "_gpl", "");
KSYMTAB_FUNC(vhost_signal, "_gpl", "");
KSYMTAB_FUNC(vhost_add_used_and_signal, "_gpl", "");
KSYMTAB_FUNC(vhost_add_used_and_signal_n, "_gpl", "");
KSYMTAB_FUNC(vhost_vq_avail_empty, "_gpl", "");
KSYMTAB_FUNC(vhost_enable_notify, "_gpl", "");
KSYMTAB_FUNC(vhost_disable_notify, "_gpl", "");
KSYMTAB_FUNC(vhost_new_msg, "_gpl", "");
KSYMTAB_FUNC(vhost_enqueue_msg, "_gpl", "");
KSYMTAB_FUNC(vhost_dequeue_msg, "_gpl", "");
KSYMTAB_FUNC(vhost_set_backend_features, "_gpl", "");

SYMBOL_CRC(vhost_work_init, 0xa909cfc5, "_gpl");
SYMBOL_CRC(vhost_poll_init, 0x436e1b29, "_gpl");
SYMBOL_CRC(vhost_poll_start, 0x0db47343, "_gpl");
SYMBOL_CRC(vhost_poll_stop, 0x377a1346, "_gpl");
SYMBOL_CRC(vhost_vq_work_queue, 0xf01a142e, "_gpl");
SYMBOL_CRC(vhost_dev_flush, 0xcdd52b72, "_gpl");
SYMBOL_CRC(vhost_vq_has_work, 0x53b61bc6, "_gpl");
SYMBOL_CRC(vhost_poll_queue, 0x8aa9f350, "_gpl");
SYMBOL_CRC(vhost_vq_is_setup, 0xbc75a4f5, "_gpl");
SYMBOL_CRC(vhost_exceeds_weight, 0x5694b563, "_gpl");
SYMBOL_CRC(vhost_dev_init, 0x15502eb0, "_gpl");
SYMBOL_CRC(vhost_dev_check_owner, 0x2e562224, "_gpl");
SYMBOL_CRC(vhost_dev_has_owner, 0xd0a886fe, "_gpl");
SYMBOL_CRC(vhost_worker_ioctl, 0x0ab60038, "_gpl");
SYMBOL_CRC(vhost_dev_set_owner, 0x49f768d8, "_gpl");
SYMBOL_CRC(vhost_dev_reset_owner_prepare, 0xfd2b3e45, "_gpl");
SYMBOL_CRC(vhost_dev_reset_owner, 0x734e5544, "_gpl");
SYMBOL_CRC(vhost_dev_stop, 0x665635f0, "_gpl");
SYMBOL_CRC(vhost_clear_msg, 0x8365a4bc, "_gpl");
SYMBOL_CRC(vhost_dev_cleanup, 0x2b4b4ca2, "_gpl");
SYMBOL_CRC(vhost_chr_write_iter, 0x097e6ef4, "");
SYMBOL_CRC(vhost_chr_poll, 0xc3777061, "");
SYMBOL_CRC(vhost_chr_read_iter, 0x001dc794, "_gpl");
SYMBOL_CRC(vq_meta_prefetch, 0x42bed6c6, "_gpl");
SYMBOL_CRC(vhost_log_access_ok, 0x27f9addc, "_gpl");
SYMBOL_CRC(vhost_vq_access_ok, 0xf005383c, "_gpl");
SYMBOL_CRC(vhost_vring_ioctl, 0x00946487, "_gpl");
SYMBOL_CRC(vhost_init_device_iotlb, 0x09f214a6, "_gpl");
SYMBOL_CRC(vhost_dev_ioctl, 0x532341d9, "_gpl");
SYMBOL_CRC(vhost_log_write, 0x41ef63c1, "_gpl");
SYMBOL_CRC(vhost_vq_init_access, 0xf7a533b1, "_gpl");
SYMBOL_CRC(vhost_get_vq_desc, 0xd7534c72, "_gpl");
SYMBOL_CRC(vhost_discard_vq_desc, 0x7be4c8d1, "_gpl");
SYMBOL_CRC(vhost_add_used, 0x80a3a4b8, "_gpl");
SYMBOL_CRC(vhost_add_used_n, 0xb72acda7, "_gpl");
SYMBOL_CRC(vhost_signal, 0x333b4196, "_gpl");
SYMBOL_CRC(vhost_add_used_and_signal, 0x74628af7, "_gpl");
SYMBOL_CRC(vhost_add_used_and_signal_n, 0xe9385861, "_gpl");
SYMBOL_CRC(vhost_vq_avail_empty, 0xf0dc5ba9, "_gpl");
SYMBOL_CRC(vhost_enable_notify, 0x92f3cc1a, "_gpl");
SYMBOL_CRC(vhost_disable_notify, 0xea202c7d, "_gpl");
SYMBOL_CRC(vhost_new_msg, 0x18a34536, "_gpl");
SYMBOL_CRC(vhost_enqueue_msg, 0x81ce1c65, "_gpl");
SYMBOL_CRC(vhost_dequeue_msg, 0xf56cd655, "_gpl");
SYMBOL_CRC(vhost_set_backend_features, 0xe8d8b70d, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa6257a2f, "complete" },
	{ 0xddb1cd7, "llist_reverse_order" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x6b163536, "mmput" },
	{ 0x24a900a6, "__mmdrop" },
	{ 0xc577832d, "vhost_iotlb_alloc" },
	{ 0xa24517eb, "vhost_iotlb_free" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xe2964344, "__wake_up" },
	{ 0xc7a1840e, "llist_add_batch" },
	{ 0x5b30e25c, "vhost_task_wake" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd5a5a065, "pin_user_pages_fast" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xcb3888f2, "unpin_user_pages_dirty_lock" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc58007de, "vhost_task_create" },
	{ 0x8f00f6d1, "vhost_task_start" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x9114b616, "__xa_alloc" },
	{ 0x4471a51d, "vhost_task_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x8fa25c24, "xa_find" },
	{ 0xdf36914b, "xa_find_after" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x941f2aaa, "eventfd_ctx_put" },
	{ 0x37712435, "fput" },
	{ 0x745a981, "xa_erase" },
	{ 0xd9491c14, "xa_destroy" },
	{ 0x69e872f9, "vhost_iotlb_itree_first" },
	{ 0xc10e997, "eventfd_signal_mask" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x68a12ab8, "rep_movs_alternative" },
	{ 0x44cf8d9b, "iov_iter_init" },
	{ 0x639ccacd, "_copy_to_iter" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0xae8b3e, "get_task_mm" },
	{ 0x31f2a14c, "__kvmalloc_node_noprof" },
	{ 0x38ff875f, "vhost_iotlb_add_range" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xd67364f7, "eventfd_ctx_fdget" },
	{ 0x65df35ca, "__put_user_nocheck_2" },
	{ 0xd2bc5c46, "__get_user_nocheck_2" },
	{ 0xeec9a487, "_copy_from_iter" },
	{ 0x54a0e992, "iov_iter_revert" },
	{ 0x1f085485, "iov_iter_advance" },
	{ 0x6bec0e66, "vhost_iotlb_del_range" },
	{ 0x7e50c499, "eventfd_fget" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0x1c989125, "param_ops_ushort" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "vhost_iotlb");


MODULE_INFO(srcversion, "EEA0F6DBC2C7DD4874C288A");
