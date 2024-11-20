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

KSYMTAB_FUNC(processor_thermal_send_mbox_read_cmd, "_gpl", "INT340X_THERMAL");
KSYMTAB_FUNC(processor_thermal_send_mbox_write_cmd, "_gpl", "INT340X_THERMAL");
KSYMTAB_FUNC(processor_thermal_mbox_interrupt_config, "_gpl", "INT340X_THERMAL");

SYMBOL_CRC(processor_thermal_send_mbox_read_cmd, 0x6b220060, "_gpl");
SYMBOL_CRC(processor_thermal_send_mbox_write_cmd, 0x3d4c941b, "_gpl");
SYMBOL_CRC(processor_thermal_mbox_interrupt_config, 0x083d12b8, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

