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
	{ 0x1d4cd3da, "nf_flow_rule_route_ipv4" },
	{ 0xc44c36fa, "nf_flow_rule_route_ipv6" },
	{ 0xd27d8dca, "nft_unregister_flowtable_type" },
	{ 0xf1ace7cb, "nf_flow_offload_ipv6_hook" },
	{ 0x9b523098, "nf_flow_offload_ip_hook" },
	{ 0x64f4c46e, "__pskb_pull_tail" },
	{ 0x79c528ab, "nf_flow_table_init" },
	{ 0xe869d0b8, "nf_flow_table_offload_setup" },
	{ 0xe5948e60, "nf_flow_table_free" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd0acf2, "nft_register_flowtable_type" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nf_flow_table,nf_tables");

