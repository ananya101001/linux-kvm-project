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
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa85bbe00, "__SCT__tp_func_sk_data_ready" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xedc25195, "kernel_bind" },
	{ 0xbc4032fd, "rds_trans_unregister" },
	{ 0xd1b51ef, "rds_info_deregister_func" },
	{ 0x37a0cba, "kfree" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0xa68216d0, "__tracepoint_sk_data_ready" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe893d918, "__module_get" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2beb13a8, "skb_queue_purge_reason" },
	{ 0xa4f84056, "register_net_sysctl_sz" },
	{ 0x7d541a23, "tcp_sock_set_keepcnt" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0xa467af, "rds_wq" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x26b65873, "skb_queue_tail" },
	{ 0x555f6fbc, "rds_conn_destroy" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe5590ebd, "init_net" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xebe85537, "rds_send_path_drop_acked" },
	{ 0x83e6c952, "__SCK__tp_func_sk_data_ready" },
	{ 0x55d5f0df, "dev_get_by_index_rcu" },
	{ 0x5f445884, "kernel_sock_shutdown" },
	{ 0xc2dab779, "rds_info_copy" },
	{ 0x85e4e520, "rds_stats_info_copy" },
	{ 0xdf45f463, "rds_inc_put" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xb609162e, "kmem_cache_free" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x58d3c8ec, "sock_sendmsg" },
	{ 0x50ce71b0, "rds_info_register_func" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x86512576, "unregister_pernet_device" },
	{ 0xdc145e5, "lock_sock_nested" },
	{ 0x4d4a418, "inet_addr_type" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8cb7c95, "skb_copy_datagram_iter" },
	{ 0x97db9420, "pskb_extract" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xb62635b2, "kernel_connect" },
	{ 0xb324f814, "rds_connect_path_complete" },
	{ 0xe97b444e, "iov_iter_bvec" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xc8817ac9, "kmem_cache_alloc_noprof" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9207278f, "__kmem_cache_create_args" },
	{ 0x3889d8ca, "rds_recv_incoming" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3674db8e, "sock_create_kern" },
	{ 0xbadb6db0, "rds_conn_create" },
	{ 0x34a50995, "rds_send_ping" },
	{ 0x36087aa4, "rds_stats" },
	{ 0xf83a2910, "rds_inc_path_init" },
	{ 0x8d0e1b55, "sock_release" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0xaec367ad, "tcp_sock_set_keepidle" },
	{ 0x888a95a2, "tcp_sock_set_nodelay" },
	{ 0x4dbabcd5, "rds_conn_path_drop" },
	{ 0x5ac8c04c, "unregister_net_sysctl_table" },
	{ 0x55c28c9f, "ipv6_chk_addr" },
	{ 0xa976b456, "sock_create_lite" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x5d78eaca, "kernel_sendmsg" },
	{ 0xf4b24cfc, "rds_trans_register" },
	{ 0xa47c4028, "register_pernet_device" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x7ac1254b, "local_clock" },
	{ 0x6c90184e, "kmem_cache_destroy" },
	{ 0xdb579ef1, "release_sock" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xeb515a8f, "sock_no_linger" },
	{ 0x3eca0c01, "proc_dointvec_minmax" },
	{ 0x2f68abb4, "sock_set_keepalive" },
	{ 0x1fe86c0, "tcp_sock_set_keepintvl" },
	{ 0x200b2041, "in6addr_any" },
	{ 0x20c5e653, "rds_cong_map_updated" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x80aa30e7, "tcp_sock_set_cork" },
	{ 0x36186ba9, "rds_send_path_reset" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xe4d689e9, "tcp_read_sock" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0xb519a391, "rds_conn_path_connect_if_down" },
	{ 0x45a4781e, "rds_addr_cmp" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "rds");

