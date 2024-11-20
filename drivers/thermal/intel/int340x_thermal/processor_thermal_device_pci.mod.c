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
	{ 0xd79a07ea, "pci_unregister_driver" },
	{ 0x9738a5c2, "thermal_zone_device_priv" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x31846250, "pci_write_config_byte" },
	{ 0x3cefff1f, "proc_thermal_check_power_floor_intr" },
	{ 0x4456f6f0, "proc_thermal_check_wt_intr" },
	{ 0xe28725a8, "thermal_zone_device_unregister" },
	{ 0x6ae6ce30, "proc_thermal_mmio_remove" },
	{ 0x4f9c66e8, "pci_free_irq_vectors" },
	{ 0x1262a927, "devm_free_irq" },
	{ 0x434f7c99, "proc_thermal_remove" },
	{ 0x87b76953, "devm_kmalloc" },
	{ 0x93933b99, "pcim_enable_device" },
	{ 0xb72e7d4e, "pci_set_master" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9aa9c79d, "proc_thermal_mmio_add" },
	{ 0xa4f3959, "proc_thermal_add" },
	{ 0x3ea53409, "thermal_zone_device_register_with_trips" },
	{ 0x7547b4a, "pci_alloc_irq_vectors" },
	{ 0x5a549f7, "_dev_info" },
	{ 0x8bc25944, "pci_irq_vector" },
	{ 0x835712e1, "devm_request_threaded_irq" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0xb332f7f0, "thermal_zone_device_enable" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x22199426, "param_ops_bool" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x423a7b8f, "__pci_register_driver" },
	{ 0xa78af5f3, "ioread32" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x8d9d600c, "proc_thermal_resume" },
	{ 0x648c014a, "proc_thermal_suspend" },
	{ 0x87917b29, "proc_thermal_wt_intr_callback" },
	{ 0x2a887fd1, "proc_thermal_power_floor_intr_callback" },
	{ 0x94c848a2, "thermal_zone_device_update" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "processor_thermal_power_floor,processor_thermal_wt_hint,processor_thermal_device");

MODULE_ALIAS("pci:v00008086d0000461Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000641Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007D03sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000AD03sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A71Dsv*sd*bc*sc*i*");
