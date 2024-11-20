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

KSYMTAB_FUNC(dm_send_uevents, "_gpl", "");
KSYMTAB_FUNC(dm_path_uevent, "_gpl", "");
KSYMTAB_FUNC(dm_report_zones, "_gpl", "");
KSYMTAB_FUNC(dm_audit_log_ti, "_gpl", "");
KSYMTAB_FUNC(dm_audit_log_bio, "_gpl", "");
KSYMTAB_FUNC(dm_per_bio_data, "_gpl", "");
KSYMTAB_FUNC(dm_bio_from_per_bio_data, "_gpl", "");
KSYMTAB_FUNC(dm_bio_get_target_bio_nr, "_gpl", "");
KSYMTAB_FUNC(dm_get_reserved_bio_based_ios, "_gpl", "");
KSYMTAB_FUNC(dm_start_time_ns_from_clone, "_gpl", "");
KSYMTAB_FUNC(dm_set_target_max_io_len, "_gpl", "");
KSYMTAB_FUNC(dm_accept_partial_bio, "_gpl", "");
KSYMTAB_FUNC(dm_submit_bio_remap, "_gpl", "");
KSYMTAB_FUNC(dm_get_md, "_gpl", "");
KSYMTAB_FUNC(dm_hold, "_gpl", "");
KSYMTAB_FUNC(dm_device_name, "_gpl", "");
KSYMTAB_FUNC(dm_put, "_gpl", "");
KSYMTAB_FUNC(dm_internal_suspend_noflush, "_gpl", "");
KSYMTAB_FUNC(dm_internal_resume, "_gpl", "");
KSYMTAB_FUNC(dm_internal_suspend_fast, "_gpl", "");
KSYMTAB_FUNC(dm_internal_resume_fast, "_gpl", "");
KSYMTAB_FUNC(dm_disk, "_gpl", "");
KSYMTAB_FUNC(dm_suspended, "_gpl", "");
KSYMTAB_FUNC(dm_post_suspending, "_gpl", "");
KSYMTAB_FUNC(dm_noflush_suspending, "_gpl", "");
KSYMTAB_FUNC(dm_devt_from_path, "", "");
KSYMTAB_FUNC(dm_get_device, "", "");
KSYMTAB_FUNC(dm_put_device, "", "");
KSYMTAB_FUNC(dm_read_arg, "", "");
KSYMTAB_FUNC(dm_read_arg_group, "", "");
KSYMTAB_FUNC(dm_shift_arg, "", "");
KSYMTAB_FUNC(dm_consume_args, "", "");
KSYMTAB_FUNC(dm_table_set_type, "_gpl", "");
KSYMTAB_FUNC(dm_table_event, "", "");
KSYMTAB_FUNC(dm_table_get_size, "", "");
KSYMTAB_FUNC(dm_table_get_mode, "", "");
KSYMTAB_FUNC(dm_table_get_md, "", "");
KSYMTAB_FUNC(dm_table_device_name, "_gpl", "");
KSYMTAB_FUNC(dm_table_run_md_queue_async, "", "");
KSYMTAB_FUNC(dm_register_target, "", "");
KSYMTAB_FUNC(dm_unregister_target, "", "");
KSYMTAB_FUNC(dm_copy_name_and_uuid, "_gpl", "");
KSYMTAB_FUNC(dm_io_client_create, "", "");
KSYMTAB_FUNC(dm_io_client_destroy, "", "");
KSYMTAB_FUNC(dm_io, "", "");
KSYMTAB_FUNC(dm_kcopyd_copy, "", "");
KSYMTAB_FUNC(dm_kcopyd_zero, "", "");
KSYMTAB_FUNC(dm_kcopyd_prepare_callback, "", "");
KSYMTAB_FUNC(dm_kcopyd_do_callback, "", "");
KSYMTAB_FUNC(dm_kcopyd_client_create, "", "");
KSYMTAB_FUNC(dm_kcopyd_client_destroy, "", "");
KSYMTAB_FUNC(dm_kcopyd_client_flush, "", "");
KSYMTAB_FUNC(dm_mq_kick_requeue_list, "", "");

SYMBOL_CRC(dm_send_uevents, 0xc7e314a2, "_gpl");
SYMBOL_CRC(dm_path_uevent, 0x3ed9d416, "_gpl");
SYMBOL_CRC(dm_report_zones, 0x89f6e56e, "_gpl");
SYMBOL_CRC(dm_audit_log_ti, 0x1469d74b, "_gpl");
SYMBOL_CRC(dm_audit_log_bio, 0x3c18af0b, "_gpl");
SYMBOL_CRC(dm_per_bio_data, 0xd3066c24, "_gpl");
SYMBOL_CRC(dm_bio_from_per_bio_data, 0xe0633887, "_gpl");
SYMBOL_CRC(dm_bio_get_target_bio_nr, 0x386ce2cc, "_gpl");
SYMBOL_CRC(dm_get_reserved_bio_based_ios, 0x38f704de, "_gpl");
SYMBOL_CRC(dm_start_time_ns_from_clone, 0x90601e56, "_gpl");
SYMBOL_CRC(dm_set_target_max_io_len, 0x44a8d9bd, "_gpl");
SYMBOL_CRC(dm_accept_partial_bio, 0x556e59b4, "_gpl");
SYMBOL_CRC(dm_submit_bio_remap, 0x524f4523, "_gpl");
SYMBOL_CRC(dm_get_md, 0x0801190c, "_gpl");
SYMBOL_CRC(dm_hold, 0xb41574a7, "_gpl");
SYMBOL_CRC(dm_device_name, 0x5ed16f4d, "_gpl");
SYMBOL_CRC(dm_put, 0x448a2443, "_gpl");
SYMBOL_CRC(dm_internal_suspend_noflush, 0xd14d3dcc, "_gpl");
SYMBOL_CRC(dm_internal_resume, 0xdbcb3ae9, "_gpl");
SYMBOL_CRC(dm_internal_suspend_fast, 0xbb948960, "_gpl");
SYMBOL_CRC(dm_internal_resume_fast, 0x87512f4a, "_gpl");
SYMBOL_CRC(dm_disk, 0x2ae54251, "_gpl");
SYMBOL_CRC(dm_suspended, 0x54019e15, "_gpl");
SYMBOL_CRC(dm_post_suspending, 0xad5edc75, "_gpl");
SYMBOL_CRC(dm_noflush_suspending, 0xbbb18f32, "_gpl");
SYMBOL_CRC(dm_devt_from_path, 0x23418c7d, "");
SYMBOL_CRC(dm_get_device, 0x8d90836b, "");
SYMBOL_CRC(dm_put_device, 0x06231046, "");
SYMBOL_CRC(dm_read_arg, 0x056bcf7b, "");
SYMBOL_CRC(dm_read_arg_group, 0x39c74235, "");
SYMBOL_CRC(dm_shift_arg, 0x7d27e504, "");
SYMBOL_CRC(dm_consume_args, 0x669c191b, "");
SYMBOL_CRC(dm_table_set_type, 0x0112b672, "_gpl");
SYMBOL_CRC(dm_table_event, 0x401fdfc2, "");
SYMBOL_CRC(dm_table_get_size, 0x2a6973a7, "");
SYMBOL_CRC(dm_table_get_mode, 0x1ad7a19c, "");
SYMBOL_CRC(dm_table_get_md, 0xffb8bc88, "");
SYMBOL_CRC(dm_table_device_name, 0xe0c20991, "_gpl");
SYMBOL_CRC(dm_table_run_md_queue_async, 0x31f9f590, "");
SYMBOL_CRC(dm_register_target, 0xd05056f8, "");
SYMBOL_CRC(dm_unregister_target, 0x2005df16, "");
SYMBOL_CRC(dm_copy_name_and_uuid, 0x1954e114, "_gpl");
SYMBOL_CRC(dm_io_client_create, 0x601f665f, "");
SYMBOL_CRC(dm_io_client_destroy, 0x9e4faeef, "");
SYMBOL_CRC(dm_io, 0x0c04f99e, "");
SYMBOL_CRC(dm_kcopyd_copy, 0x40dd7831, "");
SYMBOL_CRC(dm_kcopyd_zero, 0xdb8367cc, "");
SYMBOL_CRC(dm_kcopyd_prepare_callback, 0xf1f88a0e, "");
SYMBOL_CRC(dm_kcopyd_do_callback, 0xf2a8efae, "");
SYMBOL_CRC(dm_kcopyd_client_create, 0x9dd9df13, "");
SYMBOL_CRC(dm_kcopyd_client_destroy, 0x154c6338, "");
SYMBOL_CRC(dm_kcopyd_client_flush, 0x90006be6, "");
SYMBOL_CRC(dm_mq_kick_requeue_list, 0xf255edea, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xfeb343d1, "mempool_alloc_noprof" },
	{ 0xf818ae8e, "kobject_uevent_env" },
	{ 0xeff5e7af, "bio_put" },
	{ 0x736b97bd, "bio_endio" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9e9c4f24, "set_dax_nomc" },
	{ 0x8fca0669, "init_srcu_struct" },
	{ 0xad908a6b, "__SCK__tp_func_block_bio_remap" },
	{ 0x37712435, "fput" },
	{ 0x57bc19d2, "down_write" },
	{ 0xda7a3e8d, "blk_revalidate_disk_zones" },
	{ 0xce807a25, "up_write" },
	{ 0x448563a, "blk_update_request" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xa07a37f0, "memchr" },
	{ 0xec5668f6, "dax_zero_page_range" },
	{ 0xfcadfcea, "__srcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xd7be87d8, "set_capacity" },
	{ 0xa3f8266f, "submit_bio_noacct" },
	{ 0x2a71977a, "noop_llseek" },
	{ 0x6626afca, "down" },
	{ 0x5f6f1e9e, "dax_get_private" },
	{ 0x954f099c, "idr_preload" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc2e65bb6, "bdev_start_io_acct" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0xb609162e, "kmem_cache_free" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x57b4777a, "dax_remove_host" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xeb692a57, "bio_chain" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0x8b914533, "dax_recovery_write" },
	{ 0xa8612ffc, "bdev_freeze" },
	{ 0x392b1fea, "wait_for_completion_io" },
	{ 0xf2a35f94, "blk_stack_limits" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x9f7d1bf1, "kobject_init_and_add" },
	{ 0x5f765fd5, "zero_fill_bio_iter" },
	{ 0x405da207, "bio_add_page" },
	{ 0x4d31cbe2, "blk_mq_free_tag_set" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x59c98678, "del_gendisk" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xf90f01e7, "cleanup_srcu_struct" },
	{ 0x944375db, "_totalram_pages" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf7ce1c17, "bdev_file_open_by_dev" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x60b66a68, "blk_set_stacking_limits" },
	{ 0x11089ac7, "_ctype" },
	{ 0xb44e18ea, "audit_enabled" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xae66f0b2, "bd_unlink_disk_holder" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x3ffd487f, "bio_init" },
	{ 0xfb578fc5, "memset" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0x43ec262e, "bio_alloc_clone" },
	{ 0xd9e6ec72, "__kmalloc_cache_node_noprof" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0xea43f98d, "misc_register" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xc8817ac9, "kmem_cache_alloc_noprof" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaa7a0230, "blk_insert_cloned_request" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xece784c2, "rb_first" },
	{ 0x9207278f, "__kmem_cache_create_args" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x34c7cdbc, "lookup_bdev" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8780fee0, "audit_log_start" },
	{ 0xcc584249, "nonseekable_open" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe37056dc, "pv_ops" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x16abb535, "blk_mq_complete_request" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xc25d94c1, "pcpu_alloc_noprof" },
	{ 0x28e3c37d, "bio_uninit" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0x22199426, "param_ops_bool" },
	{ 0x94601fc4, "bioset_init" },
	{ 0x4fb3b717, "bio_trim" },
	{ 0x330f6116, "set_dax_synchronous" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0x755abc1, "__srcu_read_unlock" },
	{ 0x8135613, "dax_write_cache" },
	{ 0x176bd70f, "__tracepoint_block_bio_remap" },
	{ 0xe5100f30, "__tracepoint_block_rq_remap" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x7bb80e77, "bd_link_disk_holder" },
	{ 0x3079d629, "blk_mq_start_request" },
	{ 0x5717123e, "alloc_pages_noprof" },
	{ 0xabf53b48, "rep_stos_alternative" },
	{ 0x7242d92, "put_dax" },
	{ 0x3bed80a1, "file_bdev" },
	{ 0x8c83ed9d, "queue_limits_stack_integrity" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0xce7b6ec4, "__SCK__tp_func_block_rq_remap" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xf2d95916, "mempool_init_noprof" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xcc967938, "blk_mark_disk_dead" },
	{ 0x754d539c, "strlen" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x8ac9eb24, "blk_zone_plug_bio" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0x8e66f282, "blk_mq_run_hw_queues" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x349cba85, "strchr" },
	{ 0x86f6b99d, "synchronize_rcu_expedited" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc66d95a2, "queue_limits_set" },
	{ 0x9737feb5, "bio_alloc_bioset" },
	{ 0x31f2a14c, "__kvmalloc_node_noprof" },
	{ 0x53b954a2, "up_read" },
	{ 0x3eec5bd1, "blk_mq_requeue_request" },
	{ 0xd4ec10e6, "BUG_func" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7f357e24, "blkdev_report_zones" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x51aa60d, "bdev_end_io_acct" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x38e46431, "mempool_exit" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x6c90184e, "kmem_cache_destroy" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x7ab30f45, "kobject_put" },
	{ 0x6b2b69f7, "static_key_enable" },
	{ 0xec16a055, "bio_associate_blkg" },
	{ 0x273aff5c, "__SCT__tp_func_block_bio_remap" },
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0xe1dcf64a, "audit_log_format" },
	{ 0xfac73ba8, "set_disk_ro" },
	{ 0xf8cbbf1d, "__blk_alloc_disk" },
	{ 0xe914e41e, "strcpy" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x1f7fdb27, "try_module_get" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xf80d81c2, "misc_deregister" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x9c5bad96, "blk_start_plug" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x20978fb9, "idr_find" },
	{ 0x566b7206, "param_ops_uint" },
	{ 0xde8c1673, "param_ops_ulong" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x2a976d1c, "dax_synchronous" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xefc127d1, "bio_split_to_limits" },
	{ 0x4ec8d88, "vmalloc_to_page" },
	{ 0x69e9c1d7, "device_add_disk" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xd4404350, "__SCT__tp_func_block_split" },
	{ 0xcf02ab71, "__SCT__tp_func_block_rq_remap" },
	{ 0xb3639480, "fs_dax_get_by_bdev" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x9d8bb00e, "set_dax_nocache" },
	{ 0xeff0ca40, "bio_poll" },
	{ 0xca9360b5, "rb_next" },
	{ 0xd9597e9f, "blk_mq_queue_inflight" },
	{ 0x21ea5251, "__bitmap_weight" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xeb37101c, "audit_log_end" },
	{ 0x96848186, "scnprintf" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x7b82b9a1, "idr_replace" },
	{ 0x4c236f6f, "__x86_indirect_thunk_r15" },
	{ 0x94855bba, "dm_kobject_release" },
	{ 0xcf2a6966, "up" },
	{ 0x4db781e6, "blk_rq_prep_clone" },
	{ 0x40e668b1, "blk_mq_unquiesce_queue" },
	{ 0xb71589f0, "skip_spaces" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x919fdaea, "blk_mq_quiesce_queue" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x37a0cba, "kfree" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0xaebbb3cc, "blk_mq_kick_requeue_list" },
	{ 0x138e0957, "dax_write_cache_enabled" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc924fbe5, "blk_rq_unprep_clone" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0xe2964344, "__wake_up" },
	{ 0xd5a61a34, "synchronize_srcu" },
	{ 0xeec70055, "blk_mq_end_request" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xa0112e63, "bdev_thaw" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x9493fc86, "node_states" },
	{ 0x836844e9, "alloc_dax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfb6bbba0, "blk_mq_delay_kick_requeue_list" },
	{ 0x389b64a2, "static_key_count" },
	{ 0xd095e5c, "blk_mq_alloc_tag_set" },
	{ 0x2d609547, "dax_direct_access" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xacf649bf, "audit_log_task_info" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x815f2897, "empty_zero_page" },
	{ 0x3644e880, "bioset_integrity_create" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x80131ca2, "put_disk" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xec8da620, "bio_integrity_trim" },
	{ 0x1000e51, "schedule" },
	{ 0x52b3f4fb, "__fput_sync" },
	{ 0xfad9c827, "kill_dax" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xde38cf26, "__tracepoint_block_split" },
	{ 0xa916b694, "strnlen" },
	{ 0x89ef7e99, "__SCK__tp_func_block_split" },
	{ 0x618911fc, "numa_node" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x686a1b5, "__free_pages" },
	{ 0x16e297c3, "bit_wait" },
	{ 0x5b05cc9b, "blk_finish_plug" },
	{ 0xc6cbbc89, "capable" },
	{ 0xbf9308e3, "submit_bio" },
	{ 0x45aa99c5, "dax_add_host" },
	{ 0x7f1fd79f, "module_put" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x3e78b70f, "blk_mq_init_allocated_queue" },
	{ 0xb35ee0d2, "bioset_exit" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

