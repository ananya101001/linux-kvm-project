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

KSYMTAB_FUNC(des_expand_key, "_gpl", "");
KSYMTAB_FUNC(des_encrypt, "_gpl", "");
KSYMTAB_FUNC(des_decrypt, "_gpl", "");
KSYMTAB_FUNC(des3_ede_expand_key, "_gpl", "");
KSYMTAB_FUNC(des3_ede_encrypt, "_gpl", "");
KSYMTAB_FUNC(des3_ede_decrypt, "_gpl", "");

SYMBOL_CRC(des_expand_key, 0xa8fb743d, "_gpl");
SYMBOL_CRC(des_encrypt, 0x0105b595, "_gpl");
SYMBOL_CRC(des_decrypt, 0xa6aa9857, "_gpl");
SYMBOL_CRC(des3_ede_expand_key, 0xa77b3b62, "_gpl");
SYMBOL_CRC(des3_ede_encrypt, 0x856a5ef3, "_gpl");
SYMBOL_CRC(des3_ede_decrypt, 0x574eda34, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb0aa812e, "fips_enabled" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

