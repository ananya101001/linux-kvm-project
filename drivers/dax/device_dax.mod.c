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
	{ 0x30149b9, "cdev_add" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0x9c018d56, "dax_inode" },
	{ 0x2a71977a, "noop_llseek" },
	{ 0x5f6f1e9e, "dax_get_private" },
	{ 0xaeef3b44, "mm_get_unmapped_area" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x47faeadc, "__dax_driver_register" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xd84d35bd, "dax_read_lock" },
	{ 0x6e8e4f2b, "devm_memremap_pages" },
	{ 0xd0db0f12, "run_dax" },
	{ 0x3f84bcd7, "dax_alive" },
	{ 0xfdd3eb75, "vmf_insert_mixed" },
	{ 0xe9bb6414, "__devm_add_action" },
	{ 0x77358855, "iomem_resource" },
	{ 0x4625c732, "vmf_insert_pfn_pmd" },
	{ 0x3bff2988, "vmf_insert_pfn_pud" },
	{ 0xd985b9ed, "kill_dev_dax" },
	{ 0x5d64dd4d, "cdev_init" },
	{ 0x1ee1ccb9, "inode_dax" },
	{ 0xce767f9d, "cdev_del" },
	{ 0x1fa73c6f, "cdev_set_parent" },
	{ 0x87b76953, "devm_kmalloc" },
	{ 0xa7318fd7, "noop_dirty_folio" },
	{ 0xdc6c2ff0, "dax_driver_unregister" },
	{ 0x8b910be2, "errseq_sample" },
	{ 0x6cc72ac6, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x26f50494, "__devm_request_region" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x5a549f7, "_dev_info" },
	{ 0xbe326dfa, "static_dev_dax" },
	{ 0x8eee3399, "dax_read_unlock" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

