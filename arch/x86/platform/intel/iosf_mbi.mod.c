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

KSYMTAB_FUNC(iosf_mbi_read, "", "");
KSYMTAB_FUNC(iosf_mbi_write, "", "");
KSYMTAB_FUNC(iosf_mbi_modify, "", "");
KSYMTAB_FUNC(iosf_mbi_available, "", "");
KSYMTAB_FUNC(iosf_mbi_punit_acquire, "", "");
KSYMTAB_FUNC(iosf_mbi_punit_release, "", "");
KSYMTAB_FUNC(iosf_mbi_block_punit_i2c_access, "", "");
KSYMTAB_FUNC(iosf_mbi_unblock_punit_i2c_access, "", "");
KSYMTAB_FUNC(iosf_mbi_register_pmic_bus_access_notifier, "", "");
KSYMTAB_FUNC(iosf_mbi_unregister_pmic_bus_access_notifier_unlocked, "", "");
KSYMTAB_FUNC(iosf_mbi_unregister_pmic_bus_access_notifier, "", "");
KSYMTAB_FUNC(iosf_mbi_assert_punit_acquired, "", "");

SYMBOL_CRC(iosf_mbi_read, 0x86c7272b, "");
SYMBOL_CRC(iosf_mbi_write, 0x7a88da87, "");
SYMBOL_CRC(iosf_mbi_modify, 0x96eab78b, "");
SYMBOL_CRC(iosf_mbi_available, 0x28e09af1, "");
SYMBOL_CRC(iosf_mbi_punit_acquire, 0xffcd7f49, "");
SYMBOL_CRC(iosf_mbi_punit_release, 0xf7ef9a79, "");
SYMBOL_CRC(iosf_mbi_block_punit_i2c_access, 0x86f27420, "");
SYMBOL_CRC(iosf_mbi_unblock_punit_i2c_access, 0x44414ff2, "");
SYMBOL_CRC(iosf_mbi_register_pmic_bus_access_notifier, 0xf30965ac, "");
SYMBOL_CRC(iosf_mbi_unregister_pmic_bus_access_notifier_unlocked, 0x823c19ea, "");
SYMBOL_CRC(iosf_mbi_unregister_pmic_bus_access_notifier, 0xb7593ddc, "");
SYMBOL_CRC(iosf_mbi_assert_punit_acquired, 0x9ad7a582, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x3d647afc, "pci_write_config_dword" },
	{ 0x3be2ccd0, "pci_read_config_dword" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x37169f79, "cpu_latency_qos_update_request" },
	{ 0x823eae06, "blocking_notifier_call_chain" },
	{ 0xe2964344, "__wake_up" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x6cc72ac6, "__dynamic_dev_dbg" },
	{ 0x4ece3615, "blocking_notifier_chain_unregister" },
	{ 0x28afbb08, "cpu_latency_qos_add_request" },
	{ 0x423a7b8f, "__pci_register_driver" },
	{ 0xaad21b46, "pci_enable_device" },
	{ 0xd45e86ce, "pci_dev_get" },
	{ 0xd79a07ea, "pci_unregister_driver" },
	{ 0xf727c35a, "pci_dev_put" },
	{ 0x22ec5205, "cpu_latency_qos_remove_request" },
	{ 0x907d14d, "blocking_notifier_chain_register" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d00000F00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002280sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000958sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001170sv*sd*bc*sc*i*");
