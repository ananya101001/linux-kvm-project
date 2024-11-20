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
	{ 0x8a665bfa, "numa_nearest_node" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xcc935375, "walk_iomem_res_desc" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0x148d23a1, "nvdimm_bus_unregister" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xbc1252bb, "__platform_driver_register" },
	{ 0x577d95f8, "nvdimm_bus_register" },
	{ 0x6f897810, "nvdimm_pmem_region_create" },
	{ 0xa553201f, "platform_driver_unregister" },
	{ 0xaab33bc6, "phys_to_target_node" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "libnvdimm");

