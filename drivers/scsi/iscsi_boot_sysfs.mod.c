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

KSYMTAB_FUNC(iscsi_boot_create_target, "_gpl", "");
KSYMTAB_FUNC(iscsi_boot_create_initiator, "_gpl", "");
KSYMTAB_FUNC(iscsi_boot_create_ethernet, "_gpl", "");
KSYMTAB_FUNC(iscsi_boot_create_acpitbl, "_gpl", "");
KSYMTAB_FUNC(iscsi_boot_create_kset, "_gpl", "");
KSYMTAB_FUNC(iscsi_boot_create_host_kset, "_gpl", "");
KSYMTAB_FUNC(iscsi_boot_destroy_kset, "_gpl", "");

SYMBOL_CRC(iscsi_boot_create_target, 0x61a4ca69, "_gpl");
SYMBOL_CRC(iscsi_boot_create_initiator, 0x41594994, "_gpl");
SYMBOL_CRC(iscsi_boot_create_ethernet, 0x7618cd16, "_gpl");
SYMBOL_CRC(iscsi_boot_create_acpitbl, 0xa5fcf5ca, "_gpl");
SYMBOL_CRC(iscsi_boot_create_kset, 0x938c7514, "_gpl");
SYMBOL_CRC(iscsi_boot_create_host_kset, 0x461900cf, "_gpl");
SYMBOL_CRC(iscsi_boot_destroy_kset, 0x9f18b92c, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xc6cbbc89, "capable" },
	{ 0x37a0cba, "kfree" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x980d5636, "sysfs_remove_group" },
	{ 0x7ab30f45, "kobject_put" },
	{ 0xb4fd855b, "kset_unregister" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xc83dee71, "firmware_kobj" },
	{ 0xaf77d964, "kset_create_and_add" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x9f7d1bf1, "kobject_init_and_add" },
	{ 0xa1b7a4fb, "sysfs_create_group" },
	{ 0xaedb2a25, "kobject_uevent" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

