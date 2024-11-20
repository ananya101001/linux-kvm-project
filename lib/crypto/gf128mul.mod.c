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

KSYMTAB_FUNC(gf128mul_x8_ble, "", "");
KSYMTAB_FUNC(gf128mul_lle, "", "");
KSYMTAB_FUNC(gf128mul_bbe, "", "");
KSYMTAB_FUNC(gf128mul_init_64k_bbe, "", "");
KSYMTAB_FUNC(gf128mul_free_64k, "", "");
KSYMTAB_FUNC(gf128mul_64k_bbe, "", "");
KSYMTAB_FUNC(gf128mul_init_4k_lle, "", "");
KSYMTAB_FUNC(gf128mul_init_4k_bbe, "", "");
KSYMTAB_FUNC(gf128mul_4k_lle, "", "");
KSYMTAB_FUNC(gf128mul_4k_bbe, "", "");

SYMBOL_CRC(gf128mul_x8_ble, 0x7a1bcd59, "");
SYMBOL_CRC(gf128mul_lle, 0x9e13f6f6, "");
SYMBOL_CRC(gf128mul_bbe, 0x1068004b, "");
SYMBOL_CRC(gf128mul_init_64k_bbe, 0x3755f990, "");
SYMBOL_CRC(gf128mul_free_64k, 0xd60736ec, "");
SYMBOL_CRC(gf128mul_64k_bbe, 0x5e373fb4, "");
SYMBOL_CRC(gf128mul_init_4k_lle, 0x83581089, "");
SYMBOL_CRC(gf128mul_init_4k_bbe, 0x9b2560b9, "");
SYMBOL_CRC(gf128mul_4k_lle, 0x5a4d313e, "");
SYMBOL_CRC(gf128mul_4k_bbe, 0xd70d35a1, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

