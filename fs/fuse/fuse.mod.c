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

KSYMTAB_FUNC(fuse_len_args, "_gpl", "");
KSYMTAB_FUNC(fuse_get_unique, "_gpl", "");
KSYMTAB_DATA(fuse_dev_fiq_ops, "_gpl", "");
KSYMTAB_FUNC(fuse_request_end, "_gpl", "");
KSYMTAB_FUNC(fuse_simple_background, "_gpl", "");
KSYMTAB_FUNC(fuse_abort_conn, "_gpl", "");
KSYMTAB_FUNC(fuse_dev_release, "_gpl", "");
KSYMTAB_DATA(fuse_dev_operations, "_gpl", "");
KSYMTAB_FUNC(fuse_do_open, "_gpl", "");
KSYMTAB_FUNC(fuse_sync_release, "_gpl", "");
KSYMTAB_FUNC(fuse_direct_io, "_gpl", "");
KSYMTAB_FUNC(fuse_file_poll, "_gpl", "");
KSYMTAB_FUNC(fuse_conn_init, "_gpl", "");
KSYMTAB_FUNC(fuse_conn_put, "_gpl", "");
KSYMTAB_FUNC(fuse_conn_get, "_gpl", "");
KSYMTAB_FUNC(fuse_send_init, "_gpl", "");
KSYMTAB_FUNC(fuse_free_conn, "_gpl", "");
KSYMTAB_FUNC(fuse_dev_alloc, "_gpl", "");
KSYMTAB_FUNC(fuse_dev_install, "_gpl", "");
KSYMTAB_FUNC(fuse_dev_alloc_install, "_gpl", "");
KSYMTAB_FUNC(fuse_dev_free, "_gpl", "");
KSYMTAB_FUNC(fuse_init_fs_context_submount, "_gpl", "");
KSYMTAB_FUNC(fuse_fill_super_common, "_gpl", "");
KSYMTAB_FUNC(fuse_mount_remove, "_gpl", "");
KSYMTAB_FUNC(fuse_conn_destroy, "_gpl", "");
KSYMTAB_FUNC(fuse_mount_destroy, "", "");
KSYMTAB_FUNC(fuse_do_ioctl, "_gpl", "");
KSYMTAB_FUNC(fuse_dax_cancel_work, "_gpl", "");

SYMBOL_CRC(fuse_len_args, 0xdd626ee3, "_gpl");
SYMBOL_CRC(fuse_get_unique, 0xb5a28e9d, "_gpl");
SYMBOL_CRC(fuse_dev_fiq_ops, 0xeb5c539e, "_gpl");
SYMBOL_CRC(fuse_request_end, 0x659ca2cc, "_gpl");
SYMBOL_CRC(fuse_simple_background, 0x884a43df, "_gpl");
SYMBOL_CRC(fuse_abort_conn, 0xee97a1d3, "_gpl");
SYMBOL_CRC(fuse_dev_release, 0x0416fabd, "_gpl");
SYMBOL_CRC(fuse_dev_operations, 0xf7309174, "_gpl");
SYMBOL_CRC(fuse_do_open, 0x676dd115, "_gpl");
SYMBOL_CRC(fuse_sync_release, 0x63a7a96c, "_gpl");
SYMBOL_CRC(fuse_direct_io, 0x04fb55bc, "_gpl");
SYMBOL_CRC(fuse_file_poll, 0xe0111838, "_gpl");
SYMBOL_CRC(fuse_conn_init, 0xa649c9b9, "_gpl");
SYMBOL_CRC(fuse_conn_put, 0xba6096b2, "_gpl");
SYMBOL_CRC(fuse_conn_get, 0x9743ad48, "_gpl");
SYMBOL_CRC(fuse_send_init, 0x3be9e41e, "_gpl");
SYMBOL_CRC(fuse_free_conn, 0xedb5ff3d, "_gpl");
SYMBOL_CRC(fuse_dev_alloc, 0x3959c330, "_gpl");
SYMBOL_CRC(fuse_dev_install, 0x1128ef81, "_gpl");
SYMBOL_CRC(fuse_dev_alloc_install, 0x267a4298, "_gpl");
SYMBOL_CRC(fuse_dev_free, 0x3ecfd791, "_gpl");
SYMBOL_CRC(fuse_init_fs_context_submount, 0x77867d2f, "_gpl");
SYMBOL_CRC(fuse_fill_super_common, 0xc532ed08, "_gpl");
SYMBOL_CRC(fuse_mount_remove, 0xf49090de, "_gpl");
SYMBOL_CRC(fuse_conn_destroy, 0x7f0d1c51, "_gpl");
SYMBOL_CRC(fuse_mount_destroy, 0x107f143f, "");
SYMBOL_CRC(fuse_do_ioctl, 0x60dc295b, "_gpl");
SYMBOL_CRC(fuse_dax_cancel_work, 0x570ac86c, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x333aaf65, "folio_mark_dirty" },
	{ 0x5d49aabc, "init_wait_var_entry" },
	{ 0x77b1fa11, "put_pid_ns" },
	{ 0xf7d31de9, "kstrtoul_from_user" },
	{ 0xcaa44421, "setattr_should_drop_suidgid" },
	{ 0x23b4e0d7, "clear_page_rep" },
	{ 0xc6cbbc89, "capable" },
	{ 0x5e332b52, "__var_waitqueue" },
	{ 0xa81ab7f3, "iov_iter_extract_pages" },
	{ 0xf0e7d2ac, "backing_file_write_iter" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x8113740, "copy_page_from_iter_atomic" },
	{ 0x79f128c, "fs_param_is_gid" },
	{ 0x8eee3399, "dax_read_unlock" },
	{ 0x340fd2e9, "fs_context_for_submount" },
	{ 0x9db05623, "inode_init_once" },
	{ 0xbd865a52, "file_write_and_wait_range" },
	{ 0xc81ce80d, "compat_ptr_ioctl" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x78ba3e08, "nosteal_pipe_buf_ops" },
	{ 0x5805e77d, "ilookup5" },
	{ 0xac36cb20, "prepare_creds" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x70ea6033, "inode_nohighmem" },
	{ 0x8b38092, "perf_trace_buf_alloc" },
	{ 0x4c3718b9, "release_pages" },
	{ 0x9cb54e2f, "perf_trace_run_bpf_submit" },
	{ 0x27f8df17, "generic_file_direct_write" },
	{ 0x37712435, "fput" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0xf103436a, "generic_file_read_iter" },
	{ 0x9a3478c9, "inode_maybe_inc_iversion" },
	{ 0x55945a45, "unlock_page" },
	{ 0xcf9ddca4, "inc_node_page_state" },
	{ 0x24c4d105, "thp_get_unmapped_area" },
	{ 0xa07a37f0, "memchr" },
	{ 0x774f16ef, "truncate_pagecache" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x2df0e974, "put_fs_context" },
	{ 0xb5b63711, "fileattr_fill_xflags" },
	{ 0xd96babb4, "interval_tree_iter_next" },
	{ 0x3d17ec5b, "backing_file_splice_read" },
	{ 0x2b84797a, "dec_node_page_state" },
	{ 0x954f099c, "idr_preload" },
	{ 0x1b5b9646, "write_cache_pages" },
	{ 0xe8d2e79a, "file_update_time" },
	{ 0x4852f447, "set_nlink" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3fbed0e1, "kmem_cache_alloc_lru_noprof" },
	{ 0xb609162e, "kmem_cache_free" },
	{ 0x7198a05d, "fget_raw" },
	{ 0x925493f, "clear_page_orig" },
	{ 0x93605e9a, "vfsgid_in_group_p" },
	{ 0x38dd5b75, "from_kgid" },
	{ 0x3403f878, "fasync_helper" },
	{ 0xde6889d3, "trace_event_reg" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x12fe6b1d, "file_remove_privs" },
	{ 0x9084b044, "clear_page_erms" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x9282c7c7, "from_vfsgid" },
	{ 0x99a12688, "write_inode_now" },
	{ 0x4cde963f, "dax_writeback_mapping_range" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x81821486, "d_obtain_alias" },
	{ 0xe9ae8c4e, "file_modified" },
	{ 0xbfc4a2e9, "copy_page_to_iter" },
	{ 0xb5f4750d, "__put_devmap_managed_folio_refs" },
	{ 0x944375db, "_totalram_pages" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x236b5858, "folio_end_read" },
	{ 0x6446259a, "finish_no_open" },
	{ 0x91f44510, "idr_alloc_cyclic" },
	{ 0x67215015, "__folio_start_writeback" },
	{ 0x95a052b1, "bpf_trace_run1" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xb4104491, "kill_litter_super" },
	{ 0xd1405ef8, "folio_end_writeback" },
	{ 0xe1dd4ebb, "folio_alloc_noprof" },
	{ 0x1678131f, "from_kuid" },
	{ 0x5674e3c7, "current_in_userns" },
	{ 0x4418a257, "fc_mount" },
	{ 0xfb578fc5, "memset" },
	{ 0xcdafda4d, "sysfs_remove_mount_point" },
	{ 0xea43f98d, "misc_register" },
	{ 0x2f8c7b64, "unpin_user_page" },
	{ 0xdf93b9d8, "timespec64_to_jiffies" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xc8817ac9, "kmem_cache_alloc_noprof" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x7445bf43, "in_group_or_capable" },
	{ 0xa3951d2b, "make_kgid" },
	{ 0xece784c2, "rb_first" },
	{ 0x49147859, "d_delete" },
	{ 0x9207278f, "__kmem_cache_create_args" },
	{ 0x9102cff1, "from_kgid_munged" },
	{ 0x2a7ede7f, "end_page_writeback" },
	{ 0xe40c37ea, "down_write_trylock" },
	{ 0x131db64a, "system_long_wq" },
	{ 0x59f073a6, "kobject_create_and_add" },
	{ 0x668b19a1, "down_read" },
	{ 0x99434bfd, "wb_writeout_inc" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcc584249, "nonseekable_open" },
	{ 0xc37fbb13, "dax_finish_sync_fault" },
	{ 0x8d18ae29, "copy_page_from_iter" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xfccf06e7, "backing_file_read_iter" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1d40b6f3, "idr_for_each" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x989a5d1b, "noop_direct_IO" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x7230beea, "fdget" },
	{ 0x2041dcad, "igrab" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x17fde49c, "generic_read_dir" },
	{ 0x3c7a51a5, "trace_event_buffer_reserve" },
	{ 0x2c2dc0e9, "d_add" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xe138fb8c, "percpu_counter_add_batch" },
	{ 0xd84d35bd, "dax_read_lock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x22199426, "param_ops_bool" },
	{ 0x7919d80, "init_user_ns" },
	{ 0x78e7b226, "folio_copy" },
	{ 0xb4c8d187, "d_find_alias" },
	{ 0x31fc6378, "invalidate_inode_pages2" },
	{ 0xf734775f, "inode_set_ctime_current" },
	{ 0xf04e6d86, "inc_nlink" },
	{ 0x3d1a1b7b, "seq_write" },
	{ 0x94c1bfc3, "__folio_put" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x7808f932, "get_tree_bdev" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xb19adeb5, "set_anon_super_fc" },
	{ 0x377214d3, "seq_printf" },
	{ 0x7c9adcc2, "dput" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xf865848e, "generic_delete_inode" },
	{ 0x9d3ecb0c, "deactivate_locked_super" },
	{ 0xf2feec94, "touch_atime" },
	{ 0x49712f97, "__percpu_down_read" },
	{ 0x8ab55c4b, "__d_lookup_unhash_wake" },
	{ 0xc6cb32e5, "set_page_dirty_lock" },
	{ 0x79612e8f, "pid_nr_ns" },
	{ 0xe30cd979, "generic_file_open" },
	{ 0xf9775b66, "truncate_inode_pages_range" },
	{ 0x8e9da085, "__put_user_ns" },
	{ 0x5717123e, "alloc_pages_noprof" },
	{ 0x755f876b, "__folio_lock" },
	{ 0x37e62f9e, "filemap_dirty_folio" },
	{ 0x3635b076, "pagecache_get_page" },
	{ 0x72b8410a, "stream_open" },
	{ 0x5cfaa3b8, "rcuwait_wake_up" },
	{ 0xdab5a1eb, "interval_tree_insert" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x2ec6bba0, "errseq_set" },
	{ 0xb8273d0b, "__wake_up_sync" },
	{ 0xda50b005, "add_to_pipe" },
	{ 0xcf624eda, "__fs_parse" },
	{ 0xce431ca9, "dax_layout_busy_page_range" },
	{ 0x13e1d65f, "filemap_splice_read" },
	{ 0x3b1d7649, "posix_acl_to_xattr" },
	{ 0x708eec1, "dget_parent" },
	{ 0x497c15bd, "kill_anon_super" },
	{ 0xc0b8681e, "from_kuid_munged" },
	{ 0xafc08054, "dotdot_name" },
	{ 0xa5e5d428, "iget5_locked" },
	{ 0xe856875d, "security_dentry_init_security" },
	{ 0x91315a8, "filemap_write_and_wait_range" },
	{ 0x43b37800, "get_tree_single" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x754d539c, "strlen" },
	{ 0x6b70c83f, "generic_write_checks" },
	{ 0x54a0e992, "iov_iter_revert" },
	{ 0x561ccc9e, "__remove_inode_hash" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x101feef4, "mntget" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x3d891110, "filemap_fault" },
	{ 0xdcbe2d03, "d_invalidate" },
	{ 0x1d576a31, "__mark_inode_dirty" },
	{ 0x3e0f9d5b, "generic_file_llseek" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xccf69887, "get_free_pages_noprof" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x31f2a14c, "__kvmalloc_node_noprof" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x53b954a2, "up_read" },
	{ 0xb30483ee, "iov_iter_npages" },
	{ 0x9b53e14, "interval_tree_remove" },
	{ 0xff0e49af, "drop_nlink" },
	{ 0x43aef8e1, "fault_in_iov_iter_readable" },
	{ 0x660a4995, "filemap_check_errors" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x5408d0fa, "inode_set_ctime_to_ts" },
	{ 0x847188e8, "krealloc_noprof" },
	{ 0xfd8f8d98, "fs_param_is_uid" },
	{ 0xc101ea8, "bdi_set_max_ratio" },
	{ 0x6c90184e, "kmem_cache_destroy" },
	{ 0x7ab30f45, "kobject_put" },
	{ 0xbc314156, "nop_mnt_idmap" },
	{ 0xf8bb47dc, "super_setup_bdi_name" },
	{ 0xdfbae70, "posix_test_lock" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xff5f62dd, "truncate_inode_pages" },
	{ 0x6a33b90, "noop_backing_dev_info" },
	{ 0xe914e41e, "strcpy" },
	{ 0x1c0a718c, "pipe_lock" },
	{ 0xc63af0df, "generic_fillattr" },
	{ 0x7e55285b, "vfs_fsync_range" },
	{ 0xbe42e01b, "setattr_prepare" },
	{ 0x69591bf6, "filemap_migrate_folio" },
	{ 0xf9ac8e09, "clear_nlink" },
	{ 0xb38f14bd, "file_check_and_advance_wb_err" },
	{ 0x778927fc, "d_alloc_parallel" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x460f1787, "d_instantiate" },
	{ 0x3c185c61, "page_put_link" },
	{ 0xf80d81c2, "misc_deregister" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x9adf5c1f, "make_vfsgid" },
	{ 0x533082d3, "clear_inode" },
	{ 0xa203b1f5, "inode_to_bdi" },
	{ 0xf82d1863, "find_pid_ns" },
	{ 0x20978fb9, "idr_find" },
	{ 0x58962ff3, "invalid_mnt_idmap" },
	{ 0xc3a9ca42, "grab_cache_page_write_begin" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xd5d53a88, "simple_dir_inode_operations" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xdba7f28, "pipe_unlock" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x79d42278, "fs_param_is_string" },
	{ 0xbc109bda, "folio_unlock" },
	{ 0xea0af66, "new_inode" },
	{ 0x4d6af5c8, "filemap_map_pages" },
	{ 0xa6257a2f, "complete" },
	{ 0x144f9830, "dump_page" },
	{ 0xc1cc4ef1, "trace_raw_output_prep" },
	{ 0x25b50825, "forget_all_cached_acls" },
	{ 0x8d8d861d, "init_special_inode" },
	{ 0x9c81d303, "unregister_filesystem" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xdc675393, "task_active_pid_ns" },
	{ 0x632d7496, "iov_iter_single_seg_count" },
	{ 0xb99ebdee, "retire_super" },
	{ 0xca9360b5, "rb_next" },
	{ 0x13be1388, "filemap_fdatawrite_range" },
	{ 0xc5597d14, "__trace_trigger_soft_disabled" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xd1d1d232, "d_alloc_name" },
	{ 0xbdb46cb, "replace_page_cache_folio" },
	{ 0x7b3c5000, "inode_query_iversion" },
	{ 0x1f085485, "iov_iter_advance" },
	{ 0xa23d56ab, "kill_fasync" },
	{ 0xfd3100c2, "d_make_root" },
	{ 0x825be683, "trace_event_printf" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x63972481, "backing_file_splice_write" },
	{ 0x245fa873, "sb_set_blocksize" },
	{ 0x61e1334, "fget" },
	{ 0x234d0a38, "simple_fill_super" },
	{ 0x23967b1, "xas_find" },
	{ 0x2b7af004, "sync_filesystem" },
	{ 0xa7318fd7, "noop_dirty_folio" },
	{ 0xbffb0e02, "sget_fc" },
	{ 0x4e16163e, "param_set_uint" },
	{ 0xdc6b79be, "d_splice_alias" },
	{ 0xcb719a8f, "iov_iter_get_pages2" },
	{ 0xdd3d2e91, "direct_write_fallback" },
	{ 0xaf437a95, "trace_event_raw_init" },
	{ 0x8900d05a, "trace_print_symbols_seq" },
	{ 0x69acdf38, "memcpy" },
	{ 0xaed23c23, "from_vfsuid" },
	{ 0x3c962011, "page_get_link" },
	{ 0x37bfdd7f, "generic_permission" },
	{ 0xbdd4d976, "truncate_pagecache_range" },
	{ 0x37a0cba, "kfree" },
	{ 0x59e36e1, "invalidate_inode_pages2_range" },
	{ 0x8dfdcbd9, "posix_lock_file" },
	{ 0x8d6d8dac, "finish_open" },
	{ 0xc637116b, "dax_iomap_rw" },
	{ 0x91bf2302, "iput" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x44f4d3b, "logfc" },
	{ 0x5c2ff471, "iter_file_splice_write" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xd9fbad50, "init_pid_ns" },
	{ 0x833d7ce6, "dax_iomap_fault" },
	{ 0x44cf8d9b, "iov_iter_init" },
	{ 0xbc3f2dad, "d_lookup" },
	{ 0x9c86b9ab, "fileattr_fill_flags" },
	{ 0x439b09a0, "sysfs_create_mount_point" },
	{ 0x21aa85d0, "generic_file_write_iter" },
	{ 0xe2964344, "__wake_up" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x5d28f4e6, "register_filesystem" },
	{ 0x71ce93f8, "folio_add_lru" },
	{ 0xfaf1e9ef, "folio_clear_dirty_for_io" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xf38567f3, "sync_inode_metadata" },
	{ 0xe50238e7, "simple_empty" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa44a1307, "interval_tree_iter_first" },
	{ 0xc3ff38c2, "down_read_trylock" },
	{ 0x1c0fc10, "vfs_setpos" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x157b43bf, "shrink_dcache_parent" },
	{ 0x97230d48, "make_vfsuid" },
	{ 0xdaff2388, "__put_cred" },
	{ 0xc63e9a6e, "backing_file_open" },
	{ 0x2d609547, "dax_direct_access" },
	{ 0xe6760435, "get_tree_nodev" },
	{ 0xac0021d1, "splice_file_range" },
	{ 0x6d9e9eae, "trace_event_buffer_commit" },
	{ 0x5fc0511b, "simple_inode_init_ts" },
	{ 0x636af5e8, "d_mark_dontcache" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb812bb66, "locks_lock_inode_wait" },
	{ 0x5e95b1cd, "current_umask" },
	{ 0x7045dc2c, "fs_param_is_u32" },
	{ 0xf90161e1, "inode_newsize_ok" },
	{ 0x9e5e7c8d, "d_drop" },
	{ 0x992bd396, "kill_block_super" },
	{ 0x6d6fe8e, "unlock_new_inode" },
	{ 0x122c3a7e, "_printk" },
	{ 0x55fa150f, "bdi_put" },
	{ 0x33006886, "posix_acl_from_xattr" },
	{ 0x1000e51, "schedule" },
	{ 0x311637c4, "param_get_uint" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xc1f0e49d, "make_kuid" },
	{ 0x462622ba, "truncate_inode_pages_final" },
	{ 0x887a9c16, "fs_kobj" },
	{ 0xc80e584f, "__filemap_set_wb_err" },
	{ 0xcd6f031b, "simple_dir_operations" },
	{ 0xd747ff84, "generic_file_mmap" },
	{ 0xa916b694, "strnlen" },
	{ 0x647412ab, "backing_file_mmap" },
	{ 0x4ab26199, "__filemap_get_folio" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x686a1b5, "__free_pages" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");
