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

KSYMTAB_FUNC(free_rs, "_gpl", "");
KSYMTAB_FUNC(init_rs_gfp, "_gpl", "");
KSYMTAB_FUNC(init_rs_non_canonical, "_gpl", "");
KSYMTAB_FUNC(encode_rs8, "_gpl", "");
KSYMTAB_FUNC(decode_rs8, "_gpl", "");

SYMBOL_CRC(free_rs, 0xfd581da1, "_gpl");
SYMBOL_CRC(init_rs_gfp, 0xeb2f825c, "_gpl");
SYMBOL_CRC(init_rs_non_canonical, 0x561835eb, "_gpl");
SYMBOL_CRC(encode_rs8, 0x63adbf92, "_gpl");
SYMBOL_CRC(decode_rs8, 0x1d29b9e1, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb0e602eb, "memmove" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xfb578fc5, "memset" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

