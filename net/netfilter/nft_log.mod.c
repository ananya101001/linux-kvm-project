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
	{ 0x5fe85e0, "nft_request_module" },
	{ 0xe6f295a9, "ipv6_skip_exthdr" },
	{ 0xe1dcf64a, "audit_log_format" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x41746749, "nft_unregister_expr" },
	{ 0x754d539c, "strlen" },
	{ 0x36cd5f26, "nla_put" },
	{ 0xb8cd3a7f, "nf_logger_put" },
	{ 0xcb57f3e2, "nf_log_packet" },
	{ 0xb44e18ea, "audit_enabled" },
	{ 0x8780fee0, "audit_log_start" },
	{ 0xeb37101c, "audit_log_end" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf274816b, "nft_register_expr" },
	{ 0xd1f2eee2, "nf_logger_find_get" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nf_tables");

