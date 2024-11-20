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

KSYMTAB_FUNC(tpm_tis_remove, "_gpl", "");
KSYMTAB_FUNC(tpm_tis_core_init, "_gpl", "");
KSYMTAB_FUNC(tpm_tis_resume, "_gpl", "");

SYMBOL_CRC(tpm_tis_remove, 0x5e9bdd72, "_gpl");
SYMBOL_CRC(tpm_tis_core_init, 0xbcc1f9a6, "_gpl");
SYMBOL_CRC(tpm_tis_resume, 0x9d4f711a, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc85970f2, "freezing_slow_path" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3294a176, "tpm_chip_start" },
	{ 0x76d94bd4, "tpm_chip_stop" },
	{ 0x81781854, "tpm_pm_resume" },
	{ 0x433bc463, "tpm1_do_selftest" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xedc03953, "iounmap" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0xc8d99e9c, "tpm1_getcap" },
	{ 0x6afd7822, "tpm_calc_ordinal_duration" },
	{ 0x835712e1, "devm_request_threaded_irq" },
	{ 0x9431275, "tpm2_get_tpm_pt" },
	{ 0x5a549f7, "_dev_info" },
	{ 0x81e6b37f, "dmi_get_system_info" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xe2964344, "__wake_up" },
	{ 0x8edbdaa3, "tpmm_chip_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6b250dda, "tpm2_probe" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x64fe6428, "tpm_chip_bootstrap" },
	{ 0x5f00791b, "tpm_get_timeouts" },
	{ 0x3c3001c3, "tpm_chip_register" },
	{ 0xde80cd09, "ioremap" },
	{ 0x6cc72ac6, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3426ac54, "boot_cpu_data" },
	{ 0xa78af5f3, "ioread32" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x1262a927, "devm_free_irq" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xd73653c4, "freezer_active" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "tpm");


MODULE_INFO(srcversion, "9F8218E4CF0E4529AC5CC9A");
