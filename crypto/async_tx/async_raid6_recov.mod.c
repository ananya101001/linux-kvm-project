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

KSYMTAB_FUNC(async_raid6_2data_recov, "_gpl", "");
KSYMTAB_FUNC(async_raid6_datap_recov, "_gpl", "");

SYMBOL_CRC(async_raid6_2data_recov, 0xca336e34, "_gpl");
SYMBOL_CRC(async_raid6_datap_recov, 0x77609aa0, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x54da8b7f, "async_tx_quiesce" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xb0d904b7, "raid6_empty_zero_page" },
	{ 0x1803a6ed, "raid6_2data_recov" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xe4b051cf, "raid6_datap_recov" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "async_tx,raid6_pq");

