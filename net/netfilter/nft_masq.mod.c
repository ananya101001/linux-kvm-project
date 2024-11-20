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
	{ 0x26040007, "nf_ct_netns_put" },
	{ 0xc403a2f4, "nft_parse_register_load" },
	{ 0x7affc372, "nf_ct_netns_get" },
	{ 0x5feffa6d, "nf_nat_masquerade_ipv4" },
	{ 0xe0d559a1, "nf_nat_masquerade_ipv6" },
	{ 0xd9c25654, "nf_nat_masquerade_inet_unregister_notifiers" },
	{ 0x98c13c06, "nft_chain_validate_dependency" },
	{ 0xf0565d17, "nft_chain_validate_hooks" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf274816b, "nft_register_expr" },
	{ 0x3bc17c49, "nf_nat_masquerade_inet_register_notifiers" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x41746749, "nft_unregister_expr" },
	{ 0x36cd5f26, "nla_put" },
	{ 0xa086b5b, "nft_dump_register" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack,nf_tables,nf_nat");

