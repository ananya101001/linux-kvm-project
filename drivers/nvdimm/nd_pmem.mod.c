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
	{ 0x16062d10, "kernfs_notify" },
	{ 0x709b4480, "bio_end_io_acct_remapped" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xee99c7ef, "dev_driver_string" },
	{ 0x67cc4450, "_copy_from_iter_flushcache" },
	{ 0x26f50494, "__devm_request_region" },
	{ 0x815f2897, "empty_zero_page" },
	{ 0x80131ca2, "put_disk" },
	{ 0xfad9c827, "kill_dax" },
	{ 0xa45a3cbf, "nvdimm_setup_pfn" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x33a6185e, "nvdimm_namespace_attach_btt" },
	{ 0x5b1b0bf1, "nvdimm_badblocks_populate" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x308399a7, "nvdimm_namespace_detach_btt" },
	{ 0x45aa99c5, "dax_add_host" },
	{ 0xf616b605, "bio_start_io_acct" },
	{ 0x5db35492, "nvdimm_has_flush" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x6c521783, "pmem_should_map_pages" },
	{ 0x736b97bd, "bio_endio" },
	{ 0x9e9c4f24, "set_dax_nomc" },
	{ 0xd7be87d8, "set_capacity" },
	{ 0x328e3354, "__memcpy_flushcache" },
	{ 0x5f6f1e9e, "dax_get_private" },
	{ 0x3088fe39, "kernfs_find_and_get_ns" },
	{ 0x57b4777a, "dax_remove_host" },
	{ 0xba094a60, "nvdimm_clear_poison" },
	{ 0x6aae782e, "driver_unregister" },
	{ 0xe464d707, "__nd_driver_register" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x59c98678, "del_gendisk" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0x6d951349, "pmem_sector_size" },
	{ 0x6c76af9d, "to_nd_btt" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xc39836ef, "nvdimm_namespace_disk_name" },
	{ 0x138ab30d, "is_nd_btt" },
	{ 0xee973591, "nvdimm_flush" },
	{ 0x73f6b0a3, "nd_pfn_probe" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x46a46c19, "nd_dax_probe" },
	{ 0x330f6116, "set_dax_synchronous" },
	{ 0x7a8c1b8a, "is_nvdimm_sync" },
	{ 0x98a57143, "kernfs_put" },
	{ 0x6e8e4f2b, "devm_memremap_pages" },
	{ 0x56470118, "__warn_printk" },
	{ 0xaabff9fa, "devm_namespace_disable" },
	{ 0x6f32a11d, "nvdimm_check_and_set_ro" },
	{ 0x8135613, "dax_write_cache" },
	{ 0x7242d92, "put_dax" },
	{ 0x249651a5, "badblocks_check" },
	{ 0x9da2755e, "is_nd_pfn" },
	{ 0x943c8feb, "nvdimm_namespace_common_probe" },
	{ 0xe9bb6414, "__devm_add_action" },
	{ 0x2c635527, "arch_invalidate_pmem" },
	{ 0xd6c4bdb7, "badblocks_clear" },
	{ 0xccd4fe5f, "devm_init_badblocks" },
	{ 0x77358855, "iomem_resource" },
	{ 0x99a03078, "dax_holder_notify_failure" },
	{ 0x84502a47, "blk_status_to_errno" },
	{ 0x473d6f1, "to_nd_pfn" },
	{ 0xeb781b8e, "nd_btt_probe" },
	{ 0xf8cbbf1d, "__blk_alloc_disk" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x87b76953, "devm_kmalloc" },
	{ 0x3a145f56, "nvdimm_has_cache" },
	{ 0x4ce1de71, "devm_memremap" },
	{ 0x69e9c1d7, "device_add_disk" },
	{ 0xf18aeccd, "devm_namespace_enable" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x9d8bb00e, "set_dax_nocache" },
	{ 0x7e58e25b, "to_nd_region" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x138e0957, "dax_write_cache_enabled" },
	{ 0xbc4e24bb, "copy_mc_to_kernel" },
	{ 0x6cc72ac6, "__dynamic_dev_dbg" },
	{ 0x836844e9, "alloc_dax" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "libnvdimm,nd_btt");

