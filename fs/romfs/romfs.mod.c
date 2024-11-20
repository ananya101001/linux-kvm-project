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
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x6d6fe8e, "unlock_new_inode" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb82ac5cf, "sync_blockdev" },
	{ 0xa916b694, "strnlen" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9db05623, "inode_init_once" },
	{ 0x4bb9a769, "__brelse" },
	{ 0x70ea6033, "inode_nohighmem" },
	{ 0x2075d680, "generic_ro_fops" },
	{ 0xa07a37f0, "memchr" },
	{ 0x87b44338, "bdev_fput" },
	{ 0x4852f447, "set_nlink" },
	{ 0x3fbed0e1, "kmem_cache_alloc_lru_noprof" },
	{ 0xb609162e, "kmem_cache_free" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa308c57e, "__bread_gfp" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x236b5858, "folio_end_read" },
	{ 0xfb578fc5, "memset" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x9207278f, "__kmem_cache_create_args" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x17fde49c, "generic_read_dir" },
	{ 0xcddfe950, "page_symlink_inode_operations" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x7808f932, "get_tree_bdev" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x3e0f9d5b, "generic_file_llseek" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x5408d0fa, "inode_set_ctime_to_ts" },
	{ 0x6c90184e, "kmem_cache_destroy" },
	{ 0xc53ee102, "generic_shutdown_super" },
	{ 0xa74d6de5, "iget_locked" },
	{ 0x8d8d861d, "init_special_inode" },
	{ 0x9c81d303, "unregister_filesystem" },
	{ 0xfd3100c2, "d_make_root" },
	{ 0x245fa873, "sb_set_blocksize" },
	{ 0x2b7af004, "sync_filesystem" },
	{ 0xdc6b79be, "d_splice_alias" },
	{ 0x37a0cba, "kfree" },
	{ 0x44f4d3b, "logfc" },
	{ 0x5d28f4e6, "register_filesystem" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

