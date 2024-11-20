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

KSYMTAB_FUNC(proc_thermal_rfim_add, "_gpl", "");
KSYMTAB_FUNC(proc_thermal_rfim_remove, "_gpl", "");

SYMBOL_CRC(proc_thermal_rfim_add, 0x7a4608e4, "_gpl");
SYMBOL_CRC(proc_thermal_rfim_remove, 0x80396fcb, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x754d539c, "strlen" },
	{ 0x5a921311, "strncmp" },
	{ 0x81188c30, "match_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xa1b7a4fb, "sysfs_create_group" },
	{ 0x980d5636, "sysfs_remove_group" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x3d4c941b, "processor_thermal_send_mbox_write_cmd" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x6b220060, "processor_thermal_send_mbox_read_cmd" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "processor_thermal_mbox");

