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
	{ 0xacd1b37, "virtio_reset_device" },
	{ 0x3fa92fa0, "unregister_virtio_driver" },
	{ 0x8e6cb989, "virtio_check_driver_offered_feature" },
	{ 0xe726acf2, "_dev_notice" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x87b76953, "devm_kmalloc" },
	{ 0x9a04a614, "virtio_pmem_host_ack" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x577d95f8, "nvdimm_bus_register" },
	{ 0x638a9653, "memory_add_physaddr_to_nid" },
	{ 0xaab33bc6, "phys_to_target_node" },
	{ 0x84d6282e, "async_pmem_flush" },
	{ 0x6f897810, "nvdimm_pmem_region_create" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0x6cc72ac6, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf632832, "__register_virtio_driver" },
	{ 0x148d23a1, "nvdimm_bus_unregister" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "virtio,nd_virtio,libnvdimm");

MODULE_ALIAS("virtio:d0000001Bv*");
