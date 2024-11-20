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

KSYMTAB_FUNC(ib_uverbs_get_ucontext_file, "", "");
KSYMTAB_FUNC(flow_resources_alloc, "", "");
KSYMTAB_FUNC(ib_uverbs_flow_resources_free, "", "");
KSYMTAB_FUNC(flow_resources_add, "", "");
KSYMTAB_FUNC(ib_copy_ah_attr_to_user, "", "");
KSYMTAB_FUNC(ib_copy_qp_attr_to_user, "", "");
KSYMTAB_FUNC(ib_copy_path_rec_to_user, "", "");
KSYMTAB_FUNC(ib_copy_path_rec_from_user, "", "");
KSYMTAB_FUNC(uverbs_uobject_put, "", "");
KSYMTAB_DATA(uverbs_idr_class, "", "");
KSYMTAB_FUNC(uverbs_uobject_fd_release, "", "");
KSYMTAB_DATA(uverbs_fd_class, "", "");
KSYMTAB_FUNC(uverbs_destroy_def_handler, "", "");
KSYMTAB_FUNC(_uverbs_alloc, "", "");
KSYMTAB_FUNC(uverbs_get_flags64, "", "");
KSYMTAB_FUNC(uverbs_get_flags32, "", "");
KSYMTAB_FUNC(uverbs_copy_to, "", "");
KSYMTAB_FUNC(_uverbs_get_const_signed, "", "");
KSYMTAB_FUNC(_uverbs_get_const_unsigned, "", "");
KSYMTAB_FUNC(uverbs_copy_to_struct_or_zero, "", "");
KSYMTAB_FUNC(uverbs_finalize_uobj_create, "", "");
KSYMTAB_FUNC(ib_umem_find_best_pgsz, "", "");
KSYMTAB_FUNC(ib_umem_get, "", "");
KSYMTAB_FUNC(ib_umem_release, "", "");
KSYMTAB_FUNC(ib_umem_copy_from, "", "");
KSYMTAB_FUNC(ib_umem_dmabuf_map_pages, "", "");
KSYMTAB_FUNC(ib_umem_dmabuf_unmap_pages, "", "");
KSYMTAB_FUNC(ib_umem_dmabuf_get, "", "");
KSYMTAB_FUNC(ib_umem_dmabuf_get_pinned_with_dma_device, "", "");
KSYMTAB_FUNC(ib_umem_dmabuf_get_pinned, "", "");
KSYMTAB_FUNC(ib_umem_dmabuf_revoke, "", "");
KSYMTAB_FUNC(ib_umem_odp_alloc_implicit, "", "");
KSYMTAB_FUNC(ib_umem_odp_alloc_child, "", "");
KSYMTAB_FUNC(ib_umem_odp_get, "", "");
KSYMTAB_FUNC(ib_umem_odp_release, "", "");
KSYMTAB_FUNC(ib_umem_odp_map_dma_and_lock, "", "");
KSYMTAB_FUNC(ib_umem_odp_unmap_dma_pages, "", "");

SYMBOL_CRC(ib_uverbs_get_ucontext_file, 0xfbb16d1b, "");
SYMBOL_CRC(flow_resources_alloc, 0x2a420448, "");
SYMBOL_CRC(ib_uverbs_flow_resources_free, 0x0be28dbc, "");
SYMBOL_CRC(flow_resources_add, 0x8a39b40a, "");
SYMBOL_CRC(ib_copy_ah_attr_to_user, 0x53f46bda, "");
SYMBOL_CRC(ib_copy_qp_attr_to_user, 0x61c8525c, "");
SYMBOL_CRC(ib_copy_path_rec_to_user, 0x36c34dc6, "");
SYMBOL_CRC(ib_copy_path_rec_from_user, 0x754b0000, "");
SYMBOL_CRC(uverbs_uobject_put, 0x77da8545, "");
SYMBOL_CRC(uverbs_idr_class, 0xb6b8c561, "");
SYMBOL_CRC(uverbs_uobject_fd_release, 0x782dd68d, "");
SYMBOL_CRC(uverbs_fd_class, 0x4e13443e, "");
SYMBOL_CRC(uverbs_destroy_def_handler, 0x6fbfd062, "");
SYMBOL_CRC(_uverbs_alloc, 0x3c389d53, "");
SYMBOL_CRC(uverbs_get_flags64, 0xeda855a8, "");
SYMBOL_CRC(uverbs_get_flags32, 0x29e9ad6c, "");
SYMBOL_CRC(uverbs_copy_to, 0xa1af9292, "");
SYMBOL_CRC(_uverbs_get_const_signed, 0xaec00545, "");
SYMBOL_CRC(_uverbs_get_const_unsigned, 0x93d37530, "");
SYMBOL_CRC(uverbs_copy_to_struct_or_zero, 0x8fcced02, "");
SYMBOL_CRC(uverbs_finalize_uobj_create, 0x192b661e, "");
SYMBOL_CRC(ib_umem_find_best_pgsz, 0x351b99c6, "");
SYMBOL_CRC(ib_umem_get, 0x39c61908, "");
SYMBOL_CRC(ib_umem_release, 0x0b8f5172, "");
SYMBOL_CRC(ib_umem_copy_from, 0xe79d4e51, "");
SYMBOL_CRC(ib_umem_dmabuf_map_pages, 0xd16dc948, "");
SYMBOL_CRC(ib_umem_dmabuf_unmap_pages, 0x6ede4b2b, "");
SYMBOL_CRC(ib_umem_dmabuf_get, 0xa958abcd, "");
SYMBOL_CRC(ib_umem_dmabuf_get_pinned_with_dma_device, 0xb32bfd74, "");
SYMBOL_CRC(ib_umem_dmabuf_get_pinned, 0x63516a96, "");
SYMBOL_CRC(ib_umem_dmabuf_revoke, 0xaf0ba3d3, "");
SYMBOL_CRC(ib_umem_odp_alloc_implicit, 0x4f5150e3, "");
SYMBOL_CRC(ib_umem_odp_alloc_child, 0x89dd2f7d, "");
SYMBOL_CRC(ib_umem_odp_get, 0x19a16878, "");
SYMBOL_CRC(ib_umem_odp_release, 0xa6abde06, "");
SYMBOL_CRC(ib_umem_odp_map_dma_and_lock, 0x7e17e250, "");
SYMBOL_CRC(ib_umem_odp_unmap_dma_pages, 0x03463cda, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc7e7dd0c, "ib_query_port" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xf07b07f6, "sg_free_append_table" },
	{ 0x36cd5f26, "nla_put" },
	{ 0xd3f2dbae, "ww_mutex_lock" },
	{ 0x3403f878, "fasync_helper" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xca9f6ca7, "ib_qp_usecnt_inc" },
	{ 0x1759be17, "dma_buf_put" },
	{ 0xffb7c514, "ida_free" },
	{ 0x3221df67, "__bitmap_subset" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x9901bc1d, "class_unregister" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xf90f01e7, "cleanup_srcu_struct" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x56ee144a, "ib_destroy_qp_user" },
	{ 0x992de6f8, "rdma_nl_get_privileged_qkey" },
	{ 0xfb578fc5, "memset" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x98494b9a, "rdma_restrack_set_name" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x7a06013, "rdma_create_user_ah" },
	{ 0x5571ca29, "rdma_destroy_ah_user" },
	{ 0xea3d33b3, "dma_buf_pin" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x4943cafb, "ib_destroy_cq_user" },
	{ 0x668b19a1, "down_read" },
	{ 0x24a900a6, "__mmdrop" },
	{ 0x233ac80a, "rdma_restrack_del" },
	{ 0xa0ebc08, "__xa_cmpxchg" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x38ac7e2c, "set_page_dirty" },
	{ 0x745a981, "xa_erase" },
	{ 0x22224085, "__mmap_lock_do_trace_start_locking" },
	{ 0x275ba0d2, "ib_rdmacg_uncharge" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7230beea, "fdget" },
	{ 0x2041dcad, "igrab" },
	{ 0xd0918217, "ib_dma_virt_map_sg" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x6b163536, "mmput" },
	{ 0x871ed204, "dma_map_sgtable" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0xd9491c14, "xa_destroy" },
	{ 0x8fa25c24, "xa_find" },
	{ 0xfbe215e4, "sg_next" },
	{ 0x456d9a6, "__tracepoint_mmap_lock_start_locking" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0x6b0f51a2, "__mmap_lock_do_trace_released" },
	{ 0xf1df9340, "ib_alloc_xrcd_user" },
	{ 0x5b3e282f, "xa_store" },
	{ 0x755abc1, "__srcu_read_unlock" },
	{ 0x74e57c29, "rdma_set_cq_moderation" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x5717123e, "alloc_pages_noprof" },
	{ 0x9914b3f3, "ib_dealloc_xrcd_user" },
	{ 0x837ad7a2, "dma_buf_detach" },
	{ 0x72b8410a, "stream_open" },
	{ 0xf88ef1d4, "mmu_interval_notifier_insert" },
	{ 0xb0a6c906, "mmput_async" },
	{ 0xabf53b48, "rep_stos_alternative" },
	{ 0x55deb8e8, "ib_open_qp" },
	{ 0xd9406694, "ib_dealloc_pd_user" },
	{ 0xa7ba58fc, "rdma_get_gid_attr" },
	{ 0x4836cf95, "dma_unmap_sg_attrs" },
	{ 0xe27fab31, "rdma_port_get_link_layer" },
	{ 0xdf36914b, "xa_find_after" },
	{ 0x68da7dbb, "rdma_restrack_new" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x25880fc3, "rdma_query_gid_table" },
	{ 0x1d549db, "get_task_pid" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x5a6a5dc2, "rdma_restrack_put" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xccf69887, "get_free_pages_noprof" },
	{ 0xcc67be38, "ib_attach_mcast" },
	{ 0x31f2a14c, "__kvmalloc_node_noprof" },
	{ 0xab16a20f, "rdma_umap_priv_init" },
	{ 0x53b954a2, "up_read" },
	{ 0xcc5d22d9, "can_do_mlock" },
	{ 0xfdbdba2d, "ib_destroy_wq_user" },
	{ 0xfa11a0ac, "put_pid" },
	{ 0x4a958e37, "class_register" },
	{ 0x5d64dd4d, "cdev_init" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x54b23e67, "sg_pcopy_to_buffer" },
	{ 0x4a128507, "rdma_user_mmap_entry_put" },
	{ 0xd5a5a065, "pin_user_pages_fast" },
	{ 0x5aaf80c9, "mmu_interval_notifier_remove" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x1f7fdb27, "try_module_get" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xe53b1916, "anon_inode_getfile" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xbdb50258, "ib_unregister_client" },
	{ 0x5309d5c8, "show_class_attr_string" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xcb3888f2, "unpin_user_pages_dirty_lock" },
	{ 0x6fbc6a00, "radix_tree_insert" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xc6f15b39, "dev_set_name" },
	{ 0x5bfd5c5d, "ibdev_warn" },
	{ 0xa6257a2f, "complete" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x3837a722, "mmu_interval_read_begin" },
	{ 0x657b4989, "ib_create_qp_user" },
	{ 0xc86ecfdd, "dma_resv_wait_timeout" },
	{ 0xf1a86b0f, "cdev_device_del" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x70ad75fb, "radix_tree_lookup" },
	{ 0xee752a35, "get_pid_task" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x5a4896a8, "__put_user_2" },
	{ 0xa23d56ab, "kill_fasync" },
	{ 0x204033c7, "dma_unmap_page_attrs" },
	{ 0x35505819, "__mmap_lock_do_trace_acquire_returned" },
	{ 0x61e1334, "fget" },
	{ 0xaa3e7736, "__put_task_struct" },
	{ 0x1d314a2f, "ib_query_srq" },
	{ 0x66bf322a, "ww_mutex_unlock" },
	{ 0xe7fa695f, "device_initialize" },
	{ 0xf46501ad, "__dynamic_ibdev_dbg" },
	{ 0x63b61a80, "ib_rdmacg_try_charge" },
	{ 0x7a729fb1, "fd_install" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3b37f718, "sg_alloc_append_table_from_pages" },
	{ 0x37a0cba, "kfree" },
	{ 0x57ba20e5, "unpin_user_page_range_dirty_lock" },
	{ 0x91bf2302, "iput" },
	{ 0xfb163648, "dma_buf_unpin" },
	{ 0xabd4315a, "zap_vma_ptes" },
	{ 0x6275ff33, "ib_dereg_mr_user" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x950d388, "__tracepoint_mmap_lock_acquire_returned" },
	{ 0xe2964344, "__wake_up" },
	{ 0xd5a61a34, "synchronize_srcu" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xd8ad6985, "rdma_dev_access_netns" },
	{ 0x3131271a, "get_device" },
	{ 0x529874e1, "ib_query_qp" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb74e3071, "__tracepoint_mmap_lock_released" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xc3ff38c2, "down_read_trylock" },
	{ 0xb0ab94c4, "dma_buf_dynamic_attach" },
	{ 0xdbbf55b0, "class_create_file_ns" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0x5fc52abd, "radix_tree_iter_delete" },
	{ 0xd631ebe8, "ib_destroy_srq_user" },
	{ 0x90be50c2, "rdma_read_gid_attr_ndev_rcu" },
	{ 0x13da9184, "hmm_range_fault" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x28beaeee, "dma_map_page_attrs" },
	{ 0x815f2897, "empty_zero_page" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x59f0318e, "cdev_device_add" },
	{ 0x6d334118, "__get_user_8" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x1000e51, "schedule" },
	{ 0x50723f3a, "rdma_restrack_add" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xca844bc7, "put_device" },
	{ 0x41efdeaf, "radix_tree_lookup_slot" },
	{ 0xce484ec7, "ib_modify_qp_with_udata" },
	{ 0x3e60f4f3, "ib_register_event_handler" },
	{ 0x3c07d578, "ib_detach_mcast" },
	{ 0x7aec55c2, "dma_buf_map_attachment" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x686a1b5, "__free_pages" },
	{ 0x4ef03a4, "ib_unregister_event_handler" },
	{ 0xc6cbbc89, "capable" },
	{ 0x7f1fd79f, "module_put" },
	{ 0xe2045f4c, "ib_register_client" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc81ce80d, "compat_ptr_ioctl" },
	{ 0x3a88b739, "ib_create_srq_user" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0x6a4f623b, "mmu_notifier_synchronize" },
	{ 0x2f1d1ade, "__task_pid_nr_ns" },
	{ 0x9114b616, "__xa_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8fca0669, "init_srcu_struct" },
	{ 0x37712435, "fput" },
	{ 0x98731b78, "ib_set_client_data" },
	{ 0x57bc19d2, "down_write" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0xce807a25, "up_write" },
	{ 0x470f2b6a, "dma_buf_unmap_attachment" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x5df2b678, "radix_tree_next_chunk" },
	{ 0xfcadfcea, "__srcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0xddecfb20, "rdma_put_gid_attr" },
	{ 0x954cef6f, "init_on_alloc" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9c7f7a1f, "dma_buf_get" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "ib_core");

