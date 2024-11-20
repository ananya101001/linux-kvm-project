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

KSYMTAB_FUNC(vfio_assign_device_set, "_gpl", "");
KSYMTAB_FUNC(vfio_device_set_open_count, "_gpl", "");
KSYMTAB_FUNC(vfio_find_device_in_devset, "_gpl", "");
KSYMTAB_FUNC(_vfio_alloc_device, "_gpl", "");
KSYMTAB_FUNC(vfio_register_group_dev, "_gpl", "");
KSYMTAB_FUNC(vfio_register_emulated_iommu_dev, "_gpl", "");
KSYMTAB_FUNC(vfio_unregister_group_dev, "_gpl", "");
KSYMTAB_FUNC(vfio_mig_get_next_state, "_gpl", "");
KSYMTAB_FUNC(vfio_combine_iova_ranges, "_gpl", "");
KSYMTAB_FUNC(vfio_file_is_valid, "_gpl", "");
KSYMTAB_FUNC(vfio_file_enforced_coherent, "_gpl", "");
KSYMTAB_FUNC(vfio_file_set_kvm, "_gpl", "");
KSYMTAB_FUNC(vfio_info_cap_add, "_gpl", "");
KSYMTAB_FUNC(vfio_info_cap_shift, "", "");
KSYMTAB_FUNC(vfio_info_add_capability, "", "");
KSYMTAB_FUNC(vfio_set_irqs_validate_and_prepare, "", "");
KSYMTAB_FUNC(vfio_pin_pages, "", "");
KSYMTAB_FUNC(vfio_unpin_pages, "", "");
KSYMTAB_FUNC(vfio_dma_rw, "", "");
KSYMTAB_FUNC(vfio_file_iommu_group, "_gpl", "");
KSYMTAB_FUNC(vfio_file_is_group, "_gpl", "");
KSYMTAB_FUNC(vfio_file_has_dev, "_gpl", "");
KSYMTAB_FUNC(vfio_register_iommu_driver, "_gpl", "");
KSYMTAB_FUNC(vfio_unregister_iommu_driver, "_gpl", "");
KSYMTAB_FUNC(vfio_virqfd_enable, "_gpl", "");
KSYMTAB_FUNC(vfio_virqfd_disable, "_gpl", "");
KSYMTAB_FUNC(vfio_virqfd_flush_thread, "_gpl", "");

SYMBOL_CRC(vfio_assign_device_set, 0x2af6b088, "_gpl");
SYMBOL_CRC(vfio_device_set_open_count, 0x48ee7465, "_gpl");
SYMBOL_CRC(vfio_find_device_in_devset, 0x56160fed, "_gpl");
SYMBOL_CRC(_vfio_alloc_device, 0x87b79fa4, "_gpl");
SYMBOL_CRC(vfio_register_group_dev, 0x3004042e, "_gpl");
SYMBOL_CRC(vfio_register_emulated_iommu_dev, 0xf29b4af4, "_gpl");
SYMBOL_CRC(vfio_unregister_group_dev, 0x353484e6, "_gpl");
SYMBOL_CRC(vfio_mig_get_next_state, 0x839d585f, "_gpl");
SYMBOL_CRC(vfio_combine_iova_ranges, 0x6e2aa0f0, "_gpl");
SYMBOL_CRC(vfio_file_is_valid, 0x5dc3f266, "_gpl");
SYMBOL_CRC(vfio_file_enforced_coherent, 0x0eb9fb21, "_gpl");
SYMBOL_CRC(vfio_file_set_kvm, 0x50dcf458, "_gpl");
SYMBOL_CRC(vfio_info_cap_add, 0x60a634c4, "_gpl");
SYMBOL_CRC(vfio_info_cap_shift, 0x19567d06, "");
SYMBOL_CRC(vfio_info_add_capability, 0x6c28be5a, "");
SYMBOL_CRC(vfio_set_irqs_validate_and_prepare, 0xadc044b7, "");
SYMBOL_CRC(vfio_pin_pages, 0xe0149b60, "");
SYMBOL_CRC(vfio_unpin_pages, 0xa6a5f576, "");
SYMBOL_CRC(vfio_dma_rw, 0x8ad8f450, "");
SYMBOL_CRC(vfio_file_iommu_group, 0x213db3bf, "_gpl");
SYMBOL_CRC(vfio_file_is_group, 0x77892119, "_gpl");
SYMBOL_CRC(vfio_file_has_dev, 0xf2fca409, "_gpl");
SYMBOL_CRC(vfio_register_iommu_driver, 0x5114f20a, "_gpl");
SYMBOL_CRC(vfio_unregister_iommu_driver, 0x8b99f9da, "_gpl");
SYMBOL_CRC(vfio_virqfd_enable, 0x2f6c3097, "_gpl");
SYMBOL_CRC(vfio_virqfd_disable, 0x5e7cc1e7, "_gpl");
SYMBOL_CRC(vfio_virqfd_flush_thread, 0xbf74048a, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xf1a86b0f, "cdev_device_del" },
	{ 0x2771f835, "iommu_group_get" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x8d8eecb1, "class_destroy" },
	{ 0xf5a067bf, "iommu_group_dma_owner_claimed" },
	{ 0xe02c9c92, "__xa_erase" },
	{ 0x99f7371c, "refcount_dec_and_mutex_lock" },
	{ 0xe7fa695f, "device_initialize" },
	{ 0x7a729fb1, "fd_install" },
	{ 0x8d22bb58, "iommu_group_alloc" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x91bf2302, "iput" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x89485687, "iommu_group_put" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x6cc72ac6, "__dynamic_dev_dbg" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa44a1307, "interval_tree_iter_first" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x59f0318e, "cdev_device_add" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xca844bc7, "put_device" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x5a549f7, "_dev_info" },
	{ 0xc6cbbc89, "capable" },
	{ 0x7f1fd79f, "module_put" },
	{ 0xc81ce80d, "compat_ptr_ioctl" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x6e7943ec, "iommu_group_id" },
	{ 0xe3e423ac, "iommu_group_release_dma_owner" },
	{ 0x37712435, "fput" },
	{ 0x57bc19d2, "down_write" },
	{ 0x41482d8b, "strndup_user" },
	{ 0xce807a25, "up_write" },
	{ 0x934ea33f, "device_add" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0xd96babb4, "interval_tree_iter_next" },
	{ 0xc101b80e, "class_create" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xffb7c514, "ida_free" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc04e9955, "device_del" },
	{ 0xfb578fc5, "memset" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0x41ed3cec, "eventfd_ctx_remove_wait_queue" },
	{ 0xea43f98d, "misc_register" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa0ebc08, "__xa_cmpxchg" },
	{ 0x36d29cdf, "init_pseudo" },
	{ 0x7230beea, "fdget" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x8188f58f, "__pm_runtime_resume" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0xd9491c14, "xa_destroy" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0xcc9d36c, "iommu_group_claim_dma_owner" },
	{ 0xcb767fd6, "device_iommu_capable" },
	{ 0xdab5a1eb, "interval_tree_insert" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0x7c2a9d92, "simple_release_fs" },
	{ 0x497c15bd, "kill_anon_super" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xe911df29, "eventfd_ctx_do_read" },
	{ 0x318afd11, "iommu_group_add_device" },
	{ 0x21ef374c, "try_wait_for_completion" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x31f2a14c, "__kvmalloc_node_noprof" },
	{ 0x53b954a2, "up_read" },
	{ 0x9b53e14, "interval_tree_remove" },
	{ 0x538246ce, "__pm_runtime_idle" },
	{ 0x5d64dd4d, "cdev_init" },
	{ 0x8730bb0b, "eventfd_ctx_fileget" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x847188e8, "krealloc_noprof" },
	{ 0xae5643d3, "iommu_group_remove_device" },
	{ 0x9292be37, "simple_pin_fs" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x4d6d0bbc, "iommu_group_ref_get" },
	{ 0x1f7fdb27, "try_module_get" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xe53b1916, "anon_inode_getfile" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x310fac4, "alloc_anon_inode" },
	{ 0xf80d81c2, "misc_deregister" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xc6f15b39, "dev_set_name" },
	{ 0xbcdd5b99, "iommu_group_set_name" },
	{ 0x941f2aaa, "eventfd_ctx_put" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A563E97DEDB052004803AB4");
