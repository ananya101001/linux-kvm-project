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
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x6e5b8651, "xz_dec_run" },
	{ 0xc6cbbc89, "capable" },
	{ 0xbf9308e3, "submit_bio" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9db05623, "inode_init_once" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0xeff5e7af, "bio_put" },
	{ 0x2fbd6a5f, "readahead_expand" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x70ea6033, "inode_nohighmem" },
	{ 0x55945a45, "unlock_page" },
	{ 0x2075d680, "generic_ro_fops" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x65dccf13, "xz_dec_end" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x4852f447, "set_nlink" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3fbed0e1, "kmem_cache_alloc_lru_noprof" },
	{ 0xb609162e, "kmem_cache_free" },
	{ 0x5a921311, "strncmp" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0xe84c11ab, "bio_kmalloc" },
	{ 0xeb692a57, "bio_chain" },
	{ 0xf1e046cc, "panic" },
	{ 0x81821486, "d_obtain_alias" },
	{ 0xb5f4750d, "__put_devmap_managed_folio_refs" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x236b5858, "folio_end_read" },
	{ 0x3ffd487f, "bio_init" },
	{ 0xfb578fc5, "memset" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0x43ec262e, "bio_alloc_clone" },
	{ 0x33b1aefa, "__insert_inode_hash" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa3951d2b, "make_kgid" },
	{ 0x9207278f, "__kmem_cache_create_args" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x91200d75, "bio_free_pages" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x333f4f28, "generic_encode_ino32_fh" },
	{ 0x999e8297, "vfree" },
	{ 0x17fde49c, "generic_read_dir" },
	{ 0x28e3c37d, "bio_uninit" },
	{ 0xdfc12ef1, "zstd_decompress_stream" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5dd04d0e, "add_to_page_cache_lru" },
	{ 0x4fb3b717, "bio_trim" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x3d1a1b7b, "seq_write" },
	{ 0x94c1bfc3, "__folio_put" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x7808f932, "get_tree_bdev" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x5717123e, "alloc_pages_noprof" },
	{ 0x3635b076, "pagecache_get_page" },
	{ 0xcf624eda, "__fs_parse" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x3cbb940b, "zstd_init_dstream" },
	{ 0x754d539c, "strlen" },
	{ 0x3e0f9d5b, "generic_file_llseek" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xbf9a66e0, "make_bad_inode" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0xac859f6f, "submit_bio_wait" },
	{ 0xd10246fe, "sb_min_blocksize" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x5408d0fa, "inode_set_ctime_to_ts" },
	{ 0x608d0267, "zstd_get_error_code" },
	{ 0x6f02c8cf, "iget_failed" },
	{ 0xed0b2833, "fs_bio_set" },
	{ 0x6c90184e, "kmem_cache_destroy" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xa74d6de5, "iget_locked" },
	{ 0xdfccba41, "__bio_add_page" },
	{ 0x3f34644d, "zstd_dstream_workspace_bound" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x79d42278, "fs_param_is_string" },
	{ 0xea0af66, "new_inode" },
	{ 0xc7c1107a, "LZ4_decompress_safe" },
	{ 0x8d8d861d, "init_special_inode" },
	{ 0x9c81d303, "unregister_filesystem" },
	{ 0x81db6ebb, "xz_dec_reset" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x4df8fbc, "lzo1x_decompress_safe" },
	{ 0xfd3100c2, "d_make_root" },
	{ 0x23967b1, "xas_find" },
	{ 0x2b7af004, "sync_filesystem" },
	{ 0xdc6b79be, "d_splice_alias" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3c962011, "page_get_link" },
	{ 0x37a0cba, "kfree" },
	{ 0x91bf2302, "iput" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0xb2410c8a, "fs_param_is_enum" },
	{ 0x44f4d3b, "logfc" },
	{ 0x52d717da, "xz_dec_init" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0x5d28f4e6, "register_filesystem" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x992bd396, "kill_block_super" },
	{ 0x6d6fe8e, "unlock_new_inode" },
	{ 0x122c3a7e, "_printk" },
	{ 0xafc6c68e, "zstd_is_error" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xc1f0e49d, "make_kuid" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

