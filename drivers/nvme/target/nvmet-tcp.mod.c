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
	{ 0x5698c163, "crypto_destroy_tfm" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xc8e628a2, "nvmet_sq_destroy" },
	{ 0x122c3a7e, "_printk" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x5e934fc7, "sgl_alloc" },
	{ 0x246e7f1a, "nvmet_unregister_transport" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd69c226b, "nvmet_req_init" },
	{ 0x37712435, "fput" },
	{ 0xe5590ebd, "init_net" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x6fc4a20a, "kernel_getpeername" },
	{ 0x83e6c952, "__SCK__tp_func_sk_data_ready" },
	{ 0xd9ab9937, "kernel_getsockname" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x5f445884, "kernel_sock_shutdown" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4904be9, "nvmet_register_transport" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xffb7c514, "ida_free" },
	{ 0x7f3e0d89, "inet_pton_with_scope" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x58d3c8ec, "sock_sendmsg" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xd4b37d87, "tcp_stream_memory_free" },
	{ 0x12ba8633, "sock_set_reuseaddr" },
	{ 0xe97b444e, "iov_iter_bvec" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x2e51c17d, "crypto_ahash_digest" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x9f30d669, "kernel_listen" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x1c2d99b4, "nvmet_sq_init" },
	{ 0xfbe215e4, "sg_next" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x7007a625, "sock_recvmsg" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x8d0e1b55, "sock_release" },
	{ 0x888a95a2, "tcp_sock_set_nodelay" },
	{ 0x3daad3a4, "nvmet_ctrl_fatal_error" },
	{ 0xef5d3b70, "nvmet_req_uninit" },
	{ 0xef7307ba, "page_frag_cache_drain" },
	{ 0x4ce0f44d, "__page_frag_alloc_align" },
	{ 0xc7a1840e, "llist_add_batch" },
	{ 0xeacb1238, "param_get_int" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0xaa8f1b71, "inet_addr_is_any" },
	{ 0x5d78eaca, "kernel_sendmsg" },
	{ 0x7f62eaa4, "sgl_free" },
	{ 0x3e0ef07a, "nvmet_wq" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xeb515a8f, "sock_no_linger" },
	{ 0xa84653c0, "crypto_alloc_ahash" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x28f4a456, "tls_alert_recv" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xd2f71c6e, "ip_sock_set_tos" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa85bbe00, "__SCT__tp_func_sk_data_ready" },
	{ 0xe3c191d3, "nvmet_req_complete" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xedc25195, "kernel_bind" },
	{ 0xef1cc86c, "sock_create" },
	{ 0x9a10294c, "tls_handshake_cancel" },
	{ 0xa0cf7158, "tls_get_record_type" },
	{ 0x37a0cba, "kfree" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x43babd19, "sg_init_one" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0xa68216d0, "__tracepoint_sk_data_ready" },
	{ 0xa90b9bf5, "kernel_accept" },
	{ 0x7995fd1, "kernel_recvmsg" },
	{ 0xac9cb618, "sock_alloc_file" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x271e1100, "sock_set_priority" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nvmet");

