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
	{ 0xea4f3372, "nla_append" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xabb3ef2, "textsearch_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0xb96d85c7, "textsearch_prepare" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xcc3cf61e, "tcf_em_unregister" },
	{ 0x5c836280, "skb_find_text" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7de0a646, "tcf_em_register" },
	{ 0x9166fada, "strncpy" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x1d77292e, "nla_put_nohdr" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

