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
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x4f9c66e8, "pci_free_irq_vectors" },
	{ 0xd79a07ea, "pci_unregister_driver" },
	{ 0xb72e7d4e, "pci_set_master" },
	{ 0x87b76953, "devm_kmalloc" },
	{ 0x7547b4a, "pci_alloc_irq_vectors" },
	{ 0x8bc25944, "pci_irq_vector" },
	{ 0x74d7bb19, "pcim_iomap" },
	{ 0xfb71ffd6, "dw8250_setup_port" },
	{ 0x5c9d418e, "devm_kmemdup" },
	{ 0x9474a7b9, "serial8250_register_8250_port" },
	{ 0x93933b99, "pcim_enable_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x88cc6f49, "dw8250_do_set_termios" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xca844bc7, "put_device" },
	{ 0xe08a224e, "pci_get_slot" },
	{ 0x95899d47, "serial8250_do_get_mctrl" },
	{ 0xbd394d8, "tty_termios_baud_rate" },
	{ 0xb0a0da0c, "rational_best_approximation" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x404cb0ec, "serial8250_get_port" },
	{ 0x423a7b8f, "__pci_register_driver" },
	{ 0xcefcd99a, "serial8250_unregister_port" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d00000936sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B96sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B97sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B98sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B99sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B9Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B9Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F0Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F0Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000228Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000228Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CE3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CE4sv*sd*bc*sc*i*");
