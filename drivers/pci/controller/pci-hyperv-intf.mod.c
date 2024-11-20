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

KSYMTAB_DATA(hvpci_block_ops, "_gpl", "");
KSYMTAB_FUNC(hyperv_read_cfg_blk, "_gpl", "");
KSYMTAB_FUNC(hyperv_write_cfg_blk, "_gpl", "");
KSYMTAB_FUNC(hyperv_reg_block_invalidate, "_gpl", "");

SYMBOL_CRC(hvpci_block_ops, 0xfb921e00, "_gpl");
SYMBOL_CRC(hyperv_read_cfg_blk, 0x1591b2c6, "_gpl");
SYMBOL_CRC(hyperv_write_cfg_blk, 0xe5f73406, "_gpl");
SYMBOL_CRC(hyperv_reg_block_invalidate, 0x221394ae, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

