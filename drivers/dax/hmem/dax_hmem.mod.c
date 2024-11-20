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
	{ 0xb6e36cf9, "platform_device_add_data" },
	{ 0x8a665bfa, "numa_nearest_node" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0xfd4a5a9c, "platform_device_unregister" },
	{ 0xde5fe577, "platform_device_add" },
	{ 0x3972051f, "platform_device_alloc" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x97dc84f5, "alloc_dax_region" },
	{ 0xbc1252bb, "__platform_driver_register" },
	{ 0x22199426, "param_ops_bool" },
	{ 0xf693b45c, "devm_create_dev_dax" },
	{ 0xe9bb6414, "__devm_add_action" },
	{ 0xf6a28554, "region_intersects" },
	{ 0x47a4ff2e, "walk_hmem_resources" },
	{ 0x49c5dd60, "platform_device_put" },
	{ 0xf2f53617, "memregion_free" },
	{ 0xa553201f, "platform_driver_unregister" },
	{ 0x213a738d, "memregion_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

