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

KSYMTAB_FUNC(vp_modern_probe, "_gpl", "");
KSYMTAB_FUNC(vp_modern_remove, "_gpl", "");
KSYMTAB_FUNC(vp_modern_get_features, "_gpl", "");
KSYMTAB_FUNC(vp_modern_get_driver_features, "_gpl", "");
KSYMTAB_FUNC(vp_modern_set_features, "_gpl", "");
KSYMTAB_FUNC(vp_modern_generation, "_gpl", "");
KSYMTAB_FUNC(vp_modern_get_status, "_gpl", "");
KSYMTAB_FUNC(vp_modern_set_status, "_gpl", "");
KSYMTAB_FUNC(vp_modern_get_queue_reset, "_gpl", "");
KSYMTAB_FUNC(vp_modern_set_queue_reset, "_gpl", "");
KSYMTAB_FUNC(vp_modern_queue_vector, "_gpl", "");
KSYMTAB_FUNC(vp_modern_config_vector, "_gpl", "");
KSYMTAB_FUNC(vp_modern_queue_address, "_gpl", "");
KSYMTAB_FUNC(vp_modern_set_queue_enable, "_gpl", "");
KSYMTAB_FUNC(vp_modern_get_queue_enable, "_gpl", "");
KSYMTAB_FUNC(vp_modern_set_queue_size, "_gpl", "");
KSYMTAB_FUNC(vp_modern_get_queue_size, "_gpl", "");
KSYMTAB_FUNC(vp_modern_get_num_queues, "_gpl", "");
KSYMTAB_FUNC(vp_modern_map_vq_notify, "_gpl", "");
KSYMTAB_FUNC(vp_modern_avq_num, "_gpl", "");
KSYMTAB_FUNC(vp_modern_avq_index, "_gpl", "");

SYMBOL_CRC(vp_modern_probe, 0xa3564bc0, "_gpl");
SYMBOL_CRC(vp_modern_remove, 0xe3e6221c, "_gpl");
SYMBOL_CRC(vp_modern_get_features, 0x75d46ab6, "_gpl");
SYMBOL_CRC(vp_modern_get_driver_features, 0x24623c39, "_gpl");
SYMBOL_CRC(vp_modern_set_features, 0x735f564b, "_gpl");
SYMBOL_CRC(vp_modern_generation, 0xba94dc21, "_gpl");
SYMBOL_CRC(vp_modern_get_status, 0xde316982, "_gpl");
SYMBOL_CRC(vp_modern_set_status, 0xc6607011, "_gpl");
SYMBOL_CRC(vp_modern_get_queue_reset, 0x40c8a3b1, "_gpl");
SYMBOL_CRC(vp_modern_set_queue_reset, 0xb82b6f32, "_gpl");
SYMBOL_CRC(vp_modern_queue_vector, 0x954244a6, "_gpl");
SYMBOL_CRC(vp_modern_config_vector, 0xedd0ae27, "_gpl");
SYMBOL_CRC(vp_modern_queue_address, 0xf103cbd4, "_gpl");
SYMBOL_CRC(vp_modern_set_queue_enable, 0x8fd72380, "_gpl");
SYMBOL_CRC(vp_modern_get_queue_enable, 0x98b31dcc, "_gpl");
SYMBOL_CRC(vp_modern_set_queue_size, 0x13976548, "_gpl");
SYMBOL_CRC(vp_modern_get_queue_size, 0x9adc3483, "_gpl");
SYMBOL_CRC(vp_modern_get_num_queues, 0x2ec464b8, "_gpl");
SYMBOL_CRC(vp_modern_map_vq_notify, 0x49588df6, "_gpl");
SYMBOL_CRC(vp_modern_avq_num, 0xcde0150b, "_gpl");
SYMBOL_CRC(vp_modern_avq_index, 0xb51fc290, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfee4f4c, "pci_iounmap" },
	{ 0x3dae33b, "pci_release_selected_regions" },
	{ 0x798dd6b1, "pci_read_config_byte" },
	{ 0x3be2ccd0, "pci_read_config_dword" },
	{ 0xe8c1f7a0, "pci_iomap_range" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xb19b445, "ioread8" },
	{ 0x848d372e, "iowrite8" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x842c8e9d, "ioread16" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0xf9a482f9, "msleep" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x7188fd5f, "pci_find_capability" },
	{ 0x5862fff7, "pci_find_next_capability" },
	{ 0x5a549f7, "_dev_info" },
	{ 0xe1779b47, "dma_set_mask" },
	{ 0xc9751130, "pci_request_selected_regions" },
	{ 0x4dce513f, "dma_set_coherent_mask" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "82E423363CB8EDBD367A4CE");
