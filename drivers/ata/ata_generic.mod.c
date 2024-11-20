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
	{ 0x797e5068, "pci_read_config_word" },
	{ 0x73db91c5, "ata_pci_bmdma_init_one" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x3be2ccd0, "pci_read_config_dword" },
	{ 0x93933b99, "pcim_enable_device" },
	{ 0xde8c04b4, "pcim_pin_device" },
	{ 0x29cd9354, "ata_pci_bmdma_clear_simplex" },
	{ 0x66db1387, "pci_write_config_word" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb19b445, "ioread8" },
	{ 0x5602f237, "ata_dev_next" },
	{ 0x30cbca2, "ata_id_xfermask" },
	{ 0x6a9e90af, "ata_mode_string" },
	{ 0x122c3a7e, "_printk" },
	{ 0xc2368ea5, "ata_xfer_mask2mode" },
	{ 0x58db1176, "ata_xfer_mode2shift" },
	{ 0xe77d5ef3, "ata_xfer_mode2mask" },
	{ 0xd79a07ea, "pci_unregister_driver" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0x846f6284, "ata_pci_remove_one" },
	{ 0x17464b61, "ata_pci_device_suspend" },
	{ 0x76606efa, "ata_pci_device_resume" },
	{ 0x845225a3, "ata_cable_unknown" },
	{ 0xacb867c3, "ata_bmdma_port_ops" },
	{ 0x3961437f, "ata_scsi_queuecmd" },
	{ 0x42827bb9, "ata_scsi_ioctl" },
	{ 0x420e4a09, "ata_scsi_slave_alloc" },
	{ 0x868115d3, "ata_scsi_device_configure" },
	{ 0x4d4e0c88, "ata_scsi_slave_destroy" },
	{ 0x2a9aeceb, "ata_scsi_dma_need_drain" },
	{ 0xf40a7d3d, "ata_std_bios_param" },
	{ 0x24352122, "ata_scsi_unlock_native_capacity" },
	{ 0x7d89113d, "ata_common_sdev_groups" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x423a7b8f, "__pci_register_driver" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "libata");

MODULE_ALIAS("pci:v00001042d00003020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009412d00006565sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001060d00000101sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001060d0000886Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001060d0000673Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00003388d00008013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00000561sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001045d0000C558sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016CAd00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001179d00000101sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001179d00000102sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001179d00000103sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001179d00000105sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d*sv*sd*bc01sc01i*");
MODULE_ALIAS("pci:v*d*sv*sd*bc01sc01i*");

MODULE_INFO(srcversion, "DE5BE12C2D86CCCFA9B6FA0");
