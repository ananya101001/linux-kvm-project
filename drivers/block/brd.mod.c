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
	{ 0x686a1b5, "__free_pages" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbdc0c3a9, "debugfs_create_u64" },
	{ 0xf8cbbf1d, "__blk_alloc_disk" },
	{ 0xa916b694, "strnlen" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xd7be87d8, "set_capacity" },
	{ 0x69e9c1d7, "device_add_disk" },
	{ 0x80131ca2, "put_disk" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x37a0cba, "kfree" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x8656f320, "debugfs_remove" },
	{ 0x59c98678, "del_gendisk" },
	{ 0x8fa25c24, "xa_find" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0xdf36914b, "xa_find_after" },
	{ 0xd9491c14, "xa_destroy" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8b0ac9d7, "debugfs_create_dir" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x736b97bd, "bio_endio" },
	{ 0xe02c9c92, "__xa_erase" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0xde8c1673, "param_ops_ulong" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x5717123e, "alloc_pages_noprof" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x7dcf4135, "__xa_insert" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

