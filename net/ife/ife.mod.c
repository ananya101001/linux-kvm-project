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

KSYMTAB_FUNC(ife_encode, "_gpl", "");
KSYMTAB_FUNC(ife_decode, "_gpl", "");
KSYMTAB_FUNC(ife_tlv_meta_decode, "_gpl", "");
KSYMTAB_FUNC(ife_tlv_meta_next, "_gpl", "");
KSYMTAB_FUNC(ife_tlv_meta_encode, "_gpl", "");

SYMBOL_CRC(ife_encode, 0x91b879e4, "_gpl");
SYMBOL_CRC(ife_decode, 0x8162cfff, "_gpl");
SYMBOL_CRC(ife_tlv_meta_decode, 0x67db2029, "_gpl");
SYMBOL_CRC(ife_tlv_meta_next, 0x6210e871, "_gpl");
SYMBOL_CRC(ife_tlv_meta_encode, 0xe7888e98, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x69acdf38, "memcpy" },
	{ 0x91e48d88, "pskb_expand_head" },
	{ 0xfb578fc5, "memset" },
	{ 0x64f4c46e, "__pskb_pull_tail" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

