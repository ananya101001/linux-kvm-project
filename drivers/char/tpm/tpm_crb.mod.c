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
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0x37a0cba, "kfree" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0x72df167b, "acpi_dev_get_resources" },
	{ 0xdc6699cb, "acpi_dev_free_resource_list" },
	{ 0x6cc72ac6, "__dynamic_dev_dbg" },
	{ 0x16cdc340, "acpi_get_table" },
	{ 0x87b76953, "devm_kmalloc" },
	{ 0x9e05b967, "acpi_device_hid" },
	{ 0x8edbdaa3, "tpmm_chip_alloc" },
	{ 0x64fe6428, "tpm_chip_bootstrap" },
	{ 0x3426ac54, "boot_cpu_data" },
	{ 0x3c3001c3, "tpm_chip_register" },
	{ 0x92b99a33, "acpi_put_table" },
	{ 0x5a549f7, "_dev_info" },
	{ 0xdde2ffa0, "tpm_pm_suspend" },
	{ 0x81781854, "tpm_pm_resume" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfc167278, "__acpi_bus_register_driver" },
	{ 0x7693a0ac, "tpm_chip_unregister" },
	{ 0xa78af5f3, "ioread32" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x77dfecf7, "devm_ioremap_resource" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x52213722, "acpi_dev_resource_memory" },
	{ 0xd3901d33, "acpi_dev_resource_address_space" },
	{ 0x3f941f1b, "acpi_bus_unregister_driver" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "tpm");

MODULE_ALIAS("acpi*:MSFT0101:*");

MODULE_INFO(srcversion, "5058BFC530C20AA94D45B28");
