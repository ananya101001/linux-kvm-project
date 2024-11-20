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

KSYMTAB_FUNC(spi_dv_device, "", "");
KSYMTAB_FUNC(spi_schedule_dv_device, "", "");
KSYMTAB_FUNC(spi_display_xfer_agreement, "", "");
KSYMTAB_FUNC(spi_populate_width_msg, "_gpl", "");
KSYMTAB_FUNC(spi_populate_sync_msg, "_gpl", "");
KSYMTAB_FUNC(spi_populate_ppr_msg, "_gpl", "");
KSYMTAB_FUNC(spi_populate_tag_msg, "_gpl", "");
KSYMTAB_FUNC(spi_print_msg, "", "");
KSYMTAB_FUNC(spi_attach_transport, "", "");
KSYMTAB_FUNC(spi_release_transport, "", "");

SYMBOL_CRC(spi_dv_device, 0xd9005815, "");
SYMBOL_CRC(spi_schedule_dv_device, 0x564833e8, "");
SYMBOL_CRC(spi_display_xfer_agreement, 0x998e3d4d, "");
SYMBOL_CRC(spi_populate_width_msg, 0xcffa2aff, "_gpl");
SYMBOL_CRC(spi_populate_sync_msg, 0xa0c71dac, "_gpl");
SYMBOL_CRC(spi_populate_ppr_msg, 0x0ef06974, "_gpl");
SYMBOL_CRC(spi_populate_tag_msg, 0xba4ed705, "_gpl");
SYMBOL_CRC(spi_print_msg, 0x3686ea09, "");
SYMBOL_CRC(spi_attach_transport, 0x957e4aee, "");
SYMBOL_CRC(spi_release_transport, 0x87056e71, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x868e51aa, "attribute_container_unregister" },
	{ 0x5b6107f5, "attribute_container_register" },
	{ 0xa2fdd002, "sysfs_chmod_file" },
	{ 0x4df930a2, "scsi_is_target_device" },
	{ 0x5a921311, "strncmp" },
	{ 0x754d539c, "strlen" },
	{ 0x122c3a7e, "_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xe3a61ac6, "_dev_printk" },
	{ 0x5407a918, "scsi_execute_cmd" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xfb578fc5, "memset" },
	{ 0xf83473a0, "scsi_device_set_state" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xcfeca16c, "sdev_prefix_printk" },
	{ 0x6a6d16d1, "scsi_is_host_device" },
	{ 0x80b29ea5, "device_for_each_child" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcd81c852, "sysfs_update_group" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x204c5067, "scsi_dev_info_add_list" },
	{ 0x2733eaf7, "scsi_dev_info_list_add_keyed" },
	{ 0x64925e0c, "transport_class_register" },
	{ 0x2a707ee, "anon_transport_class_register" },
	{ 0xe1983f5d, "scsi_get_device_flags_keyed" },
	{ 0x5a549f7, "_dev_info" },
	{ 0x49367283, "transport_class_unregister" },
	{ 0xdd9ccbea, "anon_transport_class_unregister" },
	{ 0x97bdfa60, "scsi_dev_info_remove_list" },
	{ 0x18b1a5c4, "scsi_is_sdev_device" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x51085e3, "lock_system_sleep" },
	{ 0x9898486b, "scsi_autopm_get_device" },
	{ 0xf2cf1a80, "scsi_device_get" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xc5d95c50, "scsi_device_quiesce" },
	{ 0xca08a9bb, "scsi_target_quiesce" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3d01eb12, "scsi_target_resume" },
	{ 0x37a0cba, "kfree" },
	{ 0x8ffb42d6, "scsi_device_put" },
	{ 0x64498edb, "scsi_autopm_put_device" },
	{ 0x893c5ddb, "unlock_system_sleep" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "scsi_mod");

