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

KSYMTAB_DATA(cast_s1, "_gpl", "");
KSYMTAB_DATA(cast_s2, "_gpl", "");
KSYMTAB_DATA(cast_s3, "_gpl", "");
KSYMTAB_DATA(cast_s4, "_gpl", "");

SYMBOL_CRC(cast_s1, 0xbd3e7542, "_gpl");
SYMBOL_CRC(cast_s2, 0x5609ce41, "_gpl");
SYMBOL_CRC(cast_s3, 0xb9cba57f, "_gpl");
SYMBOL_CRC(cast_s4, 0x5b17be06, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

