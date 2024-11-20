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

KSYMTAB_FUNC(proc_thermal_check_wt_intr, "_gpl", "INT340X_THERMAL");
KSYMTAB_FUNC(proc_thermal_wt_intr_callback, "_gpl", "INT340X_THERMAL");
KSYMTAB_FUNC(proc_thermal_wt_hint_add, "_gpl", "INT340X_THERMAL");
KSYMTAB_FUNC(proc_thermal_wt_hint_remove, "_gpl", "INT340X_THERMAL");

SYMBOL_CRC(proc_thermal_check_wt_intr, 0x4456f6f0, "_gpl");
SYMBOL_CRC(proc_thermal_wt_intr_callback, 0x87917b29, "_gpl");
SYMBOL_CRC(proc_thermal_wt_hint_add, 0x4baaf171, "_gpl");
SYMBOL_CRC(proc_thermal_wt_hint_remove, 0x2c73096a, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xa1b7a4fb, "sysfs_create_group" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x83d12b8, "processor_thermal_mbox_interrupt_config" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x980d5636, "sysfs_remove_group" },
	{ 0x63b1fee2, "sysfs_notify" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "processor_thermal_mbox");

