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

KSYMTAB_FUNC(nvdimm_namespace_attach_btt, "", "");
KSYMTAB_FUNC(nvdimm_namespace_detach_btt, "", "");

SYMBOL_CRC(nvdimm_namespace_attach_btt, 0x33a6185e, "");
SYMBOL_CRC(nvdimm_namespace_detach_btt, 0x308399a7, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x499f0ecf, "nd_sb_checksum" },
	{ 0xdb877604, "nd_btt_arena_is_valid" },
	{ 0x6cc72ac6, "__dynamic_dev_dbg" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x709b4480, "bio_end_io_acct_remapped" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xee99c7ef, "dev_driver_string" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x815f2897, "empty_zero_page" },
	{ 0x80131ca2, "put_disk" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x37f7eb6b, "debugfs_create_x64" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0xef3e091f, "nd_dev_to_uuid" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x5a549f7, "_dev_info" },
	{ 0xf616b605, "bio_start_io_acct" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x736b97bd, "bio_endio" },
	{ 0xdcfcb3b8, "nd_region_release_lane" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0xd7be87d8, "set_capacity" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8656f320, "debugfs_remove" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x59c98678, "del_gendisk" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0x6c76af9d, "to_nd_btt" },
	{ 0xfd5ded75, "nd_region_acquire_lane" },
	{ 0xfb578fc5, "memset" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xb35da0cc, "debugfs_create_u32" },
	{ 0xc39836ef, "nvdimm_namespace_disk_name" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x396a880e, "debugfs_create_x32" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6d7edf3c, "nvdimm_namespace_capacity" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0x6f32a11d, "nvdimm_check_and_set_ro" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x249651a5, "badblocks_check" },
	{ 0x5d8fd465, "nd_btt_version" },
	{ 0x8b0ac9d7, "debugfs_create_dir" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xcec6c4c7, "bio_integrity_prep" },
	{ 0xf8cbbf1d, "__blk_alloc_disk" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x87b76953, "devm_kmalloc" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x69e9c1d7, "device_add_disk" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf18aeccd, "devm_namespace_enable" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x796de4e5, "debugfs_create_u16" },
	{ 0x7e58e25b, "to_nd_region" },
	{ 0x37a0cba, "kfree" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "libnvdimm");

