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

KSYMTAB_FUNC(register_nfs_version, "_gpl", "");
KSYMTAB_FUNC(unregister_nfs_version, "_gpl", "");
KSYMTAB_FUNC(nfs_alloc_client, "_gpl", "");
KSYMTAB_FUNC(nfs_free_client, "_gpl", "");
KSYMTAB_FUNC(nfs_put_client, "_gpl", "");
KSYMTAB_FUNC(nfs_client_init_is_complete, "_gpl", "");
KSYMTAB_FUNC(nfs_client_init_status, "_gpl", "");
KSYMTAB_FUNC(nfs_wait_client_init_complete, "_gpl", "");
KSYMTAB_FUNC(nfs_get_client, "_gpl", "");
KSYMTAB_FUNC(nfs_mark_client_ready, "_gpl", "");
KSYMTAB_FUNC(nfs_init_timeout_values, "_gpl", "");
KSYMTAB_FUNC(nfs_create_rpc_client, "_gpl", "");
KSYMTAB_FUNC(nfs_init_server_rpcclient, "_gpl", "");
KSYMTAB_FUNC(nfs_init_client, "_gpl", "");
KSYMTAB_FUNC(nfs_probe_server, "_gpl", "");
KSYMTAB_FUNC(nfs_server_copy_userdata, "_gpl", "");
KSYMTAB_FUNC(nfs_server_insert_lists, "_gpl", "");
KSYMTAB_FUNC(nfs_server_remove_lists, "_gpl", "");
KSYMTAB_FUNC(nfs_alloc_server, "_gpl", "");
KSYMTAB_FUNC(nfs_free_server, "_gpl", "");
KSYMTAB_FUNC(nfs_create_server, "_gpl", "");
KSYMTAB_FUNC(nfs_clone_server, "_gpl", "");
KSYMTAB_FUNC(nfs_force_lookup_revalidate, "_gpl", "");
KSYMTAB_FUNC(nfs_set_verifier, "_gpl", "");
KSYMTAB_FUNC(nfs_clear_verifier_delegated, "_gpl", "");
KSYMTAB_DATA(nfs_dentry_operations, "_gpl", "");
KSYMTAB_FUNC(nfs_lookup, "_gpl", "");
KSYMTAB_FUNC(nfs_d_prune_case_insensitive_aliases, "_gpl", "");
KSYMTAB_DATA(nfs4_dentry_operations, "_gpl", "");
KSYMTAB_FUNC(nfs_atomic_open, "_gpl", "");
KSYMTAB_FUNC(nfs_atomic_open_v23, "_gpl", "");
KSYMTAB_FUNC(nfs_add_or_obtain, "_gpl", "");
KSYMTAB_FUNC(nfs_instantiate, "_gpl", "");
KSYMTAB_FUNC(nfs_create, "_gpl", "");
KSYMTAB_FUNC(nfs_mknod, "_gpl", "");
KSYMTAB_FUNC(nfs_mkdir, "_gpl", "");
KSYMTAB_FUNC(nfs_rmdir, "_gpl", "");
KSYMTAB_FUNC(nfs_unlink, "_gpl", "");
KSYMTAB_FUNC(nfs_symlink, "_gpl", "");
KSYMTAB_FUNC(nfs_link, "_gpl", "");
KSYMTAB_FUNC(nfs_rename, "_gpl", "");
KSYMTAB_FUNC(nfs_access_zap_cache, "_gpl", "");
KSYMTAB_FUNC(nfs_access_get_cached, "_gpl", "");
KSYMTAB_FUNC(nfs_access_add_cache, "_gpl", "");
KSYMTAB_FUNC(nfs_access_set_mask, "_gpl", "");
KSYMTAB_FUNC(nfs_may_open, "_gpl", "");
KSYMTAB_FUNC(nfs_permission, "_gpl", "");
KSYMTAB_FUNC(nfs_check_flags, "_gpl", "");
KSYMTAB_FUNC(nfs_file_release, "_gpl", "");
KSYMTAB_FUNC(nfs_file_llseek, "_gpl", "");
KSYMTAB_FUNC(nfs_file_read, "_gpl", "");
KSYMTAB_FUNC(nfs_file_splice_read, "_gpl", "");
KSYMTAB_FUNC(nfs_file_mmap, "_gpl", "");
KSYMTAB_FUNC(nfs_file_fsync, "_gpl", "");
KSYMTAB_FUNC(nfs_file_write, "_gpl", "");
KSYMTAB_FUNC(nfs_lock, "_gpl", "");
KSYMTAB_FUNC(nfs_flock, "_gpl", "");
KSYMTAB_DATA(nfs_file_operations, "_gpl", "");
KSYMTAB_FUNC(nfs_wait_bit_killable, "_gpl", "");
KSYMTAB_FUNC(nfs_drop_inode, "_gpl", "");
KSYMTAB_FUNC(nfs_clear_inode, "_gpl", "");
KSYMTAB_FUNC(nfs_sync_inode, "_gpl", "");
KSYMTAB_FUNC(nfs_check_cache_invalid, "_gpl", "");
KSYMTAB_FUNC(nfs_set_cache_invalid, "_gpl", "");
KSYMTAB_FUNC(nfs_zap_acl_cache, "_gpl", "");
KSYMTAB_FUNC(nfs_invalidate_atime, "_gpl", "");
KSYMTAB_FUNC(nfs4_label_alloc, "_gpl", "");
KSYMTAB_FUNC(nfs_setsecurity, "_gpl", "");
KSYMTAB_FUNC(nfs_fhget, "_gpl", "");
KSYMTAB_FUNC(nfs_update_delegated_mtime, "_gpl", "");
KSYMTAB_FUNC(nfs_setattr, "_gpl", "");
KSYMTAB_FUNC(nfs_setattr_update_inode, "_gpl", "");
KSYMTAB_FUNC(nfs_getattr, "_gpl", "");
KSYMTAB_FUNC(nfs_get_lock_context, "_gpl", "");
KSYMTAB_FUNC(nfs_put_lock_context, "_gpl", "");
KSYMTAB_FUNC(nfs_close_context, "_gpl", "");
KSYMTAB_FUNC(alloc_nfs_open_context, "_gpl", "");
KSYMTAB_FUNC(get_nfs_open_context, "_gpl", "");
KSYMTAB_FUNC(put_nfs_open_context, "_gpl", "");
KSYMTAB_FUNC(nfs_inode_attach_open_context, "_gpl", "");
KSYMTAB_FUNC(nfs_file_set_open_context, "_gpl", "");
KSYMTAB_FUNC(nfs_revalidate_inode, "_gpl", "");
KSYMTAB_FUNC(nfs_inc_attr_generation_counter, "_gpl", "");
KSYMTAB_FUNC(nfs_fattr_init, "_gpl", "");
KSYMTAB_FUNC(nfs_alloc_fattr, "_gpl", "");
KSYMTAB_FUNC(nfs_alloc_fattr_with_label, "_gpl", "");
KSYMTAB_FUNC(nfs_alloc_fhandle, "_gpl", "");
KSYMTAB_FUNC(_nfs_display_fhandle_hash, "_gpl", "");
KSYMTAB_FUNC(_nfs_display_fhandle, "_gpl", "");
KSYMTAB_FUNC(nfs_refresh_inode, "_gpl", "");
KSYMTAB_FUNC(nfs_post_op_update_inode, "_gpl", "");
KSYMTAB_FUNC(nfs_post_op_update_inode_force_wcc, "_gpl", "");
KSYMTAB_FUNC(nfs_alloc_inode, "_gpl", "");
KSYMTAB_FUNC(nfs_free_inode, "_gpl", "");
KSYMTAB_DATA(nfsiod_workqueue, "_gpl", "");
KSYMTAB_DATA(nfs_net_id, "_gpl", "");
KSYMTAB_DATA(nfs_sops, "_gpl", "");
KSYMTAB_FUNC(nfs_sb_active, "_gpl", "");
KSYMTAB_FUNC(nfs_sb_deactive, "_gpl", "");
KSYMTAB_FUNC(nfs_client_for_each_server, "_gpl", "");
KSYMTAB_FUNC(nfs_statfs, "_gpl", "");
KSYMTAB_FUNC(nfs_show_options, "_gpl", "");
KSYMTAB_FUNC(nfs_show_devname, "_gpl", "");
KSYMTAB_FUNC(nfs_show_path, "_gpl", "");
KSYMTAB_FUNC(nfs_show_stats, "_gpl", "");
KSYMTAB_FUNC(nfs_umount_begin, "_gpl", "");
KSYMTAB_FUNC(nfs_auth_info_match, "_gpl", "");
KSYMTAB_FUNC(nfs_try_get_tree, "_gpl", "");
KSYMTAB_FUNC(nfs_reconfigure, "_gpl", "");
KSYMTAB_FUNC(nfs_kill_super, "_gpl", "");
KSYMTAB_DATA(nfs_callback_nr_threads, "_gpl", "");
KSYMTAB_DATA(nfs_callback_set_tcpport, "_gpl", "");
KSYMTAB_DATA(nfs_idmap_cache_timeout, "_gpl", "");
KSYMTAB_DATA(nfs4_disable_idmapping, "_gpl", "");
KSYMTAB_DATA(max_session_slots, "_gpl", "");
KSYMTAB_DATA(max_session_cb_slots, "_gpl", "");
KSYMTAB_DATA(send_implementation_id, "_gpl", "");
KSYMTAB_DATA(nfs4_client_id_uniquifier, "_gpl", "");
KSYMTAB_DATA(recover_lost_locks, "_gpl", "");
KSYMTAB_DATA(nfs_delay_retrans, "_gpl", "");
KSYMTAB_FUNC(nfs_dreq_bytes_left, "_gpl", "");
KSYMTAB_FUNC(nfs_pgio_current_mirror, "_gpl", "");
KSYMTAB_FUNC(nfs_pgheader_init, "_gpl", "");
KSYMTAB_FUNC(nfs_async_iocounter_wait, "_gpl", "");
KSYMTAB_FUNC(nfs_release_request, "_gpl", "");
KSYMTAB_FUNC(nfs_generic_pg_test, "_gpl", "");
KSYMTAB_FUNC(nfs_pgio_header_alloc, "_gpl", "");
KSYMTAB_FUNC(nfs_pgio_header_free, "_gpl", "");
KSYMTAB_FUNC(nfs_initiate_pgio, "_gpl", "");
KSYMTAB_FUNC(nfs_generic_pgio, "_gpl", "");
KSYMTAB_FUNC(nfs_pageio_resend, "_gpl", "");
KSYMTAB_FUNC(nfs_pageio_init_read, "_gpl", "");
KSYMTAB_FUNC(nfs_pageio_reset_read_mds, "_gpl", "");
KSYMTAB_FUNC(nfs_read_alloc_scratch, "_gpl", "");
KSYMTAB_FUNC(nfs_commitdata_alloc, "_gpl", "");
KSYMTAB_FUNC(nfs_commit_free, "_gpl", "");
KSYMTAB_FUNC(nfs_request_add_commit_list_locked, "_gpl", "");
KSYMTAB_FUNC(nfs_request_add_commit_list, "_gpl", "");
KSYMTAB_FUNC(nfs_request_remove_commit_list, "_gpl", "");
KSYMTAB_FUNC(nfs_init_cinfo, "_gpl", "");
KSYMTAB_FUNC(nfs_scan_commit_list, "_gpl", "");
KSYMTAB_FUNC(nfs_pageio_init_write, "_gpl", "");
KSYMTAB_FUNC(nfs_pageio_reset_write_mds, "_gpl", "");
KSYMTAB_FUNC(nfs_writeback_update_inode, "_gpl", "");
KSYMTAB_FUNC(nfs_commitdata_release, "_gpl", "");
KSYMTAB_FUNC(nfs_initiate_commit, "_gpl", "");
KSYMTAB_FUNC(nfs_init_commit, "_gpl", "");
KSYMTAB_FUNC(nfs_retry_commit, "_gpl", "");
KSYMTAB_FUNC(nfs_commit_inode, "_gpl", "");
KSYMTAB_FUNC(nfs_write_inode, "_gpl", "");
KSYMTAB_FUNC(nfs_filemap_write_and_wait_range, "_gpl", "");
KSYMTAB_FUNC(nfs_wb_all, "_gpl", "");
KSYMTAB_FUNC(nfs_path, "_gpl", "");
KSYMTAB_FUNC(nfs_do_submount, "_gpl", "");
KSYMTAB_FUNC(nfs_submount, "_gpl", "");
KSYMTAB_DATA(__tracepoint_nfs_fsync_enter, "_gpl", "");
KSYMTAB_FUNC(__traceiter_nfs_fsync_enter, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_nfs_fsync_enter, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_nfs_fsync_enter, "_gpl", "");
KSYMTAB_DATA(__tracepoint_nfs_fsync_exit, "_gpl", "");
KSYMTAB_FUNC(__traceiter_nfs_fsync_exit, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_nfs_fsync_exit, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_nfs_fsync_exit, "_gpl", "");
KSYMTAB_DATA(__tracepoint_nfs_xdr_status, "_gpl", "");
KSYMTAB_FUNC(__traceiter_nfs_xdr_status, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_nfs_xdr_status, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_nfs_xdr_status, "_gpl", "");
KSYMTAB_DATA(__tracepoint_nfs_xdr_bad_filehandle, "_gpl", "");
KSYMTAB_FUNC(__traceiter_nfs_xdr_bad_filehandle, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_nfs_xdr_bad_filehandle, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_nfs_xdr_bad_filehandle, "_gpl", "");
KSYMTAB_FUNC(nfs_sysfs_link_rpc_client, "_gpl", "");
KSYMTAB_FUNC(nfs_sysfs_add_server, "_gpl", "");
KSYMTAB_DATA(nfs_fs_type, "_gpl", "");
KSYMTAB_DATA(nfs4_fs_type, "_gpl", "");
KSYMTAB_FUNC(nfs_fscache_open_file, "_gpl", "");

SYMBOL_CRC(register_nfs_version, 0x6398160d, "_gpl");
SYMBOL_CRC(unregister_nfs_version, 0xb35799ca, "_gpl");
SYMBOL_CRC(nfs_alloc_client, 0xd9868d44, "_gpl");
SYMBOL_CRC(nfs_free_client, 0xb5e86b0f, "_gpl");
SYMBOL_CRC(nfs_put_client, 0x6fb06c1e, "_gpl");
SYMBOL_CRC(nfs_client_init_is_complete, 0xab1da635, "_gpl");
SYMBOL_CRC(nfs_client_init_status, 0xca52555d, "_gpl");
SYMBOL_CRC(nfs_wait_client_init_complete, 0x6440f7e7, "_gpl");
SYMBOL_CRC(nfs_get_client, 0xb0fb8a3a, "_gpl");
SYMBOL_CRC(nfs_mark_client_ready, 0xe6415376, "_gpl");
SYMBOL_CRC(nfs_init_timeout_values, 0x98b0ece8, "_gpl");
SYMBOL_CRC(nfs_create_rpc_client, 0x00c9d11e, "_gpl");
SYMBOL_CRC(nfs_init_server_rpcclient, 0x9dec0ec5, "_gpl");
SYMBOL_CRC(nfs_init_client, 0x06c7728c, "_gpl");
SYMBOL_CRC(nfs_probe_server, 0xbb88ad03, "_gpl");
SYMBOL_CRC(nfs_server_copy_userdata, 0x94833571, "_gpl");
SYMBOL_CRC(nfs_server_insert_lists, 0x814c9bfa, "_gpl");
SYMBOL_CRC(nfs_server_remove_lists, 0x22440bcd, "_gpl");
SYMBOL_CRC(nfs_alloc_server, 0xd1acb41b, "_gpl");
SYMBOL_CRC(nfs_free_server, 0xc5569b3b, "_gpl");
SYMBOL_CRC(nfs_create_server, 0x955cf1ab, "_gpl");
SYMBOL_CRC(nfs_clone_server, 0xe1b85209, "_gpl");
SYMBOL_CRC(nfs_force_lookup_revalidate, 0xe20796a7, "_gpl");
SYMBOL_CRC(nfs_set_verifier, 0x996da528, "_gpl");
SYMBOL_CRC(nfs_clear_verifier_delegated, 0x98f30a47, "_gpl");
SYMBOL_CRC(nfs_dentry_operations, 0x30670182, "_gpl");
SYMBOL_CRC(nfs_lookup, 0x7413dd21, "_gpl");
SYMBOL_CRC(nfs_d_prune_case_insensitive_aliases, 0x54dd973d, "_gpl");
SYMBOL_CRC(nfs4_dentry_operations, 0xb4b7f1e9, "_gpl");
SYMBOL_CRC(nfs_atomic_open, 0xa892e25b, "_gpl");
SYMBOL_CRC(nfs_atomic_open_v23, 0x2cb484f4, "_gpl");
SYMBOL_CRC(nfs_add_or_obtain, 0xd17115ce, "_gpl");
SYMBOL_CRC(nfs_instantiate, 0x159b281d, "_gpl");
SYMBOL_CRC(nfs_create, 0xa30abbea, "_gpl");
SYMBOL_CRC(nfs_mknod, 0xdd59cde7, "_gpl");
SYMBOL_CRC(nfs_mkdir, 0x3a637e72, "_gpl");
SYMBOL_CRC(nfs_rmdir, 0xdfd2ac06, "_gpl");
SYMBOL_CRC(nfs_unlink, 0xc8a57349, "_gpl");
SYMBOL_CRC(nfs_symlink, 0xc572bb37, "_gpl");
SYMBOL_CRC(nfs_link, 0xc12b2aaf, "_gpl");
SYMBOL_CRC(nfs_rename, 0xa14aa561, "_gpl");
SYMBOL_CRC(nfs_access_zap_cache, 0xbc1b116f, "_gpl");
SYMBOL_CRC(nfs_access_get_cached, 0x1946b34a, "_gpl");
SYMBOL_CRC(nfs_access_add_cache, 0xa88b42c0, "_gpl");
SYMBOL_CRC(nfs_access_set_mask, 0x08e162a8, "_gpl");
SYMBOL_CRC(nfs_may_open, 0x9313547c, "_gpl");
SYMBOL_CRC(nfs_permission, 0x5d5bd066, "_gpl");
SYMBOL_CRC(nfs_check_flags, 0x3f2690f2, "_gpl");
SYMBOL_CRC(nfs_file_release, 0x3891c465, "_gpl");
SYMBOL_CRC(nfs_file_llseek, 0x60d2864b, "_gpl");
SYMBOL_CRC(nfs_file_read, 0xd79e9b45, "_gpl");
SYMBOL_CRC(nfs_file_splice_read, 0x454b0d77, "_gpl");
SYMBOL_CRC(nfs_file_mmap, 0x0c4816c9, "_gpl");
SYMBOL_CRC(nfs_file_fsync, 0x82498658, "_gpl");
SYMBOL_CRC(nfs_file_write, 0xee718b8e, "_gpl");
SYMBOL_CRC(nfs_lock, 0x22f403c6, "_gpl");
SYMBOL_CRC(nfs_flock, 0x0ce7ad09, "_gpl");
SYMBOL_CRC(nfs_file_operations, 0x081e260b, "_gpl");
SYMBOL_CRC(nfs_wait_bit_killable, 0x40739385, "_gpl");
SYMBOL_CRC(nfs_drop_inode, 0x3f49d3fd, "_gpl");
SYMBOL_CRC(nfs_clear_inode, 0x5bb66d91, "_gpl");
SYMBOL_CRC(nfs_sync_inode, 0xda1943bb, "_gpl");
SYMBOL_CRC(nfs_check_cache_invalid, 0xef73ef94, "_gpl");
SYMBOL_CRC(nfs_set_cache_invalid, 0x49c61338, "_gpl");
SYMBOL_CRC(nfs_zap_acl_cache, 0x19114b6d, "_gpl");
SYMBOL_CRC(nfs_invalidate_atime, 0xb4a1f6d8, "_gpl");
SYMBOL_CRC(nfs4_label_alloc, 0x039ad95a, "_gpl");
SYMBOL_CRC(nfs_setsecurity, 0x3efd2589, "_gpl");
SYMBOL_CRC(nfs_fhget, 0xc3f8bebc, "_gpl");
SYMBOL_CRC(nfs_update_delegated_mtime, 0x4445077e, "_gpl");
SYMBOL_CRC(nfs_setattr, 0x8b170ae1, "_gpl");
SYMBOL_CRC(nfs_setattr_update_inode, 0xb44b2bf1, "_gpl");
SYMBOL_CRC(nfs_getattr, 0x76ac6a54, "_gpl");
SYMBOL_CRC(nfs_get_lock_context, 0xce5a2c52, "_gpl");
SYMBOL_CRC(nfs_put_lock_context, 0x79918f9f, "_gpl");
SYMBOL_CRC(nfs_close_context, 0x07f3a3f7, "_gpl");
SYMBOL_CRC(alloc_nfs_open_context, 0x30cfe693, "_gpl");
SYMBOL_CRC(get_nfs_open_context, 0x8342cd17, "_gpl");
SYMBOL_CRC(put_nfs_open_context, 0xa5468a82, "_gpl");
SYMBOL_CRC(nfs_inode_attach_open_context, 0x14fed9e4, "_gpl");
SYMBOL_CRC(nfs_file_set_open_context, 0xd896aea4, "_gpl");
SYMBOL_CRC(nfs_revalidate_inode, 0x906d5835, "_gpl");
SYMBOL_CRC(nfs_inc_attr_generation_counter, 0x584b8482, "_gpl");
SYMBOL_CRC(nfs_fattr_init, 0xa05ca625, "_gpl");
SYMBOL_CRC(nfs_alloc_fattr, 0x832e8f0b, "_gpl");
SYMBOL_CRC(nfs_alloc_fattr_with_label, 0xb9eaf49b, "_gpl");
SYMBOL_CRC(nfs_alloc_fhandle, 0x26884ff7, "_gpl");
SYMBOL_CRC(_nfs_display_fhandle_hash, 0x22d795a8, "_gpl");
SYMBOL_CRC(_nfs_display_fhandle, 0xfc619abd, "_gpl");
SYMBOL_CRC(nfs_refresh_inode, 0xb7634cc2, "_gpl");
SYMBOL_CRC(nfs_post_op_update_inode, 0xd3eb404a, "_gpl");
SYMBOL_CRC(nfs_post_op_update_inode_force_wcc, 0xcaa6d505, "_gpl");
SYMBOL_CRC(nfs_alloc_inode, 0xcbf95da2, "_gpl");
SYMBOL_CRC(nfs_free_inode, 0xe52d4529, "_gpl");
SYMBOL_CRC(nfsiod_workqueue, 0x90a5530f, "_gpl");
SYMBOL_CRC(nfs_net_id, 0xc3a2be67, "_gpl");
SYMBOL_CRC(nfs_sops, 0xff8a2514, "_gpl");
SYMBOL_CRC(nfs_sb_active, 0x45fea411, "_gpl");
SYMBOL_CRC(nfs_sb_deactive, 0x849b99b8, "_gpl");
SYMBOL_CRC(nfs_client_for_each_server, 0xb8cb7db6, "_gpl");
SYMBOL_CRC(nfs_statfs, 0xe68441fc, "_gpl");
SYMBOL_CRC(nfs_show_options, 0x6361e926, "_gpl");
SYMBOL_CRC(nfs_show_devname, 0x0e71d806, "_gpl");
SYMBOL_CRC(nfs_show_path, 0xaef26f44, "_gpl");
SYMBOL_CRC(nfs_show_stats, 0x9a876425, "_gpl");
SYMBOL_CRC(nfs_umount_begin, 0xa94764c8, "_gpl");
SYMBOL_CRC(nfs_auth_info_match, 0x10962bc2, "_gpl");
SYMBOL_CRC(nfs_try_get_tree, 0xe2ada670, "_gpl");
SYMBOL_CRC(nfs_reconfigure, 0xa74d3b08, "_gpl");
SYMBOL_CRC(nfs_kill_super, 0xc90ef9e7, "_gpl");
SYMBOL_CRC(nfs_callback_nr_threads, 0x0294c6a2, "_gpl");
SYMBOL_CRC(nfs_callback_set_tcpport, 0x51892d61, "_gpl");
SYMBOL_CRC(nfs_idmap_cache_timeout, 0x39e05ac3, "_gpl");
SYMBOL_CRC(nfs4_disable_idmapping, 0xdae9b5d7, "_gpl");
SYMBOL_CRC(max_session_slots, 0x91d1fe52, "_gpl");
SYMBOL_CRC(max_session_cb_slots, 0xaafd4acc, "_gpl");
SYMBOL_CRC(send_implementation_id, 0xa8e9e1ae, "_gpl");
SYMBOL_CRC(nfs4_client_id_uniquifier, 0x42f2c81f, "_gpl");
SYMBOL_CRC(recover_lost_locks, 0x4cb9e001, "_gpl");
SYMBOL_CRC(nfs_delay_retrans, 0xefa414fb, "_gpl");
SYMBOL_CRC(nfs_dreq_bytes_left, 0x09ec0cf1, "_gpl");
SYMBOL_CRC(nfs_pgio_current_mirror, 0x958b78a3, "_gpl");
SYMBOL_CRC(nfs_pgheader_init, 0x696e53db, "_gpl");
SYMBOL_CRC(nfs_async_iocounter_wait, 0xf86dfc99, "_gpl");
SYMBOL_CRC(nfs_release_request, 0x8a923f3f, "_gpl");
SYMBOL_CRC(nfs_generic_pg_test, 0x25ea8f7a, "_gpl");
SYMBOL_CRC(nfs_pgio_header_alloc, 0x0127339f, "_gpl");
SYMBOL_CRC(nfs_pgio_header_free, 0xdd183c3f, "_gpl");
SYMBOL_CRC(nfs_initiate_pgio, 0x1cd974f1, "_gpl");
SYMBOL_CRC(nfs_generic_pgio, 0x13a5f0af, "_gpl");
SYMBOL_CRC(nfs_pageio_resend, 0x67296cdd, "_gpl");
SYMBOL_CRC(nfs_pageio_init_read, 0x20f40ba0, "_gpl");
SYMBOL_CRC(nfs_pageio_reset_read_mds, 0x55547d3a, "_gpl");
SYMBOL_CRC(nfs_read_alloc_scratch, 0x621a0966, "_gpl");
SYMBOL_CRC(nfs_commitdata_alloc, 0x87c5b00d, "_gpl");
SYMBOL_CRC(nfs_commit_free, 0x88cfc91b, "_gpl");
SYMBOL_CRC(nfs_request_add_commit_list_locked, 0xcdfdcb5f, "_gpl");
SYMBOL_CRC(nfs_request_add_commit_list, 0xc4418040, "_gpl");
SYMBOL_CRC(nfs_request_remove_commit_list, 0xa79bbf28, "_gpl");
SYMBOL_CRC(nfs_init_cinfo, 0x2f5b847b, "_gpl");
SYMBOL_CRC(nfs_scan_commit_list, 0xc27b0612, "_gpl");
SYMBOL_CRC(nfs_pageio_init_write, 0x10fa022c, "_gpl");
SYMBOL_CRC(nfs_pageio_reset_write_mds, 0x728e2f71, "_gpl");
SYMBOL_CRC(nfs_writeback_update_inode, 0x40e13749, "_gpl");
SYMBOL_CRC(nfs_commitdata_release, 0x0e3b4831, "_gpl");
SYMBOL_CRC(nfs_initiate_commit, 0x5d59f1d5, "_gpl");
SYMBOL_CRC(nfs_init_commit, 0x3fe493c3, "_gpl");
SYMBOL_CRC(nfs_retry_commit, 0x267d790c, "_gpl");
SYMBOL_CRC(nfs_commit_inode, 0x03cacb9d, "_gpl");
SYMBOL_CRC(nfs_write_inode, 0xfecff0e6, "_gpl");
SYMBOL_CRC(nfs_filemap_write_and_wait_range, 0x72000b4f, "_gpl");
SYMBOL_CRC(nfs_wb_all, 0x4d22ebd2, "_gpl");
SYMBOL_CRC(nfs_path, 0x715ab126, "_gpl");
SYMBOL_CRC(nfs_do_submount, 0x3d98f6ca, "_gpl");
SYMBOL_CRC(nfs_submount, 0x46e88a56, "_gpl");
SYMBOL_CRC(__tracepoint_nfs_fsync_enter, 0xa2a37983, "_gpl");
SYMBOL_CRC(__traceiter_nfs_fsync_enter, 0xfdb4fb26, "_gpl");
SYMBOL_CRC(__SCK__tp_func_nfs_fsync_enter, 0x3f0b0fd4, "_gpl");
SYMBOL_CRC(__SCT__tp_func_nfs_fsync_enter, 0xfd3c0de6, "_gpl");
SYMBOL_CRC(__tracepoint_nfs_fsync_exit, 0x7c52aa8d, "_gpl");
SYMBOL_CRC(__traceiter_nfs_fsync_exit, 0x58fec36c, "_gpl");
SYMBOL_CRC(__SCK__tp_func_nfs_fsync_exit, 0x06535208, "_gpl");
SYMBOL_CRC(__SCT__tp_func_nfs_fsync_exit, 0x9d919c44, "_gpl");
SYMBOL_CRC(__tracepoint_nfs_xdr_status, 0x610cae7f, "_gpl");
SYMBOL_CRC(__traceiter_nfs_xdr_status, 0xd3689c32, "_gpl");
SYMBOL_CRC(__SCK__tp_func_nfs_xdr_status, 0x1b0d56fa, "_gpl");
SYMBOL_CRC(__SCT__tp_func_nfs_xdr_status, 0xfeb42418, "_gpl");
SYMBOL_CRC(__tracepoint_nfs_xdr_bad_filehandle, 0x93f9a7ef, "_gpl");
SYMBOL_CRC(__traceiter_nfs_xdr_bad_filehandle, 0xfba0cff8, "_gpl");
SYMBOL_CRC(__SCK__tp_func_nfs_xdr_bad_filehandle, 0xa78d7324, "_gpl");
SYMBOL_CRC(__SCT__tp_func_nfs_xdr_bad_filehandle, 0x37239e6d, "_gpl");
SYMBOL_CRC(nfs_sysfs_link_rpc_client, 0xb92a249b, "_gpl");
SYMBOL_CRC(nfs_sysfs_add_server, 0x50b262dd, "_gpl");
SYMBOL_CRC(nfs_fs_type, 0xdffc3a45, "_gpl");
SYMBOL_CRC(nfs4_fs_type, 0x07c6c7dc, "_gpl");
SYMBOL_CRC(nfs_fscache_open_file, 0x559da56e, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd9306056, "add_swap_extent" },
	{ 0x7045dc2c, "fs_param_is_u32" },
	{ 0xf90161e1, "inode_newsize_ok" },
	{ 0x9e5e7c8d, "d_drop" },
	{ 0x11a20831, "deactivate_super" },
	{ 0x6d6fe8e, "unlock_new_inode" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0x90737177, "security_sb_mnt_opts_compat" },
	{ 0x311637c4, "param_get_uint" },
	{ 0x71a6e90c, "vfs_parse_fs_string" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x1693c4c3, "unregister_sysctl_table" },
	{ 0xc1f0e49d, "make_kuid" },
	{ 0x462622ba, "truncate_inode_pages_final" },
	{ 0x9231da96, "d_alloc" },
	{ 0x887a9c16, "fs_kobj" },
	{ 0xce38b843, "net_ns_type_operations" },
	{ 0xc80e584f, "__filemap_set_wb_err" },
	{ 0xd747ff84, "generic_file_mmap" },
	{ 0xa916b694, "strnlen" },
	{ 0x2b8af2d, "generic_perform_write" },
	{ 0x2c3368b2, "shrinker_register" },
	{ 0x4ab26199, "__filemap_get_folio" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0xb4808666, "simple_nosetlease" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x5d49aabc, "init_wait_var_entry" },
	{ 0x16e297c3, "bit_wait" },
	{ 0x7f1fd79f, "module_put" },
	{ 0x5e332b52, "__var_waitqueue" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xbf515c0a, "rpc_setbufsize" },
	{ 0x340fd2e9, "fs_context_for_submount" },
	{ 0x9db05623, "inode_init_once" },
	{ 0x54b272a1, "folio_wait_private_2" },
	{ 0xbd865a52, "file_write_and_wait_range" },
	{ 0x769f6e64, "errseq_check" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x743e14ea, "__fscache_relinquish_volume" },
	{ 0x58e3306d, "bit_wait_io" },
	{ 0xf30343dd, "seq_escape_mem" },
	{ 0x5805e77d, "ilookup5" },
	{ 0xfeb343d1, "mempool_alloc_noprof" },
	{ 0x573a41c, "generic_parse_monolithic" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x70ea6033, "inode_nohighmem" },
	{ 0x8b38092, "perf_trace_buf_alloc" },
	{ 0x9cb54e2f, "perf_trace_run_bpf_submit" },
	{ 0xded36f57, "security_d_instantiate" },
	{ 0x57bc19d2, "down_write" },
	{ 0x41482d8b, "strndup_user" },
	{ 0xce807a25, "up_write" },
	{ 0xf103436a, "generic_file_read_iter" },
	{ 0x76866d39, "rpc_clone_client_set_auth" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xa07a37f0, "memchr" },
	{ 0x774f16ef, "truncate_pagecache" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x2df0e974, "put_fs_context" },
	{ 0x442bf7, "rpc_peeraddr2str" },
	{ 0xb3f548ad, "kmemdup_nul" },
	{ 0xbd9956b3, "kobj_sysfs_ops" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0x2ee80b5f, "bpf_trace_run5" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x1b5b9646, "write_cache_pages" },
	{ 0x4852f447, "set_nlink" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3fbed0e1, "kmem_cache_alloc_lru_noprof" },
	{ 0xb609162e, "kmem_cache_free" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x5c8293c9, "rpc_max_payload" },
	{ 0x82d79b51, "sysctl_vfs_cache_pressure" },
	{ 0x4e2244ab, "d_move" },
	{ 0x5db87f6c, "seq_putc" },
	{ 0xa8c8ff12, "rpc_proc_unregister" },
	{ 0xde6889d3, "trace_event_reg" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x5174ced1, "vfs_create_mount" },
	{ 0x64db9a5, "mark_mounts_for_expiry" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0xf059624, "folio_wait_writeback" },
	{ 0xffb7c514, "ida_free" },
	{ 0x9e733e50, "nlmclnt_rpc_clnt" },
	{ 0x2e03aeaf, "rpc_clnt_swap_activate" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x3f9a2b0b, "rpcauth_get_gssinfo" },
	{ 0x9f7d1bf1, "kobject_init_and_add" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x99a12688, "write_inode_now" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x81821486, "d_obtain_alias" },
	{ 0xb5f4750d, "__put_devmap_managed_folio_refs" },
	{ 0x944375db, "_totalram_pages" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x236b5858, "folio_end_read" },
	{ 0x20463df4, "wait_for_completion_killable" },
	{ 0xb1d1fcd7, "rpc_create" },
	{ 0x6446259a, "finish_no_open" },
	{ 0xf8f61ebc, "wake_up_var" },
	{ 0x67215015, "__folio_start_writeback" },
	{ 0xecf76b5f, "d_obtain_root" },
	{ 0x95a052b1, "bpf_trace_run1" },
	{ 0x89864828, "param_ops_short" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xd1405ef8, "folio_end_writeback" },
	{ 0xe1dd4ebb, "folio_alloc_noprof" },
	{ 0xb2e8dc61, "rpc_call_sync" },
	{ 0x241cd204, "proc_mkdir" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x8a0f510d, "rpc_put_task_async" },
	{ 0x279ed4c, "unregister_pernet_subsys" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xcfb2d458, "xdr_init_decode_pages" },
	{ 0x3bd45f5c, "register_sysctl_sz" },
	{ 0xb5f8eb23, "netfs_read_subreq_terminated" },
	{ 0xfb578fc5, "memset" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x86d52ba5, "lookup_constant" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xc8817ac9, "kmem_cache_alloc_noprof" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x812c3db8, "rpc_exit" },
	{ 0xa3951d2b, "make_kgid" },
	{ 0xece784c2, "rb_first" },
	{ 0x49147859, "d_delete" },
	{ 0x9207278f, "__kmem_cache_create_args" },
	{ 0x19a55fde, "param_ops_string" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xb3687850, "out_of_line_wait_on_bit_lock" },
	{ 0xfdd192f8, "nfs_ssc_unregister" },
	{ 0xc04e96c6, "rpc_killall_tasks" },
	{ 0x668b19a1, "down_read" },
	{ 0x24d2973b, "xdr_reserve_space" },
	{ 0x7fe32873, "rb_replace_node" },
	{ 0x4841bdee, "strnchr" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5f9c76ec, "iov_iter_get_pages_alloc2" },
	{ 0x38ac7e2c, "set_page_dirty" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xd8bb697, "bpf_trace_run3" },
	{ 0x92104429, "__put_net" },
	{ 0x94c62eb0, "trace_print_flags_seq" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x5dfaf3cf, "netfs_read_folio" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0xc25d94c1, "pcpu_alloc_noprof" },
	{ 0x17fde49c, "generic_read_dir" },
	{ 0xf24e5dec, "kobject_del" },
	{ 0x3c7a51a5, "trace_event_buffer_reserve" },
	{ 0x2c2dc0e9, "d_add" },
	{ 0xe6fa06a2, "rename_lock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xcf2787c1, "filemap_fdatawait_range" },
	{ 0x2213aa1f, "mempool_create_node_noprof" },
	{ 0xe138fb8c, "percpu_counter_add_batch" },
	{ 0x22199426, "param_ops_bool" },
	{ 0x5f4a905c, "groups_free" },
	{ 0xd5a0f4e5, "security_inode_notifysecctx" },
	{ 0xb5b176d1, "nfs_ssc_register" },
	{ 0x7919d80, "init_user_ns" },
	{ 0x8fa25c24, "xa_find" },
	{ 0x31fc6378, "invalidate_inode_pages2" },
	{ 0x3d1a1b7b, "seq_write" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0x94c1bfc3, "__folio_put" },
	{ 0x356b9af6, "kobject_set_name" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x56470118, "__warn_printk" },
	{ 0x377214d3, "seq_printf" },
	{ 0x7c9adcc2, "dput" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0x101529e2, "rpc_init_wait_queue" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x9d3ecb0c, "deactivate_locked_super" },
	{ 0x3dd61637, "put_rpccred" },
	{ 0x49712f97, "__percpu_down_read" },
	{ 0x8ab55c4b, "__d_lookup_unhash_wake" },
	{ 0x1e3f9e60, "rpc_clnt_swap_deactivate" },
	{ 0xaedb2a25, "kobject_uevent" },
	{ 0xce58a905, "__fscache_invalidate" },
	{ 0xcc2b520b, "folio_mapping" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x18888d00, "downgrade_write" },
	{ 0x5717123e, "alloc_pages_noprof" },
	{ 0x8811420, "cred_fscmp" },
	{ 0x755f876b, "__folio_lock" },
	{ 0x37e62f9e, "filemap_dirty_folio" },
	{ 0x3635b076, "pagecache_get_page" },
	{ 0x9d5fa7df, "is_bad_inode" },
	{ 0xf943375f, "proc_dointvec" },
	{ 0xc09b03f8, "__fscache_use_cookie" },
	{ 0x5cfaa3b8, "rcuwait_wake_up" },
	{ 0xda0847c1, "_proc_mkdir" },
	{ 0x70dc4e23, "node_data" },
	{ 0x2ec6bba0, "errseq_set" },
	{ 0x7810aefc, "rpc_clnt_xprt_switch_has_addr" },
	{ 0xcf624eda, "__fs_parse" },
	{ 0xfaef44a9, "sysfs_create_link_nowarn" },
	{ 0x13e1d65f, "filemap_splice_read" },
	{ 0x708eec1, "dget_parent" },
	{ 0x3b3003a5, "nlmclnt_init" },
	{  0xfeccb, "__seq_puts" },
	{ 0x497c15bd, "kill_anon_super" },
	{ 0xdf36914b, "xa_find_after" },
	{ 0xa5e5d428, "iget5_locked" },
	{ 0x91315a8, "filemap_write_and_wait_range" },
	{ 0xafd7b2b0, "kset_register" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x1132462d, "nlmclnt_done" },
	{ 0x754d539c, "strlen" },
	{ 0xe3377480, "proc_symlink" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0x5e06bc5c, "refcount_dec_and_lock" },
	{ 0x54a0e992, "iov_iter_revert" },
	{ 0x6b70c83f, "generic_write_checks" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x101feef4, "mntget" },
	{ 0x4d638296, "setattr_should_drop_sgid" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x349cba85, "strchr" },
	{ 0x3d891110, "filemap_fault" },
	{ 0xdcbe2d03, "d_invalidate" },
	{ 0x1d576a31, "__mark_inode_dirty" },
	{ 0x3e0f9d5b, "generic_file_llseek" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xccf69887, "get_free_pages_noprof" },
	{ 0xd45b36ea, "folio_wait_private_2_killable" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0xaf5bf6ef, "nfs_debug" },
	{ 0x53b954a2, "up_read" },
	{ 0x57f6a5f0, "rpc_wait_for_completion_task" },
	{ 0x60966255, "set_anon_super" },
	{ 0xff0e49af, "drop_nlink" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x5408d0fa, "inode_set_ctime_to_ts" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x6c90184e, "kmem_cache_destroy" },
	{ 0xf8c24b26, "__fscache_acquire_cookie" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7ab30f45, "kobject_put" },
	{ 0xec59a5ab, "vfs_get_tree" },
	{ 0xbc314156, "nop_mnt_idmap" },
	{ 0x5da1deb1, "rpc_put_task" },
	{ 0xf8bb47dc, "super_setup_bdi_name" },
	{ 0xdfbae70, "posix_test_lock" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x813a28e, "inode_update_timestamps" },
	{ 0x136bf523, "filemap_fdatawrite" },
	{ 0xc63af0df, "generic_fillattr" },
	{ 0x7e55285b, "vfs_fsync_range" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x8cfdcc81, "shrinker_alloc" },
	{ 0xf9ac8e09, "clear_nlink" },
	{ 0xb38f14bd, "file_check_and_advance_wb_err" },
	{ 0x1f7fdb27, "try_module_get" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x778927fc, "d_alloc_parallel" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x3c185c61, "page_put_link" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x533082d3, "clear_inode" },
	{ 0xa203b1f5, "inode_to_bdi" },
	{ 0xb6671de9, "bpf_trace_run4" },
	{ 0x7b7125c5, "__fscache_acquire_volume" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xde8c1673, "param_ops_ulong" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xac4038d6, "proc_dointvec_jiffies" },
	{ 0xb0471519, "rpc_proc_register" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc62c42cf, "sysfs_create_file_ns" },
	{ 0xd9ec1342, "rpc_shutdown_client" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x79d42278, "fs_param_is_string" },
	{ 0xbc109bda, "folio_unlock" },
	{ 0x20282513, "mnt_set_expiry" },
	{ 0x1c989125, "param_ops_ushort" },
	{ 0x7e9be7cc, "lookup_one_len" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0xe95b5b7a, "rpc_clnt_show_stats" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0x4d6af5c8, "filemap_map_pages" },
	{ 0xb8bd5570, "xdr_inline_decode" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xc1cc4ef1, "trace_raw_output_prep" },
	{ 0xd361159d, "kobject_rename" },
	{ 0xf553faca, "security_sb_set_mnt_opts" },
	{ 0x8d8d861d, "init_special_inode" },
	{ 0x9c81d303, "unregister_filesystem" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xf346231f, "seq_list_start_head" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x5d920439, "generic_error_remove_folio" },
	{ 0xc5597d14, "__trace_trigger_soft_disabled" },
	{ 0x13be1388, "filemap_fdatawrite_range" },
	{ 0xb896ef53, "folio_wait_bit_killable" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xbc773afc, "rpc_wake_up" },
	{ 0xdd691402, "xprt_find_transport_ident" },
	{ 0xfd3100c2, "d_make_root" },
	{ 0x825be683, "trace_event_printf" },
	{ 0x96848186, "scnprintf" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x2b7af004, "sync_filesystem" },
	{ 0xb0d059e4, "__fscache_unuse_cookie" },
	{ 0x3009b288, "folio_redirty_for_writepage" },
	{ 0xbffb0e02, "sget_fc" },
	{ 0xdc6b79be, "d_splice_alias" },
	{ 0xaf437a95, "trace_event_raw_init" },
	{ 0x8900d05a, "trace_print_symbols_seq" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8b910be2, "errseq_sample" },
	{ 0x8da3b374, "unmap_mapping_range" },
	{ 0x427fecb, "ihold" },
	{ 0xd56c24d4, "inode_dio_wait" },
	{ 0x37bfdd7f, "generic_permission" },
	{ 0x37a0cba, "kfree" },
	{ 0x59e36e1, "invalidate_inode_pages2_range" },
	{ 0xbe5aef23, "read_cache_page" },
	{ 0x8d6d8dac, "finish_open" },
	{ 0x91bf2302, "iput" },
	{ 0xb4fd855b, "kset_unregister" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0xf409c8ea, "security_sb_clone_mnt_opts" },
	{ 0xb2410c8a, "fs_param_is_enum" },
	{ 0x44f4d3b, "logfc" },
	{ 0x5c2ff471, "iter_file_splice_write" },
	{ 0xea5f29ae, "rpc_pton" },
	{ 0x2104316c, "mod_node_page_state" },
	{ 0xfa2747c7, "rpc_wake_up_queued_task" },
	{ 0xcf8e538f, "bpf_trace_run2" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0xa7ae0692, "remove_proc_subtree" },
	{ 0x13704927, "rpc_restart_call_prepare" },
	{ 0xbc3f2dad, "d_lookup" },
	{ 0xe2964344, "__wake_up" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xe893d918, "__module_get" },
	{ 0x91ac3e13, "__fscache_relinquish_cookie" },
	{ 0x5d28f4e6, "register_filesystem" },
	{ 0xe5919cb1, "xdr_encode_opaque" },
	{ 0xfaf1e9ef, "folio_clear_dirty_for_io" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x5e651d9f, "trace_print_hex_seq" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x3f8dafcc, "filemap_add_folio" },
	{ 0xbd77f84f, "rpc_sleep_on" },
	{ 0xa4eaed62, "rpc_run_task" },
	{ 0xe7d75e66, "netfs_readahead" },
	{ 0x861b6aec, "proc_create_net_data" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xf42f3661, "d_prune_aliases" },
	{ 0xdaff2388, "__put_cred" },
	{ 0x20548812, "register_pernet_subsys" },
	{ 0x5d3a1f21, "rpc_cancel_tasks" },
	{ 0xacb0f234, "shrinker_free" },
	{ 0x6d9e9eae, "trace_event_buffer_commit" },
	{ 0xb678366f, "int_sqrt" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x6f5fdb94, "migrate_folio" },
	{ 0xb812bb66, "locks_lock_inode_wait" },
	{ 0x5e95b1cd, "current_umask" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "sunrpc,netfs,lockd");

