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

KSYMTAB_FUNC(poly1305_core_setkey, "", "");
KSYMTAB_FUNC(poly1305_core_blocks, "", "");
KSYMTAB_FUNC(poly1305_core_emit, "", "");
KSYMTAB_FUNC(poly1305_init_generic, "_gpl", "");
KSYMTAB_FUNC(poly1305_update_generic, "_gpl", "");
KSYMTAB_FUNC(poly1305_final_generic, "_gpl", "");

SYMBOL_CRC(poly1305_core_setkey, 0xd45b9cf4, "");
SYMBOL_CRC(poly1305_core_blocks, 0x021f3700, "");
SYMBOL_CRC(poly1305_core_emit, 0xbcb90cb3, "");
SYMBOL_CRC(poly1305_init_generic, 0x4b45fb6e, "_gpl");
SYMBOL_CRC(poly1305_update_generic, 0xfa617389, "_gpl");
SYMBOL_CRC(poly1305_final_generic, 0x7f376d08, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x69acdf38, "memcpy" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfb578fc5, "memset" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

