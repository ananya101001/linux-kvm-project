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

KSYMTAB_FUNC(vp_legacy_probe, "_gpl", "");
KSYMTAB_FUNC(vp_legacy_remove, "_gpl", "");
KSYMTAB_FUNC(vp_legacy_get_features, "_gpl", "");
KSYMTAB_FUNC(vp_legacy_get_driver_features, "_gpl", "");
KSYMTAB_FUNC(vp_legacy_set_features, "_gpl", "");
KSYMTAB_FUNC(vp_legacy_get_status, "_gpl", "");
KSYMTAB_FUNC(vp_legacy_set_status, "_gpl", "");
KSYMTAB_FUNC(vp_legacy_queue_vector, "_gpl", "");
KSYMTAB_FUNC(vp_legacy_config_vector, "_gpl", "");
KSYMTAB_FUNC(vp_legacy_set_queue_address, "_gpl", "");
KSYMTAB_FUNC(vp_legacy_get_queue_enable, "_gpl", "");
KSYMTAB_FUNC(vp_legacy_get_queue_size, "_gpl", "");

SYMBOL_CRC(vp_legacy_probe, 0x94c3a198, "_gpl");
SYMBOL_CRC(vp_legacy_remove, 0x32d73b3c, "_gpl");
SYMBOL_CRC(vp_legacy_get_features, 0x3b58ae06, "_gpl");
SYMBOL_CRC(vp_legacy_get_driver_features, 0x1c8b04e8, "_gpl");
SYMBOL_CRC(vp_legacy_set_features, 0x02c9b27d, "_gpl");
SYMBOL_CRC(vp_legacy_get_status, 0xda555aab, "_gpl");
SYMBOL_CRC(vp_legacy_set_status, 0xca68a267, "_gpl");
SYMBOL_CRC(vp_legacy_queue_vector, 0x4f902993, "_gpl");
SYMBOL_CRC(vp_legacy_config_vector, 0x156f8079, "_gpl");
SYMBOL_CRC(vp_legacy_set_queue_address, 0x6111a40c, "_gpl");
SYMBOL_CRC(vp_legacy_get_queue_enable, 0x6bd5f5fe, "_gpl");
SYMBOL_CRC(vp_legacy_get_queue_size, 0x11ea0a09, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfee4f4c, "pci_iounmap" },
	{ 0xa85ba472, "pci_release_region" },
	{ 0xa78af5f3, "ioread32" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xb19b445, "ioread8" },
	{ 0x848d372e, "iowrite8" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x842c8e9d, "ioread16" },
	{ 0xe1779b47, "dma_set_mask" },
	{ 0x4dce513f, "dma_set_coherent_mask" },
	{ 0xec0e3281, "pci_request_region" },
	{ 0x1f48acd, "pci_iomap" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B166D1C71CE630F00545238");
