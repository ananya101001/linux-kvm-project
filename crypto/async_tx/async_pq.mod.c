#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(async_gen_syndrome, "_gpl", "");
KSYMTAB_FUNC(async_syndrome_val, "_gpl", "");

SYMBOL_CRC(async_gen_syndrome, 0x10c7b118, "_gpl");
SYMBOL_CRC(async_syndrome_val, 0xa4340365, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x54da8b7f, "async_tx_quiesce" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xb0d904b7, "raid6_empty_zero_page" },
	{ 0x804a5b70, "raid6_call" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x632a0037, "async_xor_offs" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x5717123e, "alloc_pages_noprof" },
	{ 0x122c3a7e, "_printk" },
	{ 0x686a1b5, "__free_pages" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "async_tx,raid6_pq,async_xor");
