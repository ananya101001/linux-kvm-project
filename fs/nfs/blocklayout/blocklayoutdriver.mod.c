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
	{ 0x6a68e63d, "__SCK__tp_func_bl_pr_key_reg" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x895e92f7, "rpc_destroy_pipe_data" },
	{ 0x686a1b5, "__free_pages" },
	{ 0x387e1639, "rpc_pipefs_notifier_register" },
	{ 0x5b05cc9b, "blk_finish_plug" },
	{ 0xbf9308e3, "submit_bio" },
	{ 0x92920dae, "rpc_pipe_generic_upcall" },
	{ 0x7f1fd79f, "module_put" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0xeff5e7af, "bio_put" },
	{ 0x7b7e1c16, "nfs4_put_deviceid_node" },
	{ 0x37712435, "fput" },
	{ 0xf0a5b199, "__SCT__tp_func_bl_pr_key_reg" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xeb59b14b, "rpc_d_lookup_sb" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x728e2f71, "nfs_pageio_reset_write_mds" },
	{ 0xf7b8b0b8, "__tracepoint_bl_pr_key_reg" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x4d8b308c, "nfs4_find_get_deviceid" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x405da207, "bio_add_page" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xb5f4750d, "__put_devmap_managed_folio_refs" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf7ce1c17, "bdev_file_open_by_dev" },
	{ 0x279ed4c, "unregister_pernet_subsys" },
	{ 0x741f340e, "rpc_queue_upcall" },
	{ 0xcfb2d458, "xdr_init_decode_pages" },
	{ 0xfb578fc5, "memset" },
	{ 0xd17a67c6, "pnfs_generic_sync" },
	{ 0x2c4f2e35, "__vmalloc_noprof" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x88fbd157, "pnfs_generic_pg_cleanup" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x1891fa27, "rpc_get_sb_net" },
	{ 0x8841cd36, "__SCK__tp_func_bl_pr_key_reg_err" },
	{ 0xece784c2, "rb_first" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x85d911cb, "__SCK__tp_func_bl_pr_key_unreg_err" },
	{ 0x30e929e0, "pnfs_generic_pg_test" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe1bc35e8, "__SCT__tp_func_bl_pr_key_unreg_err" },
	{ 0x3571f3db, "__tracepoint_bl_pr_key_reg_err" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa7a54fb4, "rpc_mkpipe_dentry" },
	{ 0x27076adf, "rpc_mkpipe_data" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x999e8297, "vfree" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x88daff1, "nfs4_mark_deviceid_unavailable" },
	{ 0x94c1bfc3, "__folio_put" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xc3a2be67, "nfs_net_id" },
	{ 0x6d58bda3, "nfs4_delete_deviceid" },
	{ 0x56470118, "__warn_printk" },
	{ 0x7c9adcc2, "dput" },
	{ 0x5033ae60, "pnfs_error_mark_layout_for_return" },
	{ 0xea488e25, "pnfs_ld_write_done" },
	{ 0x5717123e, "alloc_pages_noprof" },
	{ 0xcc4d0ea3, "rpc_unlink" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x3bed80a1, "file_bdev" },
	{ 0x9ec0cf1, "nfs_dreq_bytes_left" },
	{ 0x8c943e3, "__SCK__tp_func_bl_pr_key_unreg" },
	{ 0xaf683cf1, "__tracepoint_bl_pr_key_unreg_err" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x9737feb5, "bio_alloc_bioset" },
	{ 0xaf5bf6ef, "nfs_debug" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xed0b2833, "fs_bio_set" },
	{ 0x532ed5f3, "pnfs_generic_pg_init_write" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb717e92e, "pnfs_unregister_layoutdriver" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xcc3546fc, "__tracepoint_bl_pr_key_unreg" },
	{ 0xf9a59acd, "pnfs_register_layoutdriver" },
	{ 0xe6d35498, "bdev_file_open_by_path" },
	{ 0x1f7fdb27, "try_module_get" },
	{ 0x63d6a50, "pnfs_ld_read_done" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x9c5bad96, "blk_start_plug" },
	{ 0xc0711314, "pnfs_set_lo_fail" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xdd35ee56, "nfs4_init_deviceid_node" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x55547d3a, "nfs_pageio_reset_read_mds" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x4ec8d88, "vmalloc_to_page" },
	{ 0xb8bd5570, "xdr_inline_decode" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb51a3724, "rpc_pipefs_notifier_unregister" },
	{ 0xca9360b5, "rb_next" },
	{ 0xc260fc58, "pnfs_generic_pg_init_read" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x508a3264, "pnfs_generic_pg_writepages" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x8d3c30d7, "page_cache_next_miss" },
	{ 0xe2964344, "__wake_up" },
	{ 0xe5919cb1, "xdr_encode_opaque" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x65994f1, "xdr_encode_opaque_fixed" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xd3f42fba, "pnfs_generic_pg_readpages" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa424724e, "rpc_put_sb_net" },
	{ 0x20548812, "register_pernet_subsys" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xa37b1177, "__SCT__tp_func_bl_pr_key_unreg" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0x87ed16c4, "__SCT__tp_func_bl_pr_key_reg_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xf82ec573, "rb_prev" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nfsv4,sunrpc,nfs");
