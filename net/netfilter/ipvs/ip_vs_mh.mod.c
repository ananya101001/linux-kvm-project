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
	{ 0x28aa6a67, "call_rcu" },
	{ 0xcfd884a8, "__hsiphash_unaligned" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xea124bd1, "gcd" },
	{ 0xf915d9d, "ip_vs_scheduler_err" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xae536b23, "register_ip_vs_scheduler" },
	{ 0x37a0cba, "kfree" },
	{ 0x58295f41, "unregister_ip_vs_scheduler" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "ip_vs");

