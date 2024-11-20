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

KSYMTAB_DATA(md_cluster_ops, "", "");
KSYMTAB_FUNC(md_new_event, "_gpl", "");
KSYMTAB_FUNC(md_handle_request, "", "");
KSYMTAB_FUNC(mddev_suspend, "_gpl", "");
KSYMTAB_FUNC(mddev_resume, "_gpl", "");
KSYMTAB_FUNC(md_flush_request, "", "");
KSYMTAB_FUNC(mddev_init, "_gpl", "");
KSYMTAB_FUNC(mddev_destroy, "_gpl", "");
KSYMTAB_FUNC(mddev_unlock, "_gpl", "");
KSYMTAB_FUNC(md_find_rdev_nr_rcu, "_gpl", "");
KSYMTAB_FUNC(md_find_rdev_rcu, "_gpl", "");
KSYMTAB_FUNC(md_rdev_clear, "_gpl", "");
KSYMTAB_FUNC(sync_page_io, "_gpl", "");
KSYMTAB_FUNC(md_check_no_bitmap, "", "");
KSYMTAB_FUNC(md_integrity_register, "", "");
KSYMTAB_FUNC(md_update_sb, "", "");
KSYMTAB_FUNC(md_rdev_init, "_gpl", "");
KSYMTAB_FUNC(md_idle_sync_thread, "_gpl", "");
KSYMTAB_FUNC(md_frozen_sync_thread, "_gpl", "");
KSYMTAB_FUNC(md_unfrozen_sync_thread, "_gpl", "");
KSYMTAB_FUNC(mddev_stack_rdev_limits, "_gpl", "");
KSYMTAB_FUNC(mddev_stack_new_rdev, "_gpl", "");
KSYMTAB_FUNC(mddev_update_io_opt, "_gpl", "");
KSYMTAB_FUNC(md_init_stacking_limits, "_gpl", "");
KSYMTAB_FUNC(md_run, "_gpl", "");
KSYMTAB_FUNC(md_start, "_gpl", "");
KSYMTAB_FUNC(md_stop_writes, "_gpl", "");
KSYMTAB_FUNC(md_stop, "_gpl", "");
KSYMTAB_FUNC(md_set_array_sectors, "", "");
KSYMTAB_FUNC(md_wakeup_thread, "", "");
KSYMTAB_FUNC(md_register_thread, "", "");
KSYMTAB_FUNC(md_unregister_thread, "", "");
KSYMTAB_FUNC(md_error, "", "");
KSYMTAB_FUNC(register_md_personality, "", "");
KSYMTAB_FUNC(unregister_md_personality, "", "");
KSYMTAB_FUNC(register_md_cluster_operations, "", "");
KSYMTAB_FUNC(unregister_md_cluster_operations, "", "");
KSYMTAB_FUNC(md_done_sync, "", "");
KSYMTAB_FUNC(md_write_start, "", "");
KSYMTAB_FUNC(md_write_inc, "", "");
KSYMTAB_FUNC(md_write_end, "", "");
KSYMTAB_FUNC(md_submit_discard_bio, "_gpl", "");
KSYMTAB_FUNC(md_account_bio, "_gpl", "");
KSYMTAB_FUNC(md_free_cloned_bio, "_gpl", "");
KSYMTAB_FUNC(md_allow_write, "_gpl", "");
KSYMTAB_FUNC(md_do_sync, "_gpl", "");
KSYMTAB_FUNC(md_check_recovery, "", "");
KSYMTAB_FUNC(md_reap_sync_thread, "", "");
KSYMTAB_FUNC(md_wait_for_blocked_rdev, "", "");
KSYMTAB_FUNC(md_finish_reshape, "", "");
KSYMTAB_FUNC(rdev_set_badblocks, "_gpl", "");
KSYMTAB_FUNC(rdev_clear_badblocks, "_gpl", "");
KSYMTAB_FUNC(md_reload_sb, "", "");

SYMBOL_CRC(md_cluster_ops, 0x2ede7128, "");
SYMBOL_CRC(md_new_event, 0xe6e6b684, "_gpl");
SYMBOL_CRC(md_handle_request, 0xc37e427d, "");
SYMBOL_CRC(mddev_suspend, 0x2d8cf1e2, "_gpl");
SYMBOL_CRC(mddev_resume, 0xbba572bb, "_gpl");
SYMBOL_CRC(md_flush_request, 0x690a6013, "");
SYMBOL_CRC(mddev_init, 0x119e2e74, "_gpl");
SYMBOL_CRC(mddev_destroy, 0x906bb13d, "_gpl");
SYMBOL_CRC(mddev_unlock, 0x263ca350, "_gpl");
SYMBOL_CRC(md_find_rdev_nr_rcu, 0xd8bf5f39, "_gpl");
SYMBOL_CRC(md_find_rdev_rcu, 0x6995d473, "_gpl");
SYMBOL_CRC(md_rdev_clear, 0xe192570b, "_gpl");
SYMBOL_CRC(sync_page_io, 0x917f1c0f, "_gpl");
SYMBOL_CRC(md_check_no_bitmap, 0xa665aed5, "");
SYMBOL_CRC(md_integrity_register, 0x9fc469ff, "");
SYMBOL_CRC(md_update_sb, 0xd158a86d, "");
SYMBOL_CRC(md_rdev_init, 0xad89cee4, "_gpl");
SYMBOL_CRC(md_idle_sync_thread, 0x2f9a2a20, "_gpl");
SYMBOL_CRC(md_frozen_sync_thread, 0xe08e611b, "_gpl");
SYMBOL_CRC(md_unfrozen_sync_thread, 0x05e2ad54, "_gpl");
SYMBOL_CRC(mddev_stack_rdev_limits, 0x69ad7a8f, "_gpl");
SYMBOL_CRC(mddev_stack_new_rdev, 0x8de301f6, "_gpl");
SYMBOL_CRC(mddev_update_io_opt, 0x1055ffec, "_gpl");
SYMBOL_CRC(md_init_stacking_limits, 0x36370808, "_gpl");
SYMBOL_CRC(md_run, 0x408237bc, "_gpl");
SYMBOL_CRC(md_start, 0xac14e66a, "_gpl");
SYMBOL_CRC(md_stop_writes, 0xba6040f9, "_gpl");
SYMBOL_CRC(md_stop, 0xd4f7ef9b, "_gpl");
SYMBOL_CRC(md_set_array_sectors, 0xff8b936b, "");
SYMBOL_CRC(md_wakeup_thread, 0x7ecfeaa1, "");
SYMBOL_CRC(md_register_thread, 0xeaa2129f, "");
SYMBOL_CRC(md_unregister_thread, 0xa34431e0, "");
SYMBOL_CRC(md_error, 0xc6c5f91e, "");
SYMBOL_CRC(register_md_personality, 0xf9202446, "");
SYMBOL_CRC(unregister_md_personality, 0xe66d1dcb, "");
SYMBOL_CRC(register_md_cluster_operations, 0x3ee37c68, "");
SYMBOL_CRC(unregister_md_cluster_operations, 0x15bafe29, "");
SYMBOL_CRC(md_done_sync, 0x778ca0bb, "");
SYMBOL_CRC(md_write_start, 0x81b57e00, "");
SYMBOL_CRC(md_write_inc, 0x1dd7c247, "");
SYMBOL_CRC(md_write_end, 0x23cf8d8f, "");
SYMBOL_CRC(md_submit_discard_bio, 0xa821b78a, "_gpl");
SYMBOL_CRC(md_account_bio, 0xf533c480, "_gpl");
SYMBOL_CRC(md_free_cloned_bio, 0xa7d08f6f, "_gpl");
SYMBOL_CRC(md_allow_write, 0x2add470b, "_gpl");
SYMBOL_CRC(md_do_sync, 0xe45dc4e5, "_gpl");
SYMBOL_CRC(md_check_recovery, 0x3d808b84, "");
SYMBOL_CRC(md_reap_sync_thread, 0x979430ad, "");
SYMBOL_CRC(md_wait_for_blocked_rdev, 0x8c9f720e, "");
SYMBOL_CRC(md_finish_reshape, 0xb9be6b10, "");
SYMBOL_CRC(rdev_set_badblocks, 0xc688bbb8, "_gpl");
SYMBOL_CRC(rdev_clear_badblocks, 0x9c5c3869, "_gpl");
SYMBOL_CRC(md_reload_sb, 0x90191cc7, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x35792863, "sysfs_break_active_protection" },
	{ 0x3d1a1b7b, "seq_write" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0x94c1bfc3, "__folio_put" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xab3fc466, "remove_proc_entry" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x9a10cdbe, "disk_check_media_change" },
	{ 0x56470118, "__warn_printk" },
	{ 0x377214d3, "seq_printf" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xaedb2a25, "kobject_uevent" },
	{ 0x176bd70f, "__tracepoint_block_bio_remap" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x7bb80e77, "bd_link_disk_holder" },
	{ 0x5717123e, "alloc_pages_noprof" },
	{ 0xb837b08e, "queue_limits_commit_update" },
	{ 0xf943375f, "proc_dointvec" },
	{ 0xf782fb07, "percpu_ref_switch_to_atomic_sync" },
	{ 0x3bed80a1, "file_bdev" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x8c83ed9d, "queue_limits_stack_integrity" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x3e672d5a, "seq_open" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xd6c4bdb7, "badblocks_clear" },
	{ 0x4da4ab1a, "bmap" },
	{ 0x754d539c, "strlen" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x74187392, "badblocks_store" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x9737feb5, "bio_alloc_bioset" },
	{ 0x31f2a14c, "__kvmalloc_node_noprof" },
	{ 0x84502a47, "blk_status_to_errno" },
	{ 0x7410aba2, "strreplace" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0xac859f6f, "submit_bio_wait" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xd0b5f061, "__blkdev_issue_discard" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x7ab30f45, "kobject_put" },
	{ 0x750d357, "set_capacity_and_notify" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x273aff5c, "__SCT__tp_func_block_bio_remap" },
	{ 0xfac73ba8, "set_disk_ro" },
	{ 0xf8cbbf1d, "__blk_alloc_disk" },
	{ 0x1f7fdb27, "try_module_get" },
	{ 0x7eef617b, "alloc_page_buffers" },
	{ 0xc91fdf58, "percpu_ref_is_zero" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xdfccba41, "__bio_add_page" },
	{ 0x9c5bad96, "blk_start_plug" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xe147ba19, "proc_create" },
	{ 0xefc127d1, "bio_split_to_limits" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0xb0e602eb, "memmove" },
	{ 0x7c6eb6d0, "seq_release" },
	{ 0x69e9c1d7, "device_add_disk" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x81a7f541, "percpu_ref_init" },
	{ 0x22475f44, "badblocks_set" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xf346231f, "seq_list_start_head" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xfb48ccc3, "queue_limits_stack_bdev" },
	{ 0x61e1334, "fget" },
	{ 0x34173ca4, "sysfs_unbreak_active_protection" },
	{ 0xe6d0e0b8, "invalidate_mapping_pages" },
	{ 0x7be0f43, "kobject_init" },
	{ 0xb71589f0, "skip_spaces" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x37a0cba, "kfree" },
	{ 0xd16efa42, "badblocks_exit" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0xc520b851, "seq_lseek" },
	{ 0xf95322f4, "kthread_parkme" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x1f6a4ea6, "ack_all_badblocks" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x1ed4d2eb, "percpu_ref_kill_and_confirm" },
	{ 0x16062d10, "kernfs_notify" },
	{ 0x444e842a, "submit_bh" },
	{ 0x79defbe1, "kthread_should_park" },
	{ 0x709b4480, "bio_end_io_acct_remapped" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x16d30c75, "wake_up_process" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0x5a9b373f, "bio_clone_blkg_association" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x3644e880, "bioset_integrity_create" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x80131ca2, "put_disk" },
	{ 0x3a24fb2f, "percpu_ref_resurrect" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xb97ee37b, "badblocks_init" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x1693c4c3, "unregister_sysctl_table" },
	{ 0xbb8685b9, "badblocks_show" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0xb82ac5cf, "sync_blockdev" },
	{ 0xd6d31884, "free_buffer_head" },
	{ 0xa916b694, "strnlen" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x5b05cc9b, "blk_finish_plug" },
	{ 0xc6cbbc89, "capable" },
	{ 0xbf9308e3, "submit_bio" },
	{ 0x7f1fd79f, "module_put" },
	{ 0xf616b605, "bio_start_io_acct" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x5cad8430, "sysfs_create_link" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xc2c5802, "work_busy" },
	{ 0xb35ee0d2, "bioset_exit" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0xbf89fd34, "flush_signals" },
	{ 0x37bf7be3, "percpu_ref_exit" },
	{ 0xeff5e7af, "bio_put" },
	{ 0x736b97bd, "bio_endio" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xad908a6b, "__SCK__tp_func_block_bio_remap" },
	{ 0x37712435, "fput" },
	{ 0xe6217930, "kobject_add" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x7b68bebe, "sysfs_remove_link" },
	{ 0x7283161b, "percpu_ref_switch_to_percpu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xa3f8266f, "submit_bio_noacct" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf7bdaf53, "blk_sync_queue" },
	{ 0x473278e6, "seq_file_path" },
	{ 0x3088fe39, "kernfs_find_and_get_ns" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x5db87f6c, "seq_putc" },
	{ 0xeb692a57, "bio_chain" },
	{ 0x1af267f8, "int_pow" },
	{ 0xe8387361, "__blk_trace_note_message" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x59c98678, "del_gendisk" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa1b7a4fb, "sysfs_create_group" },
	{ 0xb5f4750d, "__put_devmap_managed_folio_refs" },
	{ 0x585258e2, "kthread_stop" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xf7ce1c17, "bdev_file_open_by_dev" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x60b66a68, "blk_set_stacking_limits" },
	{ 0x11089ac7, "_ctype" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xae66f0b2, "bd_unlink_disk_holder" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x3ffd487f, "bio_init" },
	{ 0x3bd45f5c, "register_sysctl_sz" },
	{ 0xfb578fc5, "memset" },
	{ 0x43ec262e, "bio_alloc_clone" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcf4fdd4d, "_atomic_dec_and_lock" },
	{ 0xd80008b1, "invalidate_bdev" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc03f042e, "kthread_create_on_node" },
	{ 0x980d5636, "sysfs_remove_group" },
	{ 0x5c4440b5, "seq_read" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xf24e5dec, "kobject_del" },
	{ 0x8f38347d, "vfs_fsync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0x2213aa1f, "mempool_create_node_noprof" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x22199426, "param_ops_bool" },
	{ 0x94601fc4, "bioset_init" },
	{ 0x52282042, "file_path" },
	{ 0x98a57143, "kernfs_put" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

