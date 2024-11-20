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

KSYMTAB_FUNC(vmci_context_get_priv_flags, "_gpl", "");
KSYMTAB_FUNC(vmci_is_context_owner, "_gpl", "");
KSYMTAB_FUNC(vmci_datagram_create_handle_priv, "_gpl", "");
KSYMTAB_FUNC(vmci_datagram_create_handle, "_gpl", "");
KSYMTAB_FUNC(vmci_datagram_destroy_handle, "_gpl", "");
KSYMTAB_FUNC(vmci_datagram_send, "_gpl", "");
KSYMTAB_FUNC(vmci_doorbell_create, "_gpl", "");
KSYMTAB_FUNC(vmci_doorbell_destroy, "_gpl", "");
KSYMTAB_FUNC(vmci_doorbell_notify, "_gpl", "");
KSYMTAB_FUNC(vmci_get_context_id, "_gpl", "");
KSYMTAB_FUNC(vmci_register_vsock_callback, "_gpl", "");
KSYMTAB_FUNC(vmci_event_subscribe, "_gpl", "");
KSYMTAB_FUNC(vmci_event_unsubscribe, "_gpl", "");
KSYMTAB_FUNC(vmci_send_datagram, "_gpl", "");
KSYMTAB_FUNC(vmci_qpair_alloc, "_gpl", "");
KSYMTAB_FUNC(vmci_qpair_detach, "_gpl", "");
KSYMTAB_FUNC(vmci_qpair_get_produce_indexes, "_gpl", "");
KSYMTAB_FUNC(vmci_qpair_get_consume_indexes, "_gpl", "");
KSYMTAB_FUNC(vmci_qpair_produce_free_space, "_gpl", "");
KSYMTAB_FUNC(vmci_qpair_consume_free_space, "_gpl", "");
KSYMTAB_FUNC(vmci_qpair_produce_buf_ready, "_gpl", "");
KSYMTAB_FUNC(vmci_qpair_consume_buf_ready, "_gpl", "");
KSYMTAB_FUNC(vmci_qpair_enqueue, "_gpl", "");
KSYMTAB_FUNC(vmci_qpair_dequeue, "_gpl", "");
KSYMTAB_FUNC(vmci_qpair_peek, "_gpl", "");
KSYMTAB_FUNC(vmci_qpair_enquev, "_gpl", "");
KSYMTAB_FUNC(vmci_qpair_dequev, "_gpl", "");
KSYMTAB_FUNC(vmci_qpair_peekv, "_gpl", "");

SYMBOL_CRC(vmci_context_get_priv_flags, 0x5591b58e, "_gpl");
SYMBOL_CRC(vmci_is_context_owner, 0xc403cafe, "_gpl");
SYMBOL_CRC(vmci_datagram_create_handle_priv, 0xde3abc2e, "_gpl");
SYMBOL_CRC(vmci_datagram_create_handle, 0x046dd187, "_gpl");
SYMBOL_CRC(vmci_datagram_destroy_handle, 0x3a22fa8a, "_gpl");
SYMBOL_CRC(vmci_datagram_send, 0xea143610, "_gpl");
SYMBOL_CRC(vmci_doorbell_create, 0xb572e830, "_gpl");
SYMBOL_CRC(vmci_doorbell_destroy, 0x5e949e0a, "_gpl");
SYMBOL_CRC(vmci_doorbell_notify, 0xbcb85f62, "_gpl");
SYMBOL_CRC(vmci_get_context_id, 0x056837fb, "_gpl");
SYMBOL_CRC(vmci_register_vsock_callback, 0x787f0fe8, "_gpl");
SYMBOL_CRC(vmci_event_subscribe, 0x2449459d, "_gpl");
SYMBOL_CRC(vmci_event_unsubscribe, 0xe11895c1, "_gpl");
SYMBOL_CRC(vmci_send_datagram, 0x75fe065a, "_gpl");
SYMBOL_CRC(vmci_qpair_alloc, 0xe0cc9c92, "_gpl");
SYMBOL_CRC(vmci_qpair_detach, 0x612df9ae, "_gpl");
SYMBOL_CRC(vmci_qpair_get_produce_indexes, 0x1fd4782d, "_gpl");
SYMBOL_CRC(vmci_qpair_get_consume_indexes, 0xc04c7e84, "_gpl");
SYMBOL_CRC(vmci_qpair_produce_free_space, 0x024d14bc, "_gpl");
SYMBOL_CRC(vmci_qpair_consume_free_space, 0x676bd843, "_gpl");
SYMBOL_CRC(vmci_qpair_produce_buf_ready, 0xea61eefe, "_gpl");
SYMBOL_CRC(vmci_qpair_consume_buf_ready, 0x7c74d7a6, "_gpl");
SYMBOL_CRC(vmci_qpair_enqueue, 0xe67343c1, "_gpl");
SYMBOL_CRC(vmci_qpair_dequeue, 0x81d61eef, "_gpl");
SYMBOL_CRC(vmci_qpair_peek, 0x4ba5c46b, "_gpl");
SYMBOL_CRC(vmci_qpair_enquev, 0x474e49c5, "_gpl");
SYMBOL_CRC(vmci_qpair_dequev, 0x7165ee23, "_gpl");
SYMBOL_CRC(vmci_qpair_peekv, 0x2426e19f, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92540fbf, "finish_wait" },
	{ 0x423a7b8f, "__pci_register_driver" },
	{ 0x69acdf38, "memcpy" },
	{ 0x94961283, "vunmap" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x8bc25944, "pci_irq_vector" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x6cc72ac6, "__dynamic_dev_dbg" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xd79a07ea, "pci_unregister_driver" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdaff2388, "__put_cred" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0xfbab1bb1, "ioread8_rep" },
	{ 0x5a549f7, "_dev_info" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc81ce80d, "compat_ptr_ioctl" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0xeba8abe7, "pcim_iomap_regions" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe8c1f7a0, "pci_iomap_range" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x25d9a822, "dma_alloc_attrs" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x9b555eee, "iov_iter_kvec" },
	{ 0x81547437, "vmap" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0xb5f4750d, "__put_devmap_managed_folio_refs" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xbfee4f4c, "pci_iounmap" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0xfb578fc5, "memset" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0xea43f98d, "misc_register" },
	{ 0xb72e7d4e, "pci_set_master" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x4dce513f, "dma_set_coherent_mask" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x54c15cee, "dma_free_attrs" },
	{ 0x999e8297, "vfree" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x22199426, "param_ops_bool" },
	{ 0x94c1bfc3, "__folio_put" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xc6cb32e5, "set_page_dirty_lock" },
	{ 0xeec9a487, "_copy_from_iter" },
	{ 0xe1779b47, "dma_set_mask" },
	{ 0x6c8ac046, "pcim_iomap_table" },
	{ 0x54a0e992, "iov_iter_revert" },
	{ 0x93933b99, "pcim_enable_device" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x4f9c66e8, "pci_free_irq_vectors" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x847188e8, "krealloc_noprof" },
	{ 0xa4b94fea, "iowrite8_rep" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8a35b432, "sme_me_mask" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8533fa83, "get_user_pages_fast" },
	{ 0xa78af5f3, "ioread32" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x639ccacd, "_copy_to_iter" },
	{ 0xf80d81c2, "misc_deregister" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x87b76953, "devm_kmalloc" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xb0e602eb, "memmove" },
	{ 0x7547b4a, "pci_alloc_irq_vectors" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000015ADd00000740sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "132F4F0519880C24B54EC80");
