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

KSYMTAB_FUNC(dm_snap_origin, "", "");
KSYMTAB_FUNC(dm_snap_cow, "", "");
KSYMTAB_FUNC(dm_exception_store_type_register, "", "");
KSYMTAB_FUNC(dm_exception_store_type_unregister, "", "");
KSYMTAB_FUNC(dm_exception_store_create, "", "");
KSYMTAB_FUNC(dm_exception_store_destroy, "", "");

SYMBOL_CRC(dm_snap_origin, 0xb878d1dc, "");
SYMBOL_CRC(dm_snap_cow, 0x82359a5d, "");
SYMBOL_CRC(dm_exception_store_type_register, 0x8688ceb8, "");
SYMBOL_CRC(dm_exception_store_type_unregister, 0x52c6f9ed, "");
SYMBOL_CRC(dm_exception_store_create, 0xadb6f407, "");
SYMBOL_CRC(dm_exception_store_destroy, 0xeb31cb0e, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x7d27e504, "dm_shift_arg" },
	{ 0xe83039cc, "dm_bufio_client_create" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xe6024e59, "dm_bufio_release" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x2005df16, "dm_unregister_target" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x11089ac7, "_ctype" },
	{ 0x44a8d9bd, "dm_set_target_max_io_len" },
	{ 0xdb8367cc, "dm_kcopyd_zero" },
	{ 0xfb578fc5, "memset" },
	{ 0x401fdfc2, "dm_table_event" },
	{ 0xbb948960, "dm_internal_suspend_fast" },
	{ 0x39c74235, "dm_read_arg_group" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xc8817ac9, "kmem_cache_alloc_noprof" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xece784c2, "rb_first" },
	{ 0x9207278f, "__kmem_cache_create_args" },
	{ 0x448a2443, "dm_put" },
	{ 0x9e4faeef, "dm_io_client_destroy" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x40dd7831, "dm_kcopyd_copy" },
	{ 0xd05056f8, "dm_register_target" },
	{ 0x999e8297, "vfree" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x154c6338, "dm_kcopyd_client_destroy" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0x1ad7a19c, "dm_table_get_mode" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x91f00abc, "dm_bufio_set_minimum_buffers" },
	{ 0x572f89c3, "blkdev_issue_flush" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xffb8bc88, "dm_table_get_md" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0xd991e3b9, "dm_bufio_get_device_size" },
	{ 0xf2d95916, "mempool_init_noprof" },
	{ 0xc04f99e, "dm_io" },
	{ 0x8d90836b, "dm_get_device" },
	{ 0x754d539c, "strlen" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x31f2a14c, "__kvmalloc_node_noprof" },
	{ 0x53b954a2, "up_read" },
	{ 0xcd2ba798, "dm_bufio_forget" },
	{ 0x386ce2cc, "dm_bio_get_target_bio_nr" },
	{ 0x669c191b, "dm_consume_args" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x38e46431, "mempool_exit" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x6c90184e, "kmem_cache_destroy" },
	{ 0xec16a055, "bio_associate_blkg" },
	{ 0x87512f4a, "dm_internal_resume_fast" },
	{ 0x1f7fdb27, "try_module_get" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x566b7206, "param_ops_uint" },
	{ 0xafd744c6, "__x86_indirect_thunk_rbp" },
	{ 0xf2a8efae, "dm_kcopyd_do_callback" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xd3066c24, "dm_per_bio_data" },
	{ 0x6231046, "dm_put_device" },
	{ 0xca9360b5, "rb_next" },
	{ 0x2a6973a7, "dm_table_get_size" },
	{ 0x6cdb2d56, "dm_bufio_prefetch" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x96848186, "scnprintf" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xb41574a7, "dm_hold" },
	{ 0x37a0cba, "kfree" },
	{ 0xf1f88a0e, "dm_kcopyd_prepare_callback" },
	{ 0xb04f56ab, "dm_bufio_read" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x601f665f, "dm_io_client_create" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0xe2964344, "__wake_up" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x9dd9df13, "dm_kcopyd_client_create" },
	{ 0x1000e51, "schedule" },
	{ 0x556e59b4, "dm_accept_partial_bio" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x9f984513, "strrchr" },
	{ 0x16e297c3, "bit_wait" },
	{ 0x7f1fd79f, "module_put" },
	{ 0xeca7949e, "dm_bufio_client_destroy" },
	{ 0xfeb343d1, "mempool_alloc_noprof" },
	{ 0x736b97bd, "bio_endio" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x2773c485, "__wake_up_locked" },
	{ 0x54019e15, "dm_suspended" },
	{ 0xa3f8266f, "submit_bio_noacct" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0xb609162e, "kmem_cache_free" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "dm-mod,dm-bufio");

