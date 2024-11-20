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



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x41594994, "iscsi_boot_create_initiator" },
	{ 0x9d1e6054, "pci_get_domain_bus_and_slot" },
	{ 0x5cad8430, "sysfs_create_link" },
	{ 0xf727c35a, "pci_dev_put" },
	{ 0x61a4ca69, "iscsi_boot_create_target" },
	{ 0xa5fcf5ca, "iscsi_boot_create_acpitbl" },
	{ 0x7618cd16, "iscsi_boot_create_ethernet" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0x16cdc340, "acpi_get_table" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x37a0cba, "kfree" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x7b68bebe, "sysfs_remove_link" },
	{ 0x9f18b92c, "iscsi_boot_destroy_kset" },
	{ 0xb26066fe, "ibft_phys_addr" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x122c3a7e, "_printk" },
	{ 0x938c7514, "iscsi_boot_create_kset" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "iscsi_boot_sysfs");


MODULE_INFO(srcversion, "819F7C004F3AFDDBCDB4917");
