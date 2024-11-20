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

KSYMTAB_FUNC(speedstep_get_frequency, "_gpl", "");
KSYMTAB_FUNC(speedstep_detect_processor, "_gpl", "");
KSYMTAB_FUNC(speedstep_get_freqs, "_gpl", "");

SYMBOL_CRC(speedstep_get_frequency, 0x2b67f096, "_gpl");
SYMBOL_CRC(speedstep_detect_processor, 0xd7ab2c0c, "_gpl");
SYMBOL_CRC(speedstep_get_freqs, 0x1b1f2bda, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe37056dc, "pv_ops" },
	{ 0xd4ec10e6, "BUG_func" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x3426ac54, "boot_cpu_data" },
	{ 0xd6b33026, "cpu_khz" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x122c3a7e, "_printk" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xa6729c43, "cpu_info" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

