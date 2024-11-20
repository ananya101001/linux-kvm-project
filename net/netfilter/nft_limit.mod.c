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
	{ 0x3f178e25, "nla_put_64bit" },
	{ 0x36cd5f26, "nla_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x41746749, "nft_unregister_expr" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x92e68c1d, "nft_register_obj" },
	{ 0xf274816b, "nft_register_expr" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xe3ed4b17, "nft_unregister_obj" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nf_tables");

