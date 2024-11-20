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

KSYMTAB_FUNC(sas_remove_children, "", "");
KSYMTAB_FUNC(sas_remove_host, "", "");
KSYMTAB_FUNC(sas_get_address, "", "");
KSYMTAB_FUNC(sas_tlr_supported, "_gpl", "");
KSYMTAB_FUNC(sas_disable_tlr, "_gpl", "");
KSYMTAB_FUNC(sas_enable_tlr, "_gpl", "");
KSYMTAB_FUNC(sas_is_tlr_enabled, "_gpl", "");
KSYMTAB_FUNC(sas_ata_ncq_prio_supported, "_gpl", "");
KSYMTAB_FUNC(sas_phy_alloc, "", "");
KSYMTAB_FUNC(sas_phy_add, "", "");
KSYMTAB_FUNC(sas_phy_free, "", "");
KSYMTAB_FUNC(sas_phy_delete, "", "");
KSYMTAB_FUNC(scsi_is_sas_phy, "", "");
KSYMTAB_FUNC(sas_port_alloc, "", "");
KSYMTAB_FUNC(sas_port_alloc_num, "", "");
KSYMTAB_FUNC(sas_port_add, "", "");
KSYMTAB_FUNC(sas_port_free, "", "");
KSYMTAB_FUNC(sas_port_delete, "", "");
KSYMTAB_FUNC(scsi_is_sas_port, "", "");
KSYMTAB_FUNC(sas_port_get_phy, "", "");
KSYMTAB_FUNC(sas_port_add_phy, "", "");
KSYMTAB_FUNC(sas_port_delete_phy, "", "");
KSYMTAB_FUNC(sas_port_mark_backlink, "", "");
KSYMTAB_FUNC(sas_read_port_mode_page, "", "");
KSYMTAB_FUNC(sas_end_device_alloc, "", "");
KSYMTAB_FUNC(sas_expander_alloc, "", "");
KSYMTAB_FUNC(sas_rphy_add, "", "");
KSYMTAB_FUNC(sas_rphy_free, "", "");
KSYMTAB_FUNC(sas_rphy_delete, "", "");
KSYMTAB_FUNC(sas_rphy_unlink, "", "");
KSYMTAB_FUNC(sas_rphy_remove, "", "");
KSYMTAB_FUNC(scsi_is_sas_rphy, "", "");
KSYMTAB_FUNC(sas_attach_transport, "", "");
KSYMTAB_FUNC(sas_release_transport, "", "");

SYMBOL_CRC(sas_remove_children, 0x7fc45931, "");
SYMBOL_CRC(sas_remove_host, 0xcf4170fe, "");
SYMBOL_CRC(sas_get_address, 0xe1b1ee0a, "");
SYMBOL_CRC(sas_tlr_supported, 0x60ac255d, "_gpl");
SYMBOL_CRC(sas_disable_tlr, 0xb22459d2, "_gpl");
SYMBOL_CRC(sas_enable_tlr, 0x113e8aff, "_gpl");
SYMBOL_CRC(sas_is_tlr_enabled, 0x7e03d8a7, "_gpl");
SYMBOL_CRC(sas_ata_ncq_prio_supported, 0x9b43d9c6, "_gpl");
SYMBOL_CRC(sas_phy_alloc, 0x4c7a1d0b, "");
SYMBOL_CRC(sas_phy_add, 0xd1d317cc, "");
SYMBOL_CRC(sas_phy_free, 0x8bc46e82, "");
SYMBOL_CRC(sas_phy_delete, 0x696651a2, "");
SYMBOL_CRC(scsi_is_sas_phy, 0xd35922f5, "");
SYMBOL_CRC(sas_port_alloc, 0xf47769d5, "");
SYMBOL_CRC(sas_port_alloc_num, 0x17fe7349, "");
SYMBOL_CRC(sas_port_add, 0x7bcb3aa4, "");
SYMBOL_CRC(sas_port_free, 0x4f02c77a, "");
SYMBOL_CRC(sas_port_delete, 0xd87ea073, "");
SYMBOL_CRC(scsi_is_sas_port, 0x4f3ef779, "");
SYMBOL_CRC(sas_port_get_phy, 0xcbf557ce, "");
SYMBOL_CRC(sas_port_add_phy, 0x78849a78, "");
SYMBOL_CRC(sas_port_delete_phy, 0x792e26fc, "");
SYMBOL_CRC(sas_port_mark_backlink, 0xc405fca5, "");
SYMBOL_CRC(sas_read_port_mode_page, 0x29ff0c4c, "");
SYMBOL_CRC(sas_end_device_alloc, 0x4d238193, "");
SYMBOL_CRC(sas_expander_alloc, 0xead86383, "");
SYMBOL_CRC(sas_rphy_add, 0xd4c625d7, "");
SYMBOL_CRC(sas_rphy_free, 0x8a0d651a, "");
SYMBOL_CRC(sas_rphy_delete, 0xa4217cea, "");
SYMBOL_CRC(sas_rphy_unlink, 0x16315d3c, "");
SYMBOL_CRC(sas_rphy_remove, 0x6fb78a13, "");
SYMBOL_CRC(scsi_is_sas_rphy, 0x8dece61e, "");
SYMBOL_CRC(sas_attach_transport, 0xa8b4ee43, "");
SYMBOL_CRC(sas_release_transport, 0x7c95f02b, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x5b6107f5, "attribute_container_register" },
	{ 0x7b68bebe, "sysfs_remove_link" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xe3a61ac6, "_dev_printk" },
	{ 0x868e51aa, "attribute_container_unregister" },
	{ 0xa4c8accd, "scsi_remove_host" },
	{ 0x5cab88c4, "scsi_get_vpd_page" },
	{ 0x2ab3d198, "scsi_mode_sense" },
	{ 0xf9f60b42, "bsg_remove_queue" },
	{ 0x47120c82, "scsi_remove_target" },
	{ 0x6a6d16d1, "scsi_is_host_device" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0x765cf494, "bsg_job_done" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xa64ac162, "dma_opt_mapping_size" },
	{ 0xe7fa695f, "device_initialize" },
	{ 0xc6f15b39, "dev_set_name" },
	{ 0x398c28ae, "transport_setup_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x80b29ea5, "device_for_each_child" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xca844bc7, "put_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x934ea33f, "device_add" },
	{ 0xaff1c4a0, "transport_add_device" },
	{ 0xaa9104fb, "transport_configure_device" },
	{ 0xc04e9955, "device_del" },
	{ 0x538d6f90, "transport_destroy_device" },
	{ 0x11d5d485, "transport_remove_device" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3131271a, "get_device" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5cad8430, "sysfs_create_link" },
	{ 0x122c3a7e, "_printk" },
	{ 0xd6b64063, "scsi_scan_target" },
	{ 0x3a731c00, "bsg_setup_queue" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x754d539c, "strlen" },
	{ 0x5a921311, "strncmp" },
	{ 0x64925e0c, "transport_class_register" },
	{ 0x49367283, "transport_class_unregister" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "scsi_mod");

