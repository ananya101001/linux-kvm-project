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

KSYMTAB_FUNC(LZ4_compress_fast, "", "");
KSYMTAB_FUNC(LZ4_compress_default, "", "");
KSYMTAB_FUNC(LZ4_compress_destSize, "", "");
KSYMTAB_FUNC(LZ4_loadDict, "", "");
KSYMTAB_FUNC(LZ4_saveDict, "", "");
KSYMTAB_FUNC(LZ4_compress_fast_continue, "", "");

SYMBOL_CRC(LZ4_compress_fast, 0x6004858d, "");
SYMBOL_CRC(LZ4_compress_default, 0x4f4d78c5, "");
SYMBOL_CRC(LZ4_compress_destSize, 0x5bc92e85, "");
SYMBOL_CRC(LZ4_loadDict, 0x749849d8, "");
SYMBOL_CRC(LZ4_saveDict, 0x635ff76d, "");
SYMBOL_CRC(LZ4_compress_fast_continue, 0xf9eced44, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb0e602eb, "memmove" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x69acdf38, "memcpy" },
	{ 0xfb578fc5, "memset" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

