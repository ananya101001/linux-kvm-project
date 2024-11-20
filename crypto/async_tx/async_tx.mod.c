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

KSYMTAB_FUNC(async_tx_submit, "_gpl", "");
KSYMTAB_FUNC(async_trigger_callback, "_gpl", "");
KSYMTAB_FUNC(async_tx_quiesce, "_gpl", "");

SYMBOL_CRC(async_tx_submit, 0xda474f41, "_gpl");
SYMBOL_CRC(async_trigger_callback, 0x14d00e47, "_gpl");
SYMBOL_CRC(async_tx_quiesce, 0x54da8b7f, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

