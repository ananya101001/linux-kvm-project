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
	{ 0x6ae6ce30, "proc_thermal_mmio_remove" },
	{ 0x434f7c99, "proc_thermal_remove" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xeb5f167, "pci_disable_msi" },
	{ 0xb5bbd7ad, "intel_soc_dts_iosf_interrupt_handler" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x93933b99, "pcim_enable_device" },
	{ 0x87b76953, "devm_kmalloc" },
	{ 0xa4f3959, "proc_thermal_add" },
	{ 0x9aa9c79d, "proc_thermal_mmio_add" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0xc7100ae, "intel_soc_dts_iosf_init" },
	{ 0xa8cd646d, "pci_enable_msi" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xd79a07ea, "pci_unregister_driver" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x423a7b8f, "__pci_register_driver" },
	{ 0x8d9d600c, "proc_thermal_resume" },
	{ 0x648c014a, "proc_thermal_suspend" },
	{ 0xf235e592, "intel_soc_dts_iosf_exit" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "processor_thermal_device,intel_soc_dts_iosf");

MODULE_ALIAS("pci:v00008086d00001603sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022DCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A8Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001A8Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004A8Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005A8Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005A03sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003E83sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000318Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A03sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008A03sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004E03sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001903sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009A03sv*sd*bc*sc*i*");
