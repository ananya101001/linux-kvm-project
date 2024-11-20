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
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xbf48af60, "pnp_unregister_driver" },
	{ 0xa553201f, "platform_driver_unregister" },
	{ 0xfd4a5a9c, "platform_device_unregister" },
	{ 0x848d372e, "iowrite8" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x87b76953, "devm_kmalloc" },
	{ 0x77dfecf7, "devm_ioremap_resource" },
	{ 0xfa017be3, "is_acpi_device_node" },
	{ 0xbcc1f9a6, "tpm_tis_core_init" },
	{ 0xbc1252bb, "__platform_driver_register" },
	{ 0xabd7072d, "pnp_register_driver" },
	{ 0xd081dfa2, "platform_device_register_full" },
	{ 0xc38ad5e7, "pnp_get_resource" },
	{ 0x1d8e83ac, "platform_get_resource" },
	{ 0x430fdae1, "platform_get_irq_optional" },
	{ 0x19a55fde, "param_ops_string" },
	{ 0xdde2ffa0, "tpm_pm_suspend" },
	{ 0x9d4f711a, "tpm_tis_resume" },
	{ 0x22199426, "param_ops_bool" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7693a0ac, "tpm_chip_unregister" },
	{ 0x5e9bdd72, "tpm_tis_remove" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x842c8e9d, "ioread16" },
	{ 0xb19b445, "ioread8" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xa5a91f98, "acpi_match_device" },
	{ 0x16cdc340, "acpi_get_table" },
	{ 0x92b99a33, "acpi_put_table" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "tpm_tis_core,tpm");

MODULE_ALIAS("pnp:dPNP0C31*");
MODULE_ALIAS("acpi*:PNP0C31:*");
MODULE_ALIAS("pnp:dATM1200*");
MODULE_ALIAS("acpi*:ATM1200:*");
MODULE_ALIAS("pnp:dIFX0102*");
MODULE_ALIAS("acpi*:IFX0102:*");
MODULE_ALIAS("pnp:dBCM0101*");
MODULE_ALIAS("acpi*:BCM0101:*");
MODULE_ALIAS("pnp:dBCM0102*");
MODULE_ALIAS("acpi*:BCM0102:*");
MODULE_ALIAS("pnp:dNSC1200*");
MODULE_ALIAS("acpi*:NSC1200:*");
MODULE_ALIAS("pnp:dICO0102*");
MODULE_ALIAS("acpi*:ICO0102:*");
MODULE_ALIAS("pnp:d*");
MODULE_ALIAS("acpi*::*");
MODULE_ALIAS("acpi*:MSFT0101:*");

MODULE_INFO(srcversion, "B3618366C7951F6BF3CF67C");
