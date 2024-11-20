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
	{ 0x992bd396, "kill_block_super" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3ac1f55c, "fat_param_spec" },
	{ 0x4bb9a769, "__brelse" },
	{ 0x9a3478c9, "inode_maybe_inc_iversion" },
	{ 0x62b068a0, "fat_getattr" },
	{ 0xf5f82282, "sync_dirty_buffer" },
	{ 0x4852f447, "set_nlink" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xe58109dc, "fat_attach" },
	{ 0x963b319a, "fat_update_time" },
	{ 0xa24c8873, "fat_build_inode" },
	{ 0x7941f35f, "fat_fill_super" },
	{ 0xdeffaa6f, "fat_alloc_new_dir" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x96c763d1, "fat_free_fc" },
	{ 0x1219c245, "fat_init_fs_context" },
	{ 0x758672db, "fat_remove_entries" },
	{ 0xf4e972b7, "fat_add_entries" },
	{ 0xdc908c76, "fat_sync_inode" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf04e6d86, "inc_nlink" },
	{ 0x7808f932, "get_tree_bdev" },
	{ 0x38b7fdf6, "fat_reconfigure" },
	{ 0xd6fa0931, "fat_truncate_time" },
	{ 0x2c350578, "fat_flush_inodes" },
	{ 0x349cba85, "strchr" },
	{ 0x1d576a31, "__mark_inode_dirty" },
	{ 0x11659f19, "mark_buffer_dirty_inode" },
	{ 0xff0e49af, "drop_nlink" },
	{ 0x97937c05, "fat_detach" },
	{ 0x8a6fbd4a, "fat_parse_param" },
	{ 0xf9ac8e09, "clear_nlink" },
	{ 0x460f1787, "d_instantiate" },
	{ 0x42687235, "fat_dir_empty" },
	{ 0x3be0edf0, "fat_time_unix2fat" },
	{ 0x9c81d303, "unregister_filesystem" },
	{ 0x79c15788, "fat_get_dotdot_entry" },
	{ 0x73d05b3f, "fat_free_clusters" },
	{ 0x63929a44, "fat_setattr" },
	{ 0xdc6b79be, "d_splice_alias" },
	{ 0x9471ba2, "current_time" },
	{ 0xf8688fbf, "__fat_fs_error" },
	{ 0x5d28f4e6, "register_filesystem" },
	{ 0xbbfcd124, "fat_scan" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "fat");

