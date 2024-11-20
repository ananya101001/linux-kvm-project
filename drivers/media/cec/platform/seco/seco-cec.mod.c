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
	{ 0x7c07cb36, "device_match_name" },
	{ 0xe2eaa37c, "pci_bus_type" },
	{ 0x715c1ea4, "bus_find_device" },
	{ 0xca844bc7, "put_device" },
	{ 0x87b76953, "devm_kmalloc" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x85bd1608, "__request_region" },
	{ 0xfa017be3, "is_acpi_device_node" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0x6cc72ac6, "__dynamic_dev_dbg" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x24d85d12, "cec_notifier_cec_adap_unregister" },
	{ 0xbc7a699, "cec_unregister_adapter" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbc1252bb, "__platform_driver_register" },
	{ 0xa553201f, "platform_driver_unregister" },
	{ 0x78ddb76b, "dmi_match" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "cec");

MODULE_ALIAS("acpi*:CEC00001:*");
