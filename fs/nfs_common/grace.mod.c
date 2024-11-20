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

KSYMTAB_FUNC(locks_start_grace, "_gpl", "");
KSYMTAB_FUNC(locks_end_grace, "_gpl", "");
KSYMTAB_FUNC(locks_in_grace, "_gpl", "");
KSYMTAB_FUNC(opens_in_grace, "_gpl", "");

SYMBOL_CRC(locks_start_grace, 0x02e18942, "_gpl");
SYMBOL_CRC(locks_end_grace, 0x1fe1e1ad, "_gpl");
SYMBOL_CRC(locks_in_grace, 0x6975c768, "_gpl");
SYMBOL_CRC(opens_in_grace, 0xbfb6720c, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xe5590ebd, "init_net" },
	{ 0x56470118, "__warn_printk" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x20548812, "register_pernet_subsys" },
	{ 0x279ed4c, "unregister_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

