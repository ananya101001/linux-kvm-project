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
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x4b7a7326, "devm_platform_ioremap_resource" },
	{ 0xe1779b47, "dma_set_mask" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0xba08b402, "register_virtio_device" },
	{ 0xca844bc7, "put_device" },
	{ 0x4dce513f, "dma_set_coherent_mask" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdd878a8b, "vring_create_virtqueue" },
	{ 0x7e9de5c, "virtqueue_get_vring_size" },
	{ 0x83bc98ea, "virtqueue_get_desc_addr" },
	{ 0x549b9af5, "virtqueue_get_avail_addr" },
	{ 0x9622d79c, "virtqueue_get_used_addr" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xbc1252bb, "__platform_driver_register" },
	{ 0xb7ed4798, "virtio_device_restore" },
	{ 0x78e2f8f0, "virtio_device_freeze" },
	{ 0x12de865a, "unregister_virtio_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x56bc433d, "vring_transport_features" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0x9a8124c7, "platform_get_irq" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x242da41b, "vring_del_virtqueue" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xff05fa13, "vring_interrupt" },
	{ 0xcbfbe3ec, "virtio_config_changed" },
	{ 0xc55f8efa, "vring_notification_data" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xa553201f, "platform_driver_unregister" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "virtio,virtio_ring");

MODULE_ALIAS("acpi*:LNRO0005:*");
MODULE_ALIAS("of:N*T*Cvirtio,mmio");
MODULE_ALIAS("of:N*T*Cvirtio,mmioC*");
