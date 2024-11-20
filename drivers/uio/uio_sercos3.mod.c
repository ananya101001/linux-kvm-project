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
	{ 0x544253f5, "pci_disable_device" },
	{ 0xedc03953, "iounmap" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xd79a07ea, "pci_unregister_driver" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x87b76953, "devm_kmalloc" },
	{ 0xaad21b46, "pci_enable_device" },
	{ 0xb2cacf1e, "pci_request_regions" },
	{ 0xde80cd09, "ioremap" },
	{ 0x4d175ef4, "__uio_register_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x423a7b8f, "__pci_register_driver" },
	{ 0x308786e4, "uio_unregister_device" },
	{ 0xdfaa93c9, "pci_release_regions" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "uio");

