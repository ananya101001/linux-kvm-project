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
	{ 0xb2efd737, "nf_dup_netdev_egress" },
	{ 0x41746749, "nft_unregister_expr" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf274816b, "nft_register_expr" },
	{ 0x64054c, "nft_fwd_dup_netdev_offload" },
	{ 0xa086b5b, "nft_dump_register" },
	{ 0xc403a2f4, "nft_parse_register_load" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nf_dup_netdev,nf_tables");
