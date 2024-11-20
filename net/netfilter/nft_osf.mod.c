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
	{ 0xa086b5b, "nft_dump_register" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x38d69b4c, "nft_parse_register_store" },
	{ 0x41746749, "nft_unregister_expr" },
	{ 0x35eff5e0, "nf_osf_fingers" },
	{ 0x5429356b, "nf_osf_find" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xa916b694, "strnlen" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf274816b, "nft_register_expr" },
	{ 0x9d3e6477, "nft_reg_track_update" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf0565d17, "nft_chain_validate_hooks" },
	{ 0x36cd5f26, "nla_put" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,nfnetlink_osf");

