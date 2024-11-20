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
	{ 0x2eef99be, "pci_bus_set_ops" },
	{ 0x37a0cba, "kfree" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x9d1e6054, "pci_get_domain_bus_and_slot" },
	{ 0x3be2ccd0, "pci_read_config_dword" },
	{ 0xf727c35a, "pci_dev_put" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0x3d647afc, "pci_write_config_dword" },
	{ 0x3e76b0c0, "pcie_port_find_device" },
	{ 0x5a549f7, "_dev_info" },
	{ 0x572004d9, "irq_inject_interrupt" },
	{ 0x2a71977a, "noop_llseek" },
	{ 0x22199426, "param_ops_bool" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xea43f98d, "misc_register" },
	{ 0xf80d81c2, "misc_deregister" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

