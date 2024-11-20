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

KSYMTAB_FUNC(proc_thermal_read_power_floor_status, "_gpl", "INT340X_THERMAL");
KSYMTAB_FUNC(proc_thermal_power_floor_set_state, "_gpl", "INT340X_THERMAL");
KSYMTAB_FUNC(proc_thermal_power_floor_get_state, "_gpl", "INT340X_THERMAL");
KSYMTAB_FUNC(proc_thermal_check_power_floor_intr, "_gpl", "INT340X_THERMAL");
KSYMTAB_FUNC(proc_thermal_power_floor_intr_callback, "_gpl", "INT340X_THERMAL");

SYMBOL_CRC(proc_thermal_read_power_floor_status, 0xe1b18e6d, "_gpl");
SYMBOL_CRC(proc_thermal_power_floor_set_state, 0x11d53fda, "_gpl");
SYMBOL_CRC(proc_thermal_power_floor_get_state, 0x302cd636, "_gpl");
SYMBOL_CRC(proc_thermal_check_power_floor_intr, 0x3cefff1f, "_gpl");
SYMBOL_CRC(proc_thermal_power_floor_intr_callback, 0x2a887fd1, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x83d12b8, "processor_thermal_mbox_interrupt_config" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x63b1fee2, "sysfs_notify" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "processor_thermal_mbox");

