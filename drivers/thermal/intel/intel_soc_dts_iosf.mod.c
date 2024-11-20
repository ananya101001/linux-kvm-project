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

KSYMTAB_FUNC(intel_soc_dts_iosf_interrupt_handler, "_gpl", "");
KSYMTAB_FUNC(intel_soc_dts_iosf_init, "_gpl", "");
KSYMTAB_FUNC(intel_soc_dts_iosf_exit, "_gpl", "");

SYMBOL_CRC(intel_soc_dts_iosf_interrupt_handler, 0xb5bbd7ad, "_gpl");
SYMBOL_CRC(intel_soc_dts_iosf_init, 0x0c7100ae, "_gpl");
SYMBOL_CRC(intel_soc_dts_iosf_exit, 0xf235e592, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x86c7272b, "iosf_mbi_read" },
	{ 0x7a88da87, "iosf_mbi_write" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x94c848a2, "thermal_zone_device_update" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9738a5c2, "thermal_zone_device_priv" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x28e09af1, "iosf_mbi_available" },
	{ 0xa1186518, "intel_tcc_get_tjmax" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe28725a8, "thermal_zone_device_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3ea53409, "thermal_zone_device_register_with_trips" },
	{ 0xb332f7f0, "thermal_zone_device_enable" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "iosf_mbi");

