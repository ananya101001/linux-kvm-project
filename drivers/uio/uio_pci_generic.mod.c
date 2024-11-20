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
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x71f1d83b, "pci_clear_master" },
	{ 0x93933b99, "pcim_enable_device" },
	{ 0x87b76953, "devm_kmalloc" },
	{ 0xe367f9c, "__devm_uio_register_device" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0xd79a07ea, "pci_unregister_driver" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x423a7b8f, "__pci_register_driver" },
	{ 0x35f3a007, "pci_check_and_mask_intx" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "uio");


MODULE_INFO(srcversion, "57391C301CEDB961E1B049A");
