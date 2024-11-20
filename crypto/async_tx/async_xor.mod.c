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

KSYMTAB_FUNC(async_xor_offs, "_gpl", "");
KSYMTAB_FUNC(async_xor, "_gpl", "");
KSYMTAB_FUNC(async_xor_val_offs, "_gpl", "");
KSYMTAB_FUNC(async_xor_val, "_gpl", "");

SYMBOL_CRC(async_xor_offs, 0x632a0037, "_gpl");
SYMBOL_CRC(async_xor, 0xfa9d1332, "_gpl");
SYMBOL_CRC(async_xor_val_offs, 0x63fc360c, "_gpl");
SYMBOL_CRC(async_xor_val, 0x4012dcc2, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x5b6c00e6, "xor_blocks" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xfb578fc5, "memset" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x54da8b7f, "async_tx_quiesce" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "xor,async_tx");

