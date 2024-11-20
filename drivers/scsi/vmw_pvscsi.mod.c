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
	{ 0x8ffb42d6, "scsi_device_put" },
	{ 0x72705ca2, "scsi_host_put" },
	{ 0x4d0bac1, "scsi_remove_device" },
	{ 0xc67c7580, "scsi_add_device" },
	{ 0xd79a07ea, "pci_unregister_driver" },
	{ 0xecbb1768, "scsi_done" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xa6257a2f, "complete" },
	{ 0x6e96bbd6, "scmd_printk" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x8bc25944, "pci_irq_vector" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x4f9c66e8, "pci_free_irq_vectors" },
	{ 0xa4c8accd, "scsi_remove_host" },
	{ 0x544253f5, "pci_disable_device" },
	{ 0xaad21b46, "pci_enable_device" },
	{ 0xe1779b47, "dma_set_mask" },
	{ 0x4dce513f, "dma_set_coherent_mask" },
	{ 0xb2cacf1e, "pci_request_regions" },
	{ 0x1f48acd, "pci_iomap" },
	{ 0xb72e7d4e, "pci_set_master" },
	{ 0x25d9a822, "dma_alloc_attrs" },
	{ 0x7b1a0218, "scsi_host_alloc" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xccf69887, "get_free_pages_noprof" },
	{ 0x7547b4a, "pci_alloc_irq_vectors" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x483e46cf, "scsi_add_host_with_dma" },
	{ 0x5a549f7, "_dev_info" },
	{ 0xd1e3ccd, "scsi_scan_host" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x28beaeee, "dma_map_page_attrs" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x3a337acd, "scsi_dma_map" },
	{ 0xfbe215e4, "sg_next" },
	{ 0xee99c7ef, "dev_driver_string" },
	{ 0x56470118, "__warn_printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x22199426, "param_ops_bool" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x122c3a7e, "_printk" },
	{ 0x423a7b8f, "__pci_register_driver" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6cc72ac6, "__dynamic_dev_dbg" },
	{ 0x14cca081, "scsi_dma_unmap" },
	{ 0x204033c7, "dma_unmap_page_attrs" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xbfee4f4c, "pci_iounmap" },
	{ 0xdfaa93c9, "pci_release_regions" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x37a0cba, "kfree" },
	{ 0x54c15cee, "dma_free_attrs" },
	{ 0x3cb5f497, "scsi_change_queue_depth" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xfb578fc5, "memset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x79882c4b, "scsi_host_get" },
	{ 0xaef41929, "scsi_device_lookup" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "scsi_mod");

MODULE_ALIAS("pci:v000015ADd000007C0sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "CA5FE2ACF307E2990DFCFA5");
