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

KSYMTAB_FUNC(configfs_remove_default_groups, "", "");
KSYMTAB_FUNC(configfs_depend_item, "", "");
KSYMTAB_FUNC(configfs_undepend_item, "", "");
KSYMTAB_FUNC(configfs_depend_item_unlocked, "", "");
KSYMTAB_FUNC(configfs_register_group, "", "");
KSYMTAB_FUNC(configfs_unregister_group, "", "");
KSYMTAB_FUNC(configfs_register_default_group, "", "");
KSYMTAB_FUNC(configfs_unregister_default_group, "", "");
KSYMTAB_FUNC(configfs_register_subsystem, "", "");
KSYMTAB_FUNC(configfs_unregister_subsystem, "", "");
KSYMTAB_FUNC(config_item_set_name, "", "");
KSYMTAB_FUNC(config_item_init_type_name, "", "");
KSYMTAB_FUNC(config_group_init_type_name, "", "");
KSYMTAB_FUNC(config_item_get, "", "");
KSYMTAB_FUNC(config_item_get_unless_zero, "", "");
KSYMTAB_FUNC(config_item_put, "", "");
KSYMTAB_FUNC(config_group_init, "", "");
KSYMTAB_FUNC(config_group_find_item, "", "");

SYMBOL_CRC(configfs_remove_default_groups, 0x16b89ecf, "");
SYMBOL_CRC(configfs_depend_item, 0x5ad05666, "");
SYMBOL_CRC(configfs_undepend_item, 0x3fce0373, "");
SYMBOL_CRC(configfs_depend_item_unlocked, 0x0559ce0f, "");
SYMBOL_CRC(configfs_register_group, 0x74e9087b, "");
SYMBOL_CRC(configfs_unregister_group, 0x6f9d7f7c, "");
SYMBOL_CRC(configfs_register_default_group, 0xcaf0716d, "");
SYMBOL_CRC(configfs_unregister_default_group, 0xc0f57a15, "");
SYMBOL_CRC(configfs_register_subsystem, 0x527b8d9d, "");
SYMBOL_CRC(configfs_unregister_subsystem, 0x0ea5264a, "");
SYMBOL_CRC(config_item_set_name, 0xfaed9352, "");
SYMBOL_CRC(config_item_init_type_name, 0x51af06ba, "");
SYMBOL_CRC(config_group_init_type_name, 0x30fd05df, "");
SYMBOL_CRC(config_item_get, 0x998d9992, "");
SYMBOL_CRC(config_item_get_unless_zero, 0x37bdef2e, "");
SYMBOL_CRC(config_item_put, 0x9b824744, "");
SYMBOL_CRC(config_group_init, 0xa2323c6d, "");
SYMBOL_CRC(config_group_find_item, 0x3561b588, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd9a86cd3, "path_put" },
	{ 0x267a17b2, "simple_get_link" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5fc0511b, "simple_inode_init_ts" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x9e5e7c8d, "d_drop" },
	{ 0x8b8059bd, "in_group_p" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8f786bee, "fs_umode_to_dtype" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x41014111, "simple_setattr" },
	{ 0x3ff841d2, "simple_unlink" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xc6cbbc89, "capable" },
	{ 0x7f1fd79f, "module_put" },
	{ 0x8f14d45b, "get_zeroed_page_noprof" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0x587b0954, "kvasprintf" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xb609162e, "kmem_cache_free" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xb4104491, "kill_litter_super" },
	{ 0xfb578fc5, "memset" },
	{ 0x28d809fe, "kern_path" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0xcdafda4d, "sysfs_remove_mount_point" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xc8817ac9, "kmem_cache_alloc_noprof" },
	{ 0xeadb8f32, "ram_aops" },
	{ 0x49147859, "d_delete" },
	{ 0x9207278f, "__kmem_cache_create_args" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x999e8297, "vfree" },
	{ 0x17fde49c, "generic_read_dir" },
	{ 0x2c2dc0e9, "d_add" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x364850b1, "down_write_killable" },
	{ 0xf734775f, "inode_set_ctime_current" },
	{ 0xf04e6d86, "inc_nlink" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x7c9adcc2, "dput" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0xf865848e, "generic_delete_inode" },
	{ 0xeec9a487, "_copy_from_iter" },
	{ 0x7c2a9d92, "simple_release_fs" },
	{ 0xd82c6e3c, "d_parent_ino" },
	{ 0x43b37800, "get_tree_single" },
	{ 0x754d539c, "strlen" },
	{ 0xc3803b8a, "inode_permission" },
	{ 0x3e0f9d5b, "generic_file_llseek" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xccf69887, "get_free_pages_noprof" },
	{ 0x53b954a2, "up_read" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x5408d0fa, "inode_set_ctime_to_ts" },
	{ 0x9292be37, "simple_pin_fs" },
	{ 0x6c90184e, "kmem_cache_destroy" },
	{ 0xbc314156, "nop_mnt_idmap" },
	{ 0x7180c218, "__d_drop" },
	{ 0xdde29b85, "simple_rmdir" },
	{ 0x1f7fdb27, "try_module_get" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x460f1787, "d_instantiate" },
	{ 0x639ccacd, "_copy_to_iter" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x6c2bffc4, "free_inode_nonrcu" },
	{ 0xea0af66, "new_inode" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9c81d303, "unregister_filesystem" },
	{ 0xd1d1d232, "d_alloc_name" },
	{ 0xa55f28b4, "simple_statfs" },
	{ 0xfd3100c2, "d_make_root" },
	{ 0xfbac6943, "always_delete_dentry" },
	{ 0xcb3e419, "fsnotify" },
	{ 0x9471ba2, "current_time" },
	{ 0x69acdf38, "memcpy" },
	{ 0x38fbf9b0, "iunique" },
	{ 0x37a0cba, "kfree" },
	{ 0x91bf2302, "iput" },
	{ 0x81402c58, "kernel_kobj" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x439b09a0, "sysfs_create_mount_point" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x148653, "vsnprintf" },
	{ 0x5d28f4e6, "register_filesystem" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "502276C05E849C09BC8EBCC");
