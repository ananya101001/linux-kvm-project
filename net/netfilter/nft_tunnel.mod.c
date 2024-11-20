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
	{ 0x36cd5f26, "nla_put" },
	{ 0xa086b5b, "nft_dump_register" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x38d69b4c, "nft_parse_register_store" },
	{ 0xe3ed4b17, "nft_unregister_obj" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x3d1059ea, "__nla_validate" },
	{ 0xc9110e8f, "metadata_dst_alloc" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xd6e5a44c, "skb_trim" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf274816b, "nft_register_expr" },
	{ 0x92e68c1d, "nft_register_obj" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x41746749, "nft_unregister_expr" },
	{ 0x70585b85, "metadata_dst_free" },
	{ 0xf04a650c, "dst_release" },
	{ 0x33338211, "rcuref_get_slowpath" },
	{ 0x9d3e6477, "nft_reg_track_update" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nf_tables");

