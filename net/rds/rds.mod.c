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

KSYMTAB_FUNC(rds_cong_map_updated, "_gpl", "");
KSYMTAB_FUNC(rds_conn_create, "_gpl", "");
KSYMTAB_FUNC(rds_conn_create_outgoing, "_gpl", "");
KSYMTAB_FUNC(rds_conn_destroy, "_gpl", "");
KSYMTAB_FUNC(rds_for_each_conn_info, "_gpl", "");
KSYMTAB_FUNC(rds_conn_path_drop, "_gpl", "");
KSYMTAB_FUNC(rds_conn_drop, "_gpl", "");
KSYMTAB_FUNC(rds_conn_path_connect_if_down, "_gpl", "");
KSYMTAB_FUNC(rds_conn_connect_if_down, "_gpl", "");
KSYMTAB_FUNC(rds_info_register_func, "_gpl", "");
KSYMTAB_FUNC(rds_info_deregister_func, "_gpl", "");
KSYMTAB_FUNC(rds_info_copy, "_gpl", "");
KSYMTAB_FUNC(rds_message_addref, "_gpl", "");
KSYMTAB_FUNC(rds_message_put, "_gpl", "");
KSYMTAB_FUNC(rds_message_populate_header, "_gpl", "");
KSYMTAB_FUNC(rds_message_add_extension, "_gpl", "");
KSYMTAB_FUNC(rds_message_add_rdma_dest_extension, "_gpl", "");
KSYMTAB_FUNC(rds_message_unmapped, "_gpl", "");
KSYMTAB_FUNC(rds_inc_init, "_gpl", "");
KSYMTAB_FUNC(rds_inc_path_init, "_gpl", "");
KSYMTAB_FUNC(rds_inc_put, "_gpl", "");
KSYMTAB_FUNC(rds_recv_incoming, "_gpl", "");
KSYMTAB_FUNC(rds_send_path_reset, "_gpl", "");
KSYMTAB_FUNC(rds_send_xmit, "_gpl", "");
KSYMTAB_FUNC(rds_rdma_send_complete, "_gpl", "");
KSYMTAB_FUNC(rds_atomic_send_complete, "_gpl", "");
KSYMTAB_FUNC(rds_send_path_drop_acked, "_gpl", "");
KSYMTAB_FUNC(rds_send_drop_acked, "_gpl", "");
KSYMTAB_FUNC(rds_send_ping, "_gpl", "");
KSYMTAB_DATA(rds_stats, "_gpl", "");
KSYMTAB_FUNC(rds_stats_info_copy, "_gpl", "");
KSYMTAB_DATA(rds_wq, "_gpl", "");
KSYMTAB_FUNC(rds_connect_path_complete, "_gpl", "");
KSYMTAB_FUNC(rds_connect_complete, "_gpl", "");
KSYMTAB_FUNC(rds_addr_cmp, "_gpl", "");
KSYMTAB_FUNC(rds_trans_register, "_gpl", "");
KSYMTAB_FUNC(rds_trans_unregister, "_gpl", "");
KSYMTAB_FUNC(rds_page_remainder_alloc, "_gpl", "");

SYMBOL_CRC(rds_cong_map_updated, 0x20c5e653, "_gpl");
SYMBOL_CRC(rds_conn_create, 0xbadb6db0, "_gpl");
SYMBOL_CRC(rds_conn_create_outgoing, 0x0bec6cce, "_gpl");
SYMBOL_CRC(rds_conn_destroy, 0x555f6fbc, "_gpl");
SYMBOL_CRC(rds_for_each_conn_info, 0xd5886c36, "_gpl");
SYMBOL_CRC(rds_conn_path_drop, 0x4dbabcd5, "_gpl");
SYMBOL_CRC(rds_conn_drop, 0x3d84ff85, "_gpl");
SYMBOL_CRC(rds_conn_path_connect_if_down, 0xb519a391, "_gpl");
SYMBOL_CRC(rds_conn_connect_if_down, 0x7c5411db, "_gpl");
SYMBOL_CRC(rds_info_register_func, 0x50ce71b0, "_gpl");
SYMBOL_CRC(rds_info_deregister_func, 0x0d1b51ef, "_gpl");
SYMBOL_CRC(rds_info_copy, 0xc2dab779, "_gpl");
SYMBOL_CRC(rds_message_addref, 0xdc64ced9, "_gpl");
SYMBOL_CRC(rds_message_put, 0x209f2466, "_gpl");
SYMBOL_CRC(rds_message_populate_header, 0x585f567b, "_gpl");
SYMBOL_CRC(rds_message_add_extension, 0x2b0d543c, "_gpl");
SYMBOL_CRC(rds_message_add_rdma_dest_extension, 0x582fe5cf, "_gpl");
SYMBOL_CRC(rds_message_unmapped, 0x3b45ef0b, "_gpl");
SYMBOL_CRC(rds_inc_init, 0x5a9c8c1c, "_gpl");
SYMBOL_CRC(rds_inc_path_init, 0xf83a2910, "_gpl");
SYMBOL_CRC(rds_inc_put, 0xdf45f463, "_gpl");
SYMBOL_CRC(rds_recv_incoming, 0x3889d8ca, "_gpl");
SYMBOL_CRC(rds_send_path_reset, 0x36186ba9, "_gpl");
SYMBOL_CRC(rds_send_xmit, 0x218d9b9e, "_gpl");
SYMBOL_CRC(rds_rdma_send_complete, 0xbcf4156a, "_gpl");
SYMBOL_CRC(rds_atomic_send_complete, 0xf292ebb0, "_gpl");
SYMBOL_CRC(rds_send_path_drop_acked, 0xebe85537, "_gpl");
SYMBOL_CRC(rds_send_drop_acked, 0xb97dad4a, "_gpl");
SYMBOL_CRC(rds_send_ping, 0x34a50995, "_gpl");
SYMBOL_CRC(rds_stats, 0x36087aa4, "_gpl");
SYMBOL_CRC(rds_stats_info_copy, 0x85e4e520, "_gpl");
SYMBOL_CRC(rds_wq, 0x00a467af, "_gpl");
SYMBOL_CRC(rds_connect_path_complete, 0xb324f814, "_gpl");
SYMBOL_CRC(rds_connect_complete, 0x75b87f0a, "_gpl");
SYMBOL_CRC(rds_addr_cmp, 0x45a4781e, "_gpl");
SYMBOL_CRC(rds_trans_register, 0xf4b24cfc, "_gpl");
SYMBOL_CRC(rds_trans_unregister, 0xbc4032fd, "_gpl");
SYMBOL_CRC(rds_page_remainder_alloc, 0x9dcbbbf0, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe2964344, "__wake_up" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xba90aba0, "put_cmsg" },
	{ 0xa4f84056, "register_net_sysctl_sz" },
	{ 0xdf2ebb87, "_raw_read_unlock_irqrestore" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x6b853d06, "ns_to_kernel_old_timeval" },
	{ 0x18c05d36, "proto_unregister" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xddd9a9d2, "sock_register" },
	{ 0x830e1ce4, "mm_account_pinned_pages" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xa916b694, "strnlen" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x686a1b5, "__free_pages" },
	{ 0xb1342cdb, "_raw_read_lock_irqsave" },
	{ 0xd327bfd0, "proto_register" },
	{ 0x7f1fd79f, "module_put" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x8f14d45b, "get_zeroed_page_noprof" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0x17574c5c, "sock_no_shutdown" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x57bc19d2, "down_write" },
	{ 0xe5590ebd, "init_net" },
	{ 0xce807a25, "up_write" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xbc01ddc0, "proc_doulongvec_ms_jiffies_minmax" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x98a94a64, "sk_free" },
	{ 0x395738dd, "sock_no_accept" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0xb609162e, "kmem_cache_free" },
	{ 0x715a5ed0, "vprintk" },
	{ 0xfa6431fc, "sock_no_listen" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x9166fada, "strncpy" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x54fe64c5, "sock_recv_errqueue" },
	{ 0x574f2b8a, "mm_unaccount_pinned_pages" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x86512576, "unregister_pernet_device" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xdc145e5, "lock_sock_nested" },
	{ 0xbfc4a2e9, "copy_page_to_iter" },
	{ 0xb5f4750d, "__put_devmap_managed_folio_refs" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x9e90bee3, "sk_alloc" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xf6c2d54b, "sock_no_socketpair" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0xb202f0d7, "rht_bucket_nested_insert" },
	{ 0x2f8c7b64, "unpin_user_page" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xc8817ac9, "kmem_cache_alloc_noprof" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xb8c586b9, "sock_no_mmap" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xece784c2, "rb_first" },
	{ 0x2a5ea9ef, "rhashtable_destroy" },
	{ 0x9207278f, "__kmem_cache_create_args" },
	{ 0xeb078aee, "_raw_write_unlock_irqrestore" },
	{ 0x668b19a1, "down_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8d18ae29, "copy_page_from_iter" },
	{ 0xe37056dc, "pv_ops" },
	{ 0xe0313d71, "rhashtable_insert_slow" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc732619, "sock_i_ino" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0x28839c12, "rhashtable_init_noprof" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x94c1bfc3, "__folio_put" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x5717123e, "alloc_pages_noprof" },
	{ 0xf943375f, "proc_dointvec" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x5ac8c04c, "unregister_net_sysctl_table" },
	{ 0x5021bd81, "_raw_write_lock_irqsave" },
	{ 0x754d539c, "strlen" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0x54a0e992, "iov_iter_revert" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0x53b954a2, "up_read" },
	{ 0xcc5d22d9, "can_do_mlock" },
	{ 0xa47c4028, "register_pernet_device" },
	{ 0xb30483ee, "iov_iter_npages" },
	{ 0xd4ec10e6, "BUG_func" },
	{ 0x2cf0c910, "sg_init_table" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf5cef368, "sock_init_data" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x7ac1254b, "local_clock" },
	{ 0x847188e8, "krealloc_noprof" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x6c90184e, "kmem_cache_destroy" },
	{ 0xdb579ef1, "release_sock" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xd5a5a065, "pin_user_pages_fast" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x200b2041, "in6addr_any" },
	{ 0x453ca149, "__do_once_done" },
	{ 0x1f7fdb27, "try_module_get" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0xcb3888f2, "unpin_user_pages_dirty_lock" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xafd744c6, "__x86_indirect_thunk_rbp" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xdf36bc0b, "unpin_user_pages" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xcb719a8f, "iov_iter_get_pages2" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x44f0ad9, "get_random_u16" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "30D6E06289DF622C355A944");
