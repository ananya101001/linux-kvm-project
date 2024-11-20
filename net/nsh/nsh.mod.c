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

KSYMTAB_FUNC(nsh_push, "_gpl", "");
KSYMTAB_FUNC(nsh_pop, "_gpl", "");

SYMBOL_CRC(nsh_push, 0xe3c5a4eb, "_gpl");
SYMBOL_CRC(nsh_pop, 0x3f2bbfab, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x91e48d88, "pskb_expand_head" },
	{ 0x6775c90f, "skb_push" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x5e249791, "dev_add_offload" },
	{ 0xa019bee3, "dev_remove_offload" },
	{ 0x11729181, "skb_pull_rcsum" },
	{ 0x64f4c46e, "__pskb_pull_tail" },
	{ 0x74dcec08, "skb_mac_gso_segment" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

