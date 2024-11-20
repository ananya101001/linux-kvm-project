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
	{ 0x731dba7a, "xen_domain_type" },
	{ 0x37a0cba, "kfree" },
	{ 0x950d388, "__tracepoint_mmap_lock_acquire_returned" },
	{ 0xb74e3071, "__tracepoint_mmap_lock_released" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x47850c19, "find_vma" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0xd2bc5c46, "__get_user_nocheck_2" },
	{ 0x7444e1a3, "gnttab_batch_copy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x65d7d391, "apply_to_page_range" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x65df35ca, "__put_user_nocheck_2" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8076322c, "gnttab_free_pages" },
	{ 0xea43f98d, "misc_register" },
	{ 0x14ec4fdb, "evtchn_put" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x668b19a1, "down_read" },
	{ 0x22224085, "__mmap_lock_do_trace_start_locking" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3a7d80f9, "xen_max_p2m_pfn" },
	{ 0xf9283211, "gnttab_unmap_refs_async" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x456d9a6, "__tracepoint_mmap_lock_start_locking" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x6b0f51a2, "__mmap_lock_do_trace_released" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x4b931968, "xen_features" },
	{ 0x2ebaff5f, "gnttab_alloc_pages" },
	{ 0xfe727411, "get_phys_to_machine" },
	{ 0xfbf7c17a, "vm_map_pages_zero" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xa6d3558, "gnttab_map_refs" },
	{ 0x31f2a14c, "__kvmalloc_node_noprof" },
	{ 0x53b954a2, "up_read" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x45d14bdf, "hypercall_page" },
	{ 0x25f02c87, "xen_p2m_addr" },
	{ 0xd5a5a065, "pin_user_pages_fast" },
	{ 0x5aaf80c9, "mmu_interval_notifier_remove" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf80d81c2, "misc_deregister" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xcb3888f2, "unpin_user_pages_dirty_lock" },
	{ 0x566b7206, "param_ops_uint" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x3165daa3, "arbitrary_virt_to_machine" },
	{ 0x3837a722, "mmu_interval_read_begin" },
	{ 0x5287c62c, "mmu_interval_notifier_insert_locked" },
	{ 0x3362b03c, "xen_p2m_size" },
	{ 0x5a4896a8, "__put_user_2" },
	{ 0x35505819, "__mmap_lock_do_trace_acquire_returned" },
	{ 0xcaf1d958, "evtchn_get" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

