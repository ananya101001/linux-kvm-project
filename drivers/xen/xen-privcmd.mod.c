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

KSYMTAB_DATA(xen_privcmd_fops, "_gpl", "");
KSYMTAB_DATA(xen_privcmdbuf_fops, "_gpl", "");

SYMBOL_CRC(xen_privcmd_fops, 0x052d622c, "_gpl");
SYMBOL_CRC(xen_privcmdbuf_fops, 0x08ca4b0f, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x6d334118, "__get_user_8" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x686a1b5, "__free_pages" },
	{ 0x47850c19, "find_vma" },
	{ 0xc707d3c7, "xen_free_unpopulated_pages" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xbd5f1a83, "xen_remap_vma_range" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x65d7d391, "apply_to_page_range" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xdad43487, "xen_unmap_domain_gfn_range" },
	{ 0xea43f98d, "misc_register" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x22224085, "__mmap_lock_do_trace_start_locking" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x10ef225e, "xen_remap_pfn" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x456d9a6, "__tracepoint_mmap_lock_start_locking" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x6b0f51a2, "__mmap_lock_do_trace_released" },
	{ 0x8d6aff89, "__put_user_nocheck_4" },
	{ 0x5717123e, "alloc_pages_noprof" },
	{ 0x4b931968, "xen_features" },
	{ 0xdac59985, "xen_alloc_unpopulated_pages" },
	{ 0xabf53b48, "rep_stos_alternative" },
	{ 0xfbf7c17a, "vm_map_pages_zero" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x31f2a14c, "__kvmalloc_node_noprof" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x45d14bdf, "hypercall_page" },
	{ 0x4e8f828, "mtree_load" },
	{ 0xd5a5a065, "pin_user_pages_fast" },
	{ 0xb631052, "xen_xlate_remap_gfn_array" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf80d81c2, "misc_deregister" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xcb3888f2, "unpin_user_pages_dirty_lock" },
	{ 0x566b7206, "param_ops_uint" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x87706d4e, "__put_user_nocheck_8" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x35505819, "__mmap_lock_do_trace_acquire_returned" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0x37a0cba, "kfree" },
	{ 0x950d388, "__tracepoint_mmap_lock_acquire_returned" },
	{ 0xb74e3071, "__tracepoint_mmap_lock_released" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

