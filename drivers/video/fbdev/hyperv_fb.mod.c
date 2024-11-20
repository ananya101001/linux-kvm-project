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
	{ 0x92f96652, "vmbus_sendpacket" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x2bf0d31, "hv_ringbuffer_spinlock_busy" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x7d26f4ce, "cfb_imageblit" },
	{ 0x5c16d8de, "cfb_copyarea" },
	{ 0x435f6dd7, "cfb_fillrect" },
	{ 0x793144fa, "vmbus_recvpacket" },
	{ 0xa6257a2f, "complete" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x4f9e213f, "vmbus_open" },
	{ 0x46a417ca, "vmbus_proto_version" },
	{ 0x7b12b28b, "framebuffer_alloc" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xab781570, "fb_get_options" },
	{ 0xfddeb056, "efi" },
	{ 0xa90c8360, "pci_get_device" },
	{ 0x25d9a822, "dma_alloc_attrs" },
	{ 0x615206e6, "vmbus_allocate_mmio" },
	{ 0x556422b3, "ioremap_cache" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0xee0118df, "aperture_remove_conflicting_devices" },
	{ 0x108892f7, "fb_deferred_io_init" },
	{ 0xec731348, "register_framebuffer" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0x85df9b6c, "strsep" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x5717123e, "alloc_pages_noprof" },
	{ 0xf727c35a, "pci_dev_put" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x259c7235, "fb_deferred_io_mmap" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xae1d2c5e, "fb_modesetting_disabled" },
	{ 0xe2eaa621, "__vmbus_driver_register" },
	{ 0x423a7b8f, "__pci_register_driver" },
	{ 0x16dbe47e, "vmbus_driver_unregister" },
	{ 0x69acdf38, "memcpy" },
	{ 0xfbaaf01e, "console_lock" },
	{ 0x128a4881, "fb_set_suspend" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x49a5f7d6, "vmbus_close" },
	{ 0xc631580a, "console_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x31e2e77f, "vmbus_free_mmio" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x54c15cee, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x686a1b5, "__free_pages" },
	{ 0x7ceeac9, "panic_notifier_list" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0xcc08d048, "fb_deferred_io_cleanup" },
	{ 0x58fcc968, "unregister_framebuffer" },
	{ 0x475cca0b, "framebuffer_release" },
	{ 0x72ef8000, "fb_io_write" },
	{ 0x37351dcc, "fb_io_read" },
	{ 0xd79a07ea, "pci_unregister_driver" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "hv_vmbus");

MODULE_ALIAS("vmbus:02780ada77e3ac4a8e770558eb1073f8");
MODULE_ALIAS("pci:v00001414d00005353sv00000000sd00000000bc*sc*i*");
