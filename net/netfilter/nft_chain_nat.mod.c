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
	{ 0x59c7c55f, "nf_nat_inet_register_fn" },
	{ 0x83823fac, "ipv6_find_hdr" },
	{ 0xe711bf8, "nft_do_chain" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x29cba8e5, "nft_unregister_chain_type" },
	{ 0x226c0a91, "nf_nat_ipv6_register_fn" },
	{ 0x14927eef, "nf_nat_ipv6_unregister_fn" },
	{ 0x68afad6c, "nf_nat_ipv4_register_fn" },
	{ 0xfd329d97, "nf_nat_ipv4_unregister_fn" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd831dbab, "nft_register_chain_type" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x4a3020a5, "nf_nat_inet_unregister_fn" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nf_nat,nf_tables");

