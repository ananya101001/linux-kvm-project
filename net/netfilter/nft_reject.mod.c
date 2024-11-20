#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_DATA(nft_reject_policy, "_gpl", "");
KSYMTAB_FUNC(nft_reject_validate, "_gpl", "");
KSYMTAB_FUNC(nft_reject_init, "_gpl", "");
KSYMTAB_FUNC(nft_reject_dump, "_gpl", "");
KSYMTAB_FUNC(nft_reject_icmp_code, "_gpl", "");
KSYMTAB_FUNC(nft_reject_icmpv6_code, "_gpl", "");

SYMBOL_CRC(nft_reject_policy, 0xcbcf13a1, "_gpl");
SYMBOL_CRC(nft_reject_validate, 0xe07ddae6, "_gpl");
SYMBOL_CRC(nft_reject_init, 0xacb5596f, "_gpl");
SYMBOL_CRC(nft_reject_dump, 0xc8bd3a89, "_gpl");
SYMBOL_CRC(nft_reject_icmp_code, 0xe2c84666, "_gpl");
SYMBOL_CRC(nft_reject_icmpv6_code, 0x1de558c1, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf0565d17, "nft_chain_validate_hooks" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x36cd5f26, "nla_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nf_tables");

