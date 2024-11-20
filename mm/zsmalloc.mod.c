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

KSYMTAB_FUNC(zs_lookup_class_index, "_gpl", "");
KSYMTAB_FUNC(zs_get_total_pages, "_gpl", "");
KSYMTAB_FUNC(zs_map_object, "_gpl", "");
KSYMTAB_FUNC(zs_unmap_object, "_gpl", "");
KSYMTAB_FUNC(zs_huge_class_size, "_gpl", "");
KSYMTAB_FUNC(zs_malloc, "_gpl", "");
KSYMTAB_FUNC(zs_free, "_gpl", "");
KSYMTAB_FUNC(zs_compact, "_gpl", "");
KSYMTAB_FUNC(zs_pool_stats, "_gpl", "");
KSYMTAB_FUNC(zs_create_pool, "_gpl", "");
KSYMTAB_FUNC(zs_destroy_pool, "_gpl", "");

SYMBOL_CRC(zs_lookup_class_index, 0x5957cddb, "_gpl");
SYMBOL_CRC(zs_get_total_pages, 0xcbe56bc2, "_gpl");
SYMBOL_CRC(zs_map_object, 0xc341ae6d, "_gpl");
SYMBOL_CRC(zs_unmap_object, 0x924c46f8, "_gpl");
SYMBOL_CRC(zs_huge_class_size, 0x3d8baf3b, "_gpl");
SYMBOL_CRC(zs_malloc, 0xb29533ee, "_gpl");
SYMBOL_CRC(zs_free, 0x958df3ac, "_gpl");
SYMBOL_CRC(zs_compact, 0x5da67adc, "_gpl");
SYMBOL_CRC(zs_pool_stats, 0x7cceaf92, "_gpl");
SYMBOL_CRC(zs_create_pool, 0xbcf1f0e6, "_gpl");
SYMBOL_CRC(zs_destroy_pool, 0xc69b7ee5, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xacb0f234, "shrinker_free" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x122c3a7e, "_printk" },
	{ 0x6c90184e, "kmem_cache_destroy" },
	{ 0xb66eb73f, "__cpuhp_setup_state" },
	{ 0xaab744b7, "__cpuhp_remove_state" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x9207278f, "__kmem_cache_create_args" },
	{ 0x8cfdcc81, "shrinker_alloc" },
	{ 0x2c3368b2, "shrinker_register" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x28849f01, "__ClearPageMovable" },
	{ 0x55945a45, "unlock_page" },
	{ 0xa787d4b8, "dec_zone_page_state" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x94c1bfc3, "__folio_put" },
	{ 0xb609162e, "kmem_cache_free" },
	{ 0xb5f4750d, "__put_devmap_managed_folio_refs" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x59ae6a7d, "folio_wait_bit" },
	{ 0xc8817ac9, "kmem_cache_alloc_noprof" },
	{ 0xa97f0326, "inc_zone_page_state" },
	{ 0x5717123e, "alloc_pages_noprof" },
	{ 0x686a1b5, "__free_pages" },
	{ 0xdeebbe29, "__SetPageMovable" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0x33b84f74, "copy_page" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0x70dc4e23, "node_data" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x37a0cba, "kfree" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

