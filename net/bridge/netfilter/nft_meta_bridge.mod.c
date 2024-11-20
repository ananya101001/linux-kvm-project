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
	{ 0xe375a340, "nft_meta_set_init" },
	{ 0xc403a2f4, "nft_parse_register_load" },
	{ 0xff696451, "nft_meta_set_validate" },
	{ 0xf0565d17, "nft_chain_validate_hooks" },
	{ 0xc0d5aef2, "netdev_master_upper_dev_get_rcu" },
	{ 0xf9bef16d, "br_vlan_enabled" },
	{ 0x70ff70b2, "br_vlan_get_proto" },
	{ 0x9166fada, "strncpy" },
	{ 0xfb740b57, "nft_meta_get_eval" },
	{ 0x4e9cb30d, "br_vlan_get_pvid_rcu" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xcc4bfd38, "nft_meta_set_destroy" },
	{ 0xd616513a, "nft_meta_set_dump" },
	{ 0xc823b9c0, "nft_meta_get_dump" },
	{ 0xd5927754, "nft_meta_get_reduce" },
	{ 0xe2c74001, "nft_meta_policy" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf274816b, "nft_register_expr" },
	{ 0x1cfe9388, "__nft_reg_track_cancel" },
	{ 0x7dcbc84, "nft_meta_set_eval" },
	{ 0x38d69b4c, "nft_parse_register_store" },
	{ 0xa12096ca, "nft_meta_get_init" },
	{ 0x41746749, "nft_unregister_expr" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,bridge");

