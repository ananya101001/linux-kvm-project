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

KSYMTAB_DATA(nf_nat_amanda_hook, "_gpl", "");

SYMBOL_CRC(nf_nat_amanda_hook, 0x7bbef4cb, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xdf27da0b, "nf_conntrack_helpers_register" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xabb3ef2, "textsearch_destroy" },
	{ 0x5f21bd3, "nf_conntrack_helpers_unregister" },
	{ 0xd92a2d2, "__nf_ct_refresh_acct" },
	{ 0x5c836280, "skb_find_text" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x1e415c0e, "nf_ct_expect_alloc" },
	{ 0x26b0ff0f, "nf_ct_expect_init" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x89c29bc9, "nf_ct_expect_put" },
	{ 0xaef1bb6, "nf_ct_expect_related_report" },
	{ 0xc219e5b6, "nf_ct_helper_log" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xee3f884, "param_ops_charp" },
	{ 0x566b7206, "param_ops_uint" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb96d85c7, "textsearch_prepare" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack");

