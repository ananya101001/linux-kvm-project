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

KSYMTAB_FUNC(fat_search_long, "_gpl", "");
KSYMTAB_FUNC(fat_get_dotdot_entry, "_gpl", "");
KSYMTAB_FUNC(fat_dir_empty, "_gpl", "");
KSYMTAB_FUNC(fat_scan, "_gpl", "");
KSYMTAB_FUNC(fat_remove_entries, "_gpl", "");
KSYMTAB_FUNC(fat_alloc_new_dir, "_gpl", "");
KSYMTAB_FUNC(fat_add_entries, "_gpl", "");
KSYMTAB_FUNC(fat_free_clusters, "_gpl", "");
KSYMTAB_FUNC(fat_getattr, "_gpl", "");
KSYMTAB_FUNC(fat_setattr, "_gpl", "");
KSYMTAB_FUNC(fat_attach, "_gpl", "");
KSYMTAB_FUNC(fat_detach, "_gpl", "");
KSYMTAB_FUNC(fat_build_inode, "_gpl", "");
KSYMTAB_FUNC(fat_reconfigure, "_gpl", "");
KSYMTAB_FUNC(fat_sync_inode, "_gpl", "");
KSYMTAB_DATA(fat_param_spec, "_gpl", "");
KSYMTAB_FUNC(fat_parse_param, "_gpl", "");
KSYMTAB_FUNC(fat_fill_super, "_gpl", "");
KSYMTAB_FUNC(fat_flush_inodes, "_gpl", "");
KSYMTAB_FUNC(fat_init_fs_context, "_gpl", "");
KSYMTAB_FUNC(fat_free_fc, "_gpl", "");
KSYMTAB_FUNC(__fat_fs_error, "_gpl", "");
KSYMTAB_FUNC(fat_time_fat2unix, "_gpl", "");
KSYMTAB_FUNC(fat_time_unix2fat, "_gpl", "");
KSYMTAB_FUNC(fat_truncate_time, "_gpl", "");
KSYMTAB_FUNC(fat_update_time, "_gpl", "");

SYMBOL_CRC(fat_search_long, 0x1d9418a6, "_gpl");
SYMBOL_CRC(fat_get_dotdot_entry, 0x79c15788, "_gpl");
SYMBOL_CRC(fat_dir_empty, 0x42687235, "_gpl");
SYMBOL_CRC(fat_scan, 0xbbfcd124, "_gpl");
SYMBOL_CRC(fat_remove_entries, 0x758672db, "_gpl");
SYMBOL_CRC(fat_alloc_new_dir, 0xdeffaa6f, "_gpl");
SYMBOL_CRC(fat_add_entries, 0xf4e972b7, "_gpl");
SYMBOL_CRC(fat_free_clusters, 0x73d05b3f, "_gpl");
SYMBOL_CRC(fat_getattr, 0x62b068a0, "_gpl");
SYMBOL_CRC(fat_setattr, 0x63929a44, "_gpl");
SYMBOL_CRC(fat_attach, 0xe58109dc, "_gpl");
SYMBOL_CRC(fat_detach, 0x97937c05, "_gpl");
SYMBOL_CRC(fat_build_inode, 0xa24c8873, "_gpl");
SYMBOL_CRC(fat_reconfigure, 0x38b7fdf6, "_gpl");
SYMBOL_CRC(fat_sync_inode, 0xdc908c76, "_gpl");
SYMBOL_CRC(fat_param_spec, 0x3ac1f55c, "_gpl");
SYMBOL_CRC(fat_parse_param, 0x8a6fbd4a, "_gpl");
SYMBOL_CRC(fat_fill_super, 0x7941f35f, "_gpl");
SYMBOL_CRC(fat_flush_inodes, 0x2c350578, "_gpl");
SYMBOL_CRC(fat_init_fs_context, 0x1219c245, "_gpl");
SYMBOL_CRC(fat_free_fc, 0x96c763d1, "_gpl");
SYMBOL_CRC(__fat_fs_error, 0xf8688fbf, "_gpl");
SYMBOL_CRC(fat_time_fat2unix, 0x02abc28b, "_gpl");
SYMBOL_CRC(fat_time_unix2fat, 0x3be0edf0, "_gpl");
SYMBOL_CRC(fat_truncate_time, 0xd6fa0931, "_gpl");
SYMBOL_CRC(fat_update_time, 0x963b319a, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x459bb914, "block_invalidate_folio" },
	{ 0x9556fa50, "__breadahead" },
	{ 0x4c84314, "generic_write_end" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8da1143, "load_nls" },
	{ 0xd771725c, "generic_cont_expand_simple" },
	{ 0x462622ba, "truncate_inode_pages_final" },
	{ 0xd747ff84, "generic_file_mmap" },
	{ 0xcc5aa75b, "sync_mapping_buffers" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x85993e15, "ilookup" },
	{ 0x8a82e996, "invalidate_inode_buffers" },
	{ 0x5b05cc9b, "blk_finish_plug" },
	{ 0x5aeb6c9e, "bdev_getblk" },
	{ 0xc6cbbc89, "capable" },
	{ 0x25a5a92e, "mnt_drop_write_file" },
	{ 0x79f128c, "fs_param_is_gid" },
	{ 0x9db05623, "inode_init_once" },
	{ 0xc81ce80d, "compat_ptr_ioctl" },
	{ 0xeedc6002, "__fsnotify_parent" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0x4bb9a769, "__brelse" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0xf103436a, "generic_file_read_iter" },
	{ 0x9a3478c9, "inode_maybe_inc_iversion" },
	{ 0x774f16ef, "truncate_pagecache" },
	{ 0xf5f82282, "sync_dirty_buffer" },
	{ 0xbe51d261, "setattr_copy" },
	{ 0xf2de5d14, "__wait_on_buffer" },
	{ 0x4852f447, "set_nlink" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x3fbed0e1, "kmem_cache_alloc_lru_noprof" },
	{ 0xb609162e, "kmem_cache_free" },
	{ 0x93605e9a, "vfsgid_in_group_p" },
	{ 0x5a921311, "strncmp" },
	{ 0x15c7d489, "mpage_writepages" },
	{ 0xf1e046cc, "panic" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x9282c7c7, "from_vfsgid" },
	{ 0x99a12688, "write_inode_now" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x81821486, "d_obtain_alias" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xa308c57e, "__bread_gfp" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xa99f1340, "block_dirty_folio" },
	{ 0xa6e25a92, "mpage_read_folio" },
	{ 0xfb578fc5, "memset" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0x33b1aefa, "__insert_inode_hash" },
	{ 0x8d393990, "buffer_migrate_folio" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xc8817ac9, "kmem_cache_alloc_noprof" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x9207278f, "__kmem_cache_create_args" },
	{ 0x9102cff1, "from_kgid_munged" },
	{ 0x668b19a1, "down_read" },
	{ 0x88dd18f, "truncate_setsize" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x333f4f28, "generic_encode_ino32_fh" },
	{ 0xf65a4505, "unlock_buffer" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x2041dcad, "igrab" },
	{ 0x17fde49c, "generic_read_dir" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf06f03c1, "mpage_readahead" },
	{ 0xcf2787c1, "filemap_fdatawait_range" },
	{ 0x3096be16, "names_cachep" },
	{ 0x7919d80, "init_user_ns" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x3d1a1b7b, "seq_write" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x377214d3, "seq_printf" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0x73dc0df6, "__lock_buffer" },
	{ 0xfff5afc, "time64_to_tm" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x572f89c3, "blkdev_issue_flush" },
	{ 0x31f6b9b5, "generic_fh_to_parent" },
	{ 0xcf624eda, "__fs_parse" },
	{ 0x13e1d65f, "filemap_splice_read" },
	{ 0xc0b8681e, "from_kuid_munged" },
	{ 0x6598596f, "__generic_file_fsync" },
	{ 0xd82c6e3c, "d_parent_ino" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x1d576a31, "__mark_inode_dirty" },
	{ 0x3e0f9d5b, "generic_file_llseek" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xee8185bb, "unload_nls" },
	{ 0x53b954a2, "up_read" },
	{ 0x11659f19, "mark_buffer_dirty_inode" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0xd10246fe, "sb_min_blocksize" },
	{ 0x7129e5f8, "hex_asc" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x5408d0fa, "inode_set_ctime_to_ts" },
	{ 0xfd8f8d98, "fs_param_is_uid" },
	{ 0x6c90184e, "kmem_cache_destroy" },
	{ 0xbd566832, "blkdev_issue_discard" },
	{ 0x136bf523, "filemap_fdatawrite" },
	{ 0xc63af0df, "generic_fillattr" },
	{ 0xbe42e01b, "setattr_prepare" },
	{ 0x49994e51, "generic_block_bmap" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x1f2a4302, "sync_blockdev_nowait" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x9adf5c1f, "make_vfsgid" },
	{ 0x9c5bad96, "blk_start_plug" },
	{ 0x533082d3, "clear_inode" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x9190c18c, "generic_fh_to_dentry" },
	{ 0xfbc4f89e, "io_schedule_timeout" },
	{ 0x79d42278, "fs_param_is_string" },
	{ 0xea0af66, "new_inode" },
	{ 0x576dc63b, "mark_buffer_dirty" },
	{ 0xa890f501, "security_inode_setattr" },
	{ 0xbe0ad7be, "__find_get_block" },
	{ 0x13be1388, "filemap_fdatawrite_range" },
	{ 0xa9c85c7a, "inode_needs_sync" },
	{ 0x5a4896a8, "__put_user_2" },
	{ 0xe89b12d5, "__blockdev_direct_IO" },
	{ 0xfd3100c2, "d_make_root" },
	{ 0x749be091, "__bforget" },
	{ 0x4c236f6f, "__x86_indirect_thunk_r15" },
	{ 0x245fa873, "sb_set_blocksize" },
	{ 0xcd864856, "block_truncate_page" },
	{ 0x6ea3e18f, "write_dirty_buffer" },
	{ 0x2b7af004, "sync_filesystem" },
	{ 0xcb3e419, "fsnotify" },
	{ 0x9471ba2, "current_time" },
	{ 0x69acdf38, "memcpy" },
	{ 0xaed23c23, "from_vfsuid" },
	{ 0xd56c24d4, "inode_dio_wait" },
	{ 0x38fbf9b0, "iunique" },
	{ 0x37a0cba, "kfree" },
	{ 0x6a5dbfcb, "cont_write_begin" },
	{ 0x91bf2302, "iput" },
	{ 0xb2410c8a, "fs_param_is_enum" },
	{ 0x552e83f0, "fs_param_is_s32" },
	{ 0x5c2ff471, "iter_file_splice_write" },
	{ 0xb077a018, "fs_param_is_bool" },
	{ 0x21aa85d0, "generic_file_write_iter" },
	{ 0xf38567f3, "sync_inode_metadata" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x97230d48, "make_vfsuid" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5e95b1cd, "current_umask" },
	{ 0x7045dc2c, "fs_param_is_u32" },
	{ 0x376a3ce8, "mnt_want_write_file" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

