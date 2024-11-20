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

KSYMTAB_FUNC(failover_slave_unregister, "_gpl", "");
KSYMTAB_FUNC(failover_register, "_gpl", "");
KSYMTAB_FUNC(failover_unregister, "_gpl", "");

SYMBOL_CRC(failover_slave_unregister, 0x45abde31, "_gpl");
SYMBOL_CRC(failover_register, 0x836cf920, "_gpl");
SYMBOL_CRC(failover_unregister, 0x6478e0c2, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xbd9af465, "netdev_info" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x37a0cba, "kfree" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb80be06, "netdev_rx_handler_unregister" },
	{ 0x6551c12f, "netdev_upper_dev_unlink" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xd87d68eb, "netdev_rx_handler_register" },
	{ 0xd1c27b23, "netdev_master_upper_dev_link" },
	{ 0x113ed675, "netdev_err" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

