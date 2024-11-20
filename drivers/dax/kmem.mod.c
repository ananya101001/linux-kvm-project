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
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf7c4edb7, "mt_put_memory_types" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf474fdcb, "kfree_const" },
	{ 0xfcc1edd3, "memory_block_size_bytes" },
	{ 0xaa347d59, "mt_calc_adistance" },
	{ 0xab34378e, "mt_find_alloc_memory_type" },
	{ 0x5a549f7, "_dev_info" },
	{ 0x8f40672b, "init_node_memory_type" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe8c0065d, "memory_group_register_static" },
	{ 0x37a0cba, "kfree" },
	{ 0x6a85546b, "clear_node_memory_type" },
	{ 0x77358855, "iomem_resource" },
	{ 0x85bd1608, "__request_region" },
	{ 0xfcbfec70, "add_memory_driver_managed" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0xb2db2d5, "remove_resource" },
	{ 0x12ee1173, "memory_group_unregister" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0xbbdc9b2, "remove_memory" },
	{ 0xdc6c2ff0, "dax_driver_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x365e7911, "kstrdup_const" },
	{ 0x47faeadc, "__dax_driver_register" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

