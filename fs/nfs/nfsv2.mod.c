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
	{ 0x159b281d, "nfs_instantiate" },
	{ 0x7919d80, "init_user_ns" },
	{ 0xc12b2aaf, "nfs_link" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x1ce1598c, "nfs_stat_to_errno" },
	{ 0x5d5bd066, "nfs_permission" },
	{ 0xc0b8681e, "from_kuid_munged" },
	{ 0xb5e86b0f, "nfs_free_client" },
	{ 0x7f3a3f7, "nfs_close_context" },
	{ 0xb7634cc2, "nfs_refresh_inode" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xaf5bf6ef, "nfs_debug" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xc572bb37, "nfs_symlink" },
	{ 0xc8a57349, "nfs_unlink" },
	{ 0xe1b85209, "nfs_clone_server" },
	{ 0xf25d5633, "nlmclnt_proc" },
	{ 0x40e13749, "nfs_writeback_update_inode" },
	{ 0xd9868d44, "nfs_alloc_client" },
	{ 0x30670182, "nfs_dentry_operations" },
	{ 0x46408636, "xdr_write_pages" },
	{ 0x4d22ebd2, "nfs_wb_all" },
	{ 0xb8bd5570, "xdr_inline_decode" },
	{ 0x46e88a56, "nfs_submount" },
	{ 0x610cae7f, "__tracepoint_nfs_xdr_status" },
	{ 0xdd59cde7, "nfs_mknod" },
	{ 0x955cf1ab, "nfs_create_server" },
	{ 0x6c7728c, "nfs_init_client" },
	{ 0x37a0cba, "kfree" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0xe5919cb1, "xdr_encode_opaque" },
	{ 0x6fb04652, "xdr_read_pages" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa30abbea, "nfs_create" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3a637e72, "nfs_mkdir" },
	{ 0x122c3a7e, "_printk" },
	{ 0xe2ada670, "nfs_try_get_tree" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xc1f0e49d, "make_kuid" },
	{ 0xfeb42418, "__SCT__tp_func_nfs_xdr_status" },
	{ 0x81e260b, "nfs_file_operations" },
	{ 0xa14aa561, "nfs_rename" },
	{ 0x7413dd21, "nfs_lookup" },
	{ 0x26884ff7, "nfs_alloc_fhandle" },
	{ 0x1b0d56fa, "__SCK__tp_func_nfs_xdr_status" },
	{ 0xb4a1f6d8, "nfs_invalidate_atime" },
	{ 0x76ac6a54, "nfs_getattr" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x6398160d, "register_nfs_version" },
	{ 0x2cb484f4, "nfs_atomic_open_v23" },
	{ 0xa0a98052, "rpc_call_start" },
	{ 0xb2e8dc61, "rpc_call_sync" },
	{ 0x1e1c8e13, "rpc_prepare_reply_pages" },
	{ 0xdffc3a45, "nfs_fs_type" },
	{ 0x8b170ae1, "nfs_setattr" },
	{ 0x2dd1f344, "xdr_terminate_string" },
	{ 0xa05ca625, "nfs_fattr_init" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xa3951d2b, "make_kgid" },
	{ 0x9102cff1, "from_kgid_munged" },
	{ 0x832e8f0b, "nfs_alloc_fattr" },
	{ 0x24d2973b, "xdr_reserve_space" },
	{ 0xdfd2ac06, "nfs_rmdir" },
	{ 0xb35799ca, "unregister_nfs_version" },
	{ 0xb44b2bf1, "nfs_setattr_update_inode" },
	{ 0xff8a2514, "nfs_sops" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nfs,sunrpc,lockd");

