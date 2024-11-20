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
	{ 0x7affc372, "nf_ct_netns_get" },
	{ 0x41746749, "nft_unregister_expr" },
	{ 0x36cd5f26, "nla_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe0d2f8ca, "nf_conncount_add" },
	{ 0xfe13d629, "nf_ct_get_tuplepr" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0x26040007, "nf_ct_netns_put" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x92e68c1d, "nft_register_obj" },
	{ 0xf274816b, "nft_register_expr" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xe3ed4b17, "nft_unregister_obj" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x6ab3f77d, "nf_conncount_gc_list" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xf2a1dbb9, "nf_conncount_cache_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xded40268, "nf_conncount_list_init" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack,nf_tables,nf_conncount");

