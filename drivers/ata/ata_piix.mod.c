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
	{ 0x846f6284, "ata_pci_remove_one" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5ef22cf2, "__tracepoint_ata_bmdma_status" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xc3e1021c, "__SCT__tp_func_ata_bmdma_status" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0xab1fc568, "ata_bmdma_port_start" },
	{ 0xe71f9ab8, "sata_link_scr_lpm" },
	{ 0x914979ad, "ata_bmdma_status" },
	{ 0xf44ff2bd, "ata_pio_need_iordy" },
	{ 0x797e5068, "pci_read_config_word" },
	{ 0x66db1387, "pci_write_config_word" },
	{ 0x798dd6b1, "pci_read_config_byte" },
	{ 0x31846250, "pci_write_config_byte" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xd55f1331, "pci_test_config_bits" },
	{ 0x5224ac0c, "ata_sff_prereset" },
	{ 0xd79a07ea, "pci_unregister_driver" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xa78af5f3, "ioread32" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0x5a549f7, "_dev_info" },
	{ 0x93933b99, "pcim_enable_device" },
	{ 0x87b76953, "devm_kmalloc" },
	{ 0x3be2ccd0, "pci_read_config_dword" },
	{ 0x72885f67, "ata_pci_bmdma_prepare_host" },
	{ 0xb00faf06, "ata_print_version" },
	{ 0xa90c8360, "pci_get_device" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0xb72e7d4e, "pci_set_master" },
	{ 0xe818b32b, "ata_bmdma_interrupt" },
	{ 0xb0ab7514, "ata_pci_sff_activate_host" },
	{ 0x96848186, "scnprintf" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeba8abe7, "pcim_iomap_regions" },
	{ 0x6c8ac046, "pcim_iomap_table" },
	{ 0x1f48acd, "pci_iomap" },
	{ 0xbfee4f4c, "pci_iounmap" },
	{ 0xb974d643, "pci_intx" },
	{ 0x17356153, "ata_slave_link_init" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0x3de6d2c7, "sata_std_hardreset" },
	{ 0x3961437f, "ata_scsi_queuecmd" },
	{ 0x42827bb9, "ata_scsi_ioctl" },
	{ 0x420e4a09, "ata_scsi_slave_alloc" },
	{ 0x868115d3, "ata_scsi_device_configure" },
	{ 0x4d4e0c88, "ata_scsi_slave_destroy" },
	{ 0x2a9aeceb, "ata_scsi_dma_need_drain" },
	{ 0xf40a7d3d, "ata_std_bios_param" },
	{ 0x24352122, "ata_scsi_unlock_native_capacity" },
	{ 0x7d89113d, "ata_common_sdev_groups" },
	{ 0xdca79bb6, "dev_attr_link_power_management_policy" },
	{ 0xfd1e4c78, "ata_cable_40wire" },
	{ 0x7b9516ee, "ata_bmdma32_port_ops" },
	{ 0xe820eed4, "__SCK__tp_func_ata_bmdma_status" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x423a7b8f, "__pci_register_driver" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xab25598b, "pci_set_power_state" },
	{ 0x4e64974, "pci_restore_state" },
	{ 0x5885202d, "pci_reenable_device" },
	{ 0xa5696cf2, "ata_host_resume" },
	{ 0x228cfd2c, "ata_pci_device_do_resume" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0xac960313, "ata_host_suspend" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xf8233514, "ata_pci_device_do_suspend" },
	{ 0xf635e4fa, "pci_save_state" },
	{ 0x78ddb76b, "dmi_match" },
	{ 0x3d647afc, "pci_write_config_dword" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "libata");

MODULE_ALIAS("pci:v00008086d00007010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007111sv000015ADsd00001976bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007111sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007199sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000084CAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002411sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002421sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000244Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000244Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000248Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000248Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024C1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024CAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024CBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024DBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000245Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000025A2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000266Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000269Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002850sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024D1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000025A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000025B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002651sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002652sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002653sv*sd*bc01sc01i*");
MODULE_ALIAS("pci:v00008086d000027C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002680sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002820sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002825sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002828sv0000106Bsd000000A0bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002828sv0000106Bsd000000A1bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002828sv0000106Bsd000000A3bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002828sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002920sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002921sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002926sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002928sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000292Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000292Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005028sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003A00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003A06sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003A20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003A26sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B21sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B26sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B28sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B2Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B2Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C01sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C09sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E01sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E09sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C01sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C09sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C01sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C09sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002326sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F21sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F31sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D60sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D68sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F21sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000023A6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C88sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C89sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C80sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C81sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "9830ECC1BCADCBD4B5BEED2");
