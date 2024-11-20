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

KSYMTAB_FUNC(lc_create, "", "");
KSYMTAB_FUNC(lc_reset, "", "");
KSYMTAB_FUNC(lc_destroy, "", "");
KSYMTAB_FUNC(lc_del, "", "");
KSYMTAB_FUNC(lc_try_get, "", "");
KSYMTAB_FUNC(lc_find, "", "");
KSYMTAB_FUNC(lc_get, "", "");
KSYMTAB_FUNC(lc_put, "", "");
KSYMTAB_FUNC(lc_committed, "", "");
KSYMTAB_FUNC(lc_element_by_index, "", "");
KSYMTAB_FUNC(lc_seq_printf_stats, "", "");
KSYMTAB_FUNC(lc_seq_dump_details, "", "");
KSYMTAB_FUNC(lc_try_lock, "", "");
KSYMTAB_FUNC(lc_is_used, "", "");
KSYMTAB_FUNC(lc_get_cumulative, "", "");

SYMBOL_CRC(lc_create, 0xcf0aff85, "");
SYMBOL_CRC(lc_reset, 0xc4d80ba9, "");
SYMBOL_CRC(lc_destroy, 0x851681e7, "");
SYMBOL_CRC(lc_del, 0x8d7268ac, "");
SYMBOL_CRC(lc_try_get, 0x660b120c, "");
SYMBOL_CRC(lc_find, 0xdc890d61, "");
SYMBOL_CRC(lc_get, 0xfbb30ebd, "");
SYMBOL_CRC(lc_put, 0x753a06ce, "");
SYMBOL_CRC(lc_committed, 0x001487e6, "");
SYMBOL_CRC(lc_element_by_index, 0x7169f731, "");
SYMBOL_CRC(lc_seq_printf_stats, 0x1b5a4eb8, "");
SYMBOL_CRC(lc_seq_dump_details, 0x0a9301e5, "");
SYMBOL_CRC(lc_try_lock, 0x6d2b5f55, "");
SYMBOL_CRC(lc_is_used, 0xb60ec1e6, "");
SYMBOL_CRC(lc_get_cumulative, 0x29a34d81, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x377214d3, "seq_printf" },
	{ 0xb609162e, "kmem_cache_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xc7a5ec3b, "kmem_cache_size" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xc8817ac9, "kmem_cache_alloc_noprof" },
	{ 0xfb578fc5, "memset" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0x5db87f6c, "seq_putc" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

