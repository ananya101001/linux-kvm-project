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

KSYMTAB_FUNC(proc_thermal_wt_req_add, "_gpl", "");
KSYMTAB_FUNC(proc_thermal_wt_req_remove, "_gpl", "");

SYMBOL_CRC(proc_thermal_wt_req_add, 0xbbb7f1f8, "_gpl");
SYMBOL_CRC(proc_thermal_wt_req_remove, 0x1333fac9, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbcab6ee6, "sscanf" },
	{ 0x81188c30, "match_string" },
	{ 0x3d4c941b, "processor_thermal_send_mbox_write_cmd" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x6b220060, "processor_thermal_send_mbox_read_cmd" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x980d5636, "sysfs_remove_group" },
	{ 0xa1b7a4fb, "sysfs_create_group" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "processor_thermal_mbox");

