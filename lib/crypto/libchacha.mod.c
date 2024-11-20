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

KSYMTAB_FUNC(chacha_crypt_generic, "", "");

SYMBOL_CRC(chacha_crypt_generic, 0xcec122d7, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11e30762, "chacha_block_generic" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

