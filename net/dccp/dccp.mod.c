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

KSYMTAB_FUNC(dccp_feat_list_purge, "_gpl", "");
KSYMTAB_FUNC(dccp_feat_nn_get, "_gpl", "");
KSYMTAB_FUNC(dccp_feat_signal_nn_change, "_gpl", "");
KSYMTAB_FUNC(dccp_rcv_established, "_gpl", "");
KSYMTAB_FUNC(dccp_rcv_state_process, "_gpl", "");
KSYMTAB_DATA(dccp_death_row, "_gpl", "");
KSYMTAB_FUNC(dccp_create_openreq_child, "_gpl", "");
KSYMTAB_FUNC(dccp_check_req, "_gpl", "");
KSYMTAB_FUNC(dccp_child_process, "_gpl", "");
KSYMTAB_FUNC(dccp_reqsk_send_ack, "_gpl", "");
KSYMTAB_FUNC(dccp_reqsk_init, "_gpl", "");
KSYMTAB_FUNC(dccp_parse_options, "_gpl", "");
KSYMTAB_FUNC(dccp_insert_option, "_gpl", "");
KSYMTAB_FUNC(dccp_sync_mss, "_gpl", "");
KSYMTAB_FUNC(dccp_make_response, "_gpl", "");
KSYMTAB_FUNC(dccp_ctl_make_reset, "_gpl", "");
KSYMTAB_FUNC(dccp_connect, "_gpl", "");
KSYMTAB_FUNC(dccp_send_ack, "_gpl", "");
KSYMTAB_FUNC(dccp_send_sync, "_gpl", "");
KSYMTAB_DATA(dccp_statistics, "_gpl", "");
KSYMTAB_DATA(dccp_orphan_count, "_gpl", "");
KSYMTAB_DATA(dccp_hashinfo, "_gpl", "");
KSYMTAB_FUNC(dccp_set_state, "_gpl", "");
KSYMTAB_FUNC(dccp_done, "_gpl", "");
KSYMTAB_FUNC(dccp_packet_name, "_gpl", "");
KSYMTAB_FUNC(dccp_destruct_common, "_gpl", "");
KSYMTAB_FUNC(dccp_init_sock, "_gpl", "");
KSYMTAB_FUNC(dccp_destroy_sock, "_gpl", "");
KSYMTAB_FUNC(dccp_disconnect, "_gpl", "");
KSYMTAB_FUNC(dccp_poll, "_gpl", "");
KSYMTAB_FUNC(dccp_ioctl, "_gpl", "");
KSYMTAB_FUNC(dccp_setsockopt, "_gpl", "");
KSYMTAB_FUNC(dccp_getsockopt, "_gpl", "");
KSYMTAB_FUNC(dccp_sendmsg, "_gpl", "");
KSYMTAB_FUNC(dccp_recvmsg, "_gpl", "");
KSYMTAB_FUNC(inet_dccp_listen, "_gpl", "");
KSYMTAB_FUNC(dccp_close, "_gpl", "");
KSYMTAB_FUNC(dccp_shutdown, "_gpl", "");
KSYMTAB_FUNC(dccp_timestamp, "_gpl", "");
KSYMTAB_FUNC(dccp_ackvec_parsed_add, "_gpl", "");
KSYMTAB_FUNC(dccp_ackvec_parsed_cleanup, "_gpl", "");

SYMBOL_CRC(dccp_feat_list_purge, 0x4cdd391d, "_gpl");
SYMBOL_CRC(dccp_feat_nn_get, 0xbf9cbdcf, "_gpl");
SYMBOL_CRC(dccp_feat_signal_nn_change, 0x83a626a7, "_gpl");
SYMBOL_CRC(dccp_rcv_established, 0xf0b2aeec, "_gpl");
SYMBOL_CRC(dccp_rcv_state_process, 0x2f61abb9, "_gpl");
SYMBOL_CRC(dccp_death_row, 0x8171199a, "_gpl");
SYMBOL_CRC(dccp_create_openreq_child, 0xf319bab4, "_gpl");
SYMBOL_CRC(dccp_check_req, 0x7fefe06e, "_gpl");
SYMBOL_CRC(dccp_child_process, 0xde89217a, "_gpl");
SYMBOL_CRC(dccp_reqsk_send_ack, 0xcaa7240a, "_gpl");
SYMBOL_CRC(dccp_reqsk_init, 0x7ae0d2c4, "_gpl");
SYMBOL_CRC(dccp_parse_options, 0x308bff78, "_gpl");
SYMBOL_CRC(dccp_insert_option, 0xe31df893, "_gpl");
SYMBOL_CRC(dccp_sync_mss, 0x25072a55, "_gpl");
SYMBOL_CRC(dccp_make_response, 0x8a385826, "_gpl");
SYMBOL_CRC(dccp_ctl_make_reset, 0xcbce36b3, "_gpl");
SYMBOL_CRC(dccp_connect, 0x9145bafa, "_gpl");
SYMBOL_CRC(dccp_send_ack, 0x9fbaed3e, "_gpl");
SYMBOL_CRC(dccp_send_sync, 0xdb533b0e, "_gpl");
SYMBOL_CRC(dccp_statistics, 0x59814a84, "_gpl");
SYMBOL_CRC(dccp_orphan_count, 0xd75b7072, "_gpl");
SYMBOL_CRC(dccp_hashinfo, 0xd7cdb975, "_gpl");
SYMBOL_CRC(dccp_set_state, 0x30565d78, "_gpl");
SYMBOL_CRC(dccp_done, 0x8ea74905, "_gpl");
SYMBOL_CRC(dccp_packet_name, 0x86be7924, "_gpl");
SYMBOL_CRC(dccp_destruct_common, 0x0aed1610, "_gpl");
SYMBOL_CRC(dccp_init_sock, 0xd487d1ae, "_gpl");
SYMBOL_CRC(dccp_destroy_sock, 0xd7d94a9f, "_gpl");
SYMBOL_CRC(dccp_disconnect, 0xe981f4de, "_gpl");
SYMBOL_CRC(dccp_poll, 0xec308f3d, "_gpl");
SYMBOL_CRC(dccp_ioctl, 0x3ba70e69, "_gpl");
SYMBOL_CRC(dccp_setsockopt, 0x11d9a4cb, "_gpl");
SYMBOL_CRC(dccp_getsockopt, 0x182dee15, "_gpl");
SYMBOL_CRC(dccp_sendmsg, 0x413e6c34, "_gpl");
SYMBOL_CRC(dccp_recvmsg, 0x51ef2fbc, "_gpl");
SYMBOL_CRC(inet_dccp_listen, 0xb2bd4209, "_gpl");
SYMBOL_CRC(dccp_close, 0x00f032bd, "_gpl");
SYMBOL_CRC(dccp_shutdown, 0x99b615c0, "_gpl");
SYMBOL_CRC(dccp_timestamp, 0x80993155, "_gpl");
SYMBOL_CRC(dccp_ackvec_parsed_add, 0x182ec2bf, "_gpl");
SYMBOL_CRC(dccp_ackvec_parsed_cleanup, 0x9598d24d, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x122c3a7e, "_printk" },
	{ 0xa315ca2, "inet_csk_init_xmit_timers" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xc8827b75, "sysctl_vals" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0x1f4733b3, "__alloc_skb" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x7c87ef04, "sk_reset_timer" },
	{ 0x26b65873, "skb_queue_tail" },
	{ 0x33486529, "sk_stream_wait_close" },
	{ 0x33338211, "rcuref_get_slowpath" },
	{ 0x8b38092, "perf_trace_buf_alloc" },
	{ 0x9cb54e2f, "perf_trace_run_bpf_submit" },
	{ 0xe5590ebd, "init_net" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xbca24e1e, "ip6_mtu" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0x98a94a64, "sk_free" },
	{ 0x907d61c4, "sock_wake_async" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x6775c90f, "skb_push" },
	{ 0xb609162e, "kmem_cache_free" },
	{ 0x896c49d8, "proc_doulongvec_minmax" },
	{ 0xde6889d3, "trace_event_reg" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xdc145e5, "lock_sock_nested" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x944375db, "_totalram_pages" },
	{ 0x8cb7c95, "skb_copy_datagram_iter" },
	{ 0xd4b37d87, "tcp_stream_memory_free" },
	{ 0x9591300f, "skb_checksum" },
	{ 0xfb578fc5, "memset" },
	{ 0xf74d893d, "sk_wait_data" },
	{ 0x1dd2c259, "inet_csk_clone_lock" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xc8817ac9, "kmem_cache_alloc_noprof" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd401ea77, "inet_twsk_hashdance_schedule" },
	{ 0x9207278f, "__kmem_cache_create_args" },
	{ 0xe69d82f3, "skb_unlink" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf95cece9, "inet_csk_listen_start" },
	{ 0x935d7664, "sk_free_unlock_clone" },
	{ 0xd2826095, "sock_rfree" },
	{ 0x39374f5e, "ipv4_mtu" },
	{ 0xc25d94c1, "pcpu_alloc_noprof" },
	{ 0x9b2319ad, "skb_set_owner_w" },
	{ 0x3c7a51a5, "trace_event_buffer_reserve" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x22199426, "param_ops_bool" },
	{ 0xf1ece1d0, "sock_alloc_send_pskb" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0xa542eb90, "skb_clone" },
	{ 0x268366b, "inet_sk_set_state" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xf04a650c, "dst_release" },
	{ 0x7274f4fa, "sk_stream_wait_connect" },
	{ 0xeec9a487, "_copy_from_iter" },
	{ 0x3531a3d0, "inet_csk_destroy_sock" },
	{ 0xccb4fee5, "sk_stop_timer" },
	{ 0x5ac8c04c, "unregister_net_sysctl_table" },
	{ 0x48aebcf1, "inet_rtx_syn_ack" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0x54a0e992, "iov_iter_revert" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xccf69887, "get_free_pages_noprof" },
	{ 0x2c6f1eb1, "inet_csk_listen_stop" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x4697cae8, "__kfree_skb" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x6c90184e, "kmem_cache_destroy" },
	{ 0x68f44e23, "inet_csk_complete_hashdance" },
	{ 0xdb579ef1, "release_sock" },
	{ 0x2cb40d10, "inet_csk_reqsk_queue_drop" },
	{ 0x3eca0c01, "proc_dointvec_minmax" },
	{ 0x3e0a087f, "inet_hashinfo2_init_mod" },
	{ 0x5db96312, "inet_bhash2_reset_saddr" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x174e6c46, "inet_ehash_locks_alloc" },
	{ 0xd6625cfb, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xe065f55b, "consume_skb" },
	{ 0x942c595, "sock_wmalloc" },
	{ 0xc1cc4ef1, "trace_raw_output_prep" },
	{ 0xf7157488, "skb_dequeue" },
	{ 0xc5597d14, "__trace_trigger_soft_disabled" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x825be683, "trace_event_printf" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x9ae4e426, "__kmalloc_node_track_caller_noprof" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xaf437a95, "trace_event_raw_init" },
	{ 0x266f0d20, "proc_dointvec_ms_jiffies" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0xcf8e538f, "bpf_trace_run2" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xe2964344, "__wake_up" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xf07065c7, "inet_csk_clear_xmit_timers" },
	{ 0x148653, "vsnprintf" },
	{ 0xb77626c1, "inet_twsk_alloc" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x80792a17, "sk_error_report" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x6d9e9eae, "trace_event_buffer_commit" },
	{ 0xa4f84056, "register_net_sysctl_sz" },
	{ 0x7887b958, "inet_sock_destruct" },
	{ 0x26a22323, "inet_put_port" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

