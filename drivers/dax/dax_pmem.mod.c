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
	{ 0xbae0bb2c, "to_nd_dax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x26f50494, "__devm_request_region" },
	{ 0xa45a3cbf, "nvdimm_setup_pfn" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x6aae782e, "driver_unregister" },
	{ 0xe464d707, "__nd_driver_register" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x97dc84f5, "alloc_dax_region" },
	{ 0xaabff9fa, "devm_namespace_disable" },
	{ 0xf693b45c, "devm_create_dev_dax" },
	{ 0x943c8feb, "nvdimm_namespace_common_probe" },
	{ 0x77358855, "iomem_resource" },
	{ 0xf18aeccd, "devm_namespace_enable" },
	{ 0x7e58e25b, "to_nd_region" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "libnvdimm");

