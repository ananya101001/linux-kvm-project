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
	{ 0xdd56e691, "pcpu_hot" },
	{ 0xcb3888f2, "unpin_user_pages_dirty_lock" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x6b163536, "mmput" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0xddbd5138, "iommu_unmap" },
	{ 0xb271d6a2, "iommu_iova_to_phys" },
	{ 0x1eb4e8c3, "iommu_unmap_fast" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xaa3e7736, "__put_task_struct" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x24a900a6, "__mmdrop" },
	{ 0x4d03c1d8, "iommu_detach_group" },
	{ 0x9112177d, "iommu_domain_free" },
	{ 0x668b19a1, "down_read" },
	{ 0x4d2c66b3, "pin_user_pages_remote" },
	{ 0x4e8f828, "mtree_load" },
	{ 0x7a1ebb2b, "follow_pfnmap_start" },
	{ 0x3828946, "fixup_user_fault" },
	{ 0x88073b95, "follow_pfnmap_end" },
	{ 0x53b954a2, "up_read" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x122c3a7e, "_printk" },
	{ 0x7006586e, "iommu_get_group_resv_regions" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x56470118, "__warn_printk" },
	{ 0x97d983ed, "kthread_use_mm" },
	{ 0x607c0194, "kthread_unuse_mm" },
	{ 0x6c28be5a, "vfio_info_add_capability" },
	{ 0xc6cbbc89, "capable" },
	{ 0xccf69887, "get_free_pages_noprof" },
	{ 0x94e2c040, "iommu_map" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x60a634c4, "vfio_info_cap_add" },
	{ 0x69acdf38, "memcpy" },
	{ 0x19567d06, "vfio_info_cap_shift" },
	{ 0x31f2a14c, "__kvmalloc_node_noprof" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0xf82ec573, "rb_prev" },
	{ 0x922f45a6, "__bitmap_clear" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x8bd6ab2, "iommu_group_for_each_dev" },
	{ 0xd4a77593, "iommu_enable_nesting" },
	{ 0xcbf432a6, "iommu_attach_group" },
	{ 0x5717123e, "alloc_pages_noprof" },
	{ 0x686a1b5, "__free_pages" },
	{ 0x82cb5a72, "iommu_get_msi_cookie" },
	{ 0x6d49c8ed, "iommu_group_has_isolated_msi" },
	{ 0x566b7206, "param_ops_uint" },
	{ 0x22199426, "param_ops_bool" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5114f20a, "vfio_register_iommu_driver" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xece784c2, "rb_first" },
	{ 0xca9360b5, "rb_next" },
	{ 0x84d7b4af, "iommu_paging_domain_alloc" },
	{ 0x8b99f9da, "vfio_unregister_iommu_driver" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x615911d7, "__bitmap_set" },
	{ 0x3b644591, "__bitmap_shift_left" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x456d9a6, "__tracepoint_mmap_lock_start_locking" },
	{ 0x364850b1, "down_write_killable" },
	{ 0x950d388, "__tracepoint_mmap_lock_acquire_returned" },
	{ 0x22224085, "__mmap_lock_do_trace_start_locking" },
	{ 0x35505819, "__mmap_lock_do_trace_acquire_returned" },
	{ 0xf40f196e, "__account_locked_vm" },
	{ 0xb74e3071, "__tracepoint_mmap_lock_released" },
	{ 0xce807a25, "up_write" },
	{ 0x6b0f51a2, "__mmap_lock_do_trace_released" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x37a0cba, "kfree" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3199fbeb, "mem_section" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "vfio");


MODULE_INFO(srcversion, "5481A75836ACFE6ABEF5ED9");
