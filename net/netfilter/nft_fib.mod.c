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

KSYMTAB_DATA(nft_fib_policy, "", "");
KSYMTAB_FUNC(nft_fib_validate, "_gpl", "");
KSYMTAB_FUNC(nft_fib_init, "_gpl", "");
KSYMTAB_FUNC(nft_fib_dump, "_gpl", "");
KSYMTAB_FUNC(nft_fib_store_result, "_gpl", "");
KSYMTAB_FUNC(nft_fib_reduce, "_gpl", "");

SYMBOL_CRC(nft_fib_policy, 0xbc8624cb, "");
SYMBOL_CRC(nft_fib_validate, 0x71db2a52, "_gpl");
SYMBOL_CRC(nft_fib_init, 0xae3a0355, "_gpl");
SYMBOL_CRC(nft_fib_dump, 0xf9f36925, "_gpl");
SYMBOL_CRC(nft_fib_store_result, 0xf68ab1aa, "_gpl");
SYMBOL_CRC(nft_fib_reduce, 0x2880789f, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf0565d17, "nft_chain_validate_hooks" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x38d69b4c, "nft_parse_register_store" },
	{ 0xa086b5b, "nft_dump_register" },
	{ 0x36cd5f26, "nla_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa916b694, "strnlen" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x9d3e6477, "nft_reg_track_update" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nf_tables");

