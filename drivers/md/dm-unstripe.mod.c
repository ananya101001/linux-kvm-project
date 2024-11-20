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
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x1ad7a19c, "dm_table_get_mode" },
	{ 0x8d90836b, "dm_get_device" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x44a8d9bd, "dm_set_target_max_io_len" },
	{ 0x6231046, "dm_put_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xec16a055, "bio_associate_blkg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xd05056f8, "dm_register_target" },
	{ 0x96848186, "scnprintf" },
	{ 0x2005df16, "dm_unregister_target" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "dm-mod");

