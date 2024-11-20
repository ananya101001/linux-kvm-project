#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(virtio_transport_deliver_tap_pkt, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_inc_tx_pkt, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_consume_skb_sent, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_get_credit, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_put_credit, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_stream_dequeue, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_seqpacket_dequeue, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_seqpacket_enqueue, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_dgram_dequeue, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_stream_has_data, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_seqpacket_has_data, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_stream_has_space, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_do_socket_init, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_notify_buffer_size, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_notify_poll_in, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_notify_poll_out, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_notify_recv_init, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_notify_recv_pre_block, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_notify_recv_pre_dequeue, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_notify_recv_post_dequeue, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_notify_send_init, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_notify_send_pre_block, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_notify_send_pre_enqueue, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_notify_send_post_enqueue, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_stream_rcvhiwat, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_stream_is_active, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_stream_allow, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_dgram_bind, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_dgram_allow, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_connect, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_shutdown, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_dgram_enqueue, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_stream_enqueue, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_destruct, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_unsent_bytes, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_release, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_recv_pkt, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_purge_skbs, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_read_skb, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_notify_set_rcvlowat, "_gpl", "");

SYMBOL_CRC(virtio_transport_deliver_tap_pkt, 0x0bc97ccb, "_gpl");
SYMBOL_CRC(virtio_transport_inc_tx_pkt, 0xaeb33c91, "_gpl");
SYMBOL_CRC(virtio_transport_consume_skb_sent, 0x3cd17c27, "_gpl");
SYMBOL_CRC(virtio_transport_get_credit, 0x7c1b31f0, "_gpl");
SYMBOL_CRC(virtio_transport_put_credit, 0xaee825b6, "_gpl");
SYMBOL_CRC(virtio_transport_stream_dequeue, 0xfb5752c4, "_gpl");
SYMBOL_CRC(virtio_transport_seqpacket_dequeue, 0x2e1b7a89, "_gpl");
SYMBOL_CRC(virtio_transport_seqpacket_enqueue, 0xbcf82c24, "_gpl");
SYMBOL_CRC(virtio_transport_dgram_dequeue, 0x0c9af45d, "_gpl");
SYMBOL_CRC(virtio_transport_stream_has_data, 0xf388402e, "_gpl");
SYMBOL_CRC(virtio_transport_seqpacket_has_data, 0x26d1ed49, "_gpl");
SYMBOL_CRC(virtio_transport_stream_has_space, 0xd15dc8d9, "_gpl");
SYMBOL_CRC(virtio_transport_do_socket_init, 0xea5b2bc4, "_gpl");
SYMBOL_CRC(virtio_transport_notify_buffer_size, 0xef644b11, "_gpl");
SYMBOL_CRC(virtio_transport_notify_poll_in, 0xdd2fd1c8, "_gpl");
SYMBOL_CRC(virtio_transport_notify_poll_out, 0x570c717c, "_gpl");
SYMBOL_CRC(virtio_transport_notify_recv_init, 0x9a568d6c, "_gpl");
SYMBOL_CRC(virtio_transport_notify_recv_pre_block, 0xb958477a, "_gpl");
SYMBOL_CRC(virtio_transport_notify_recv_pre_dequeue, 0x667cfb38, "_gpl");
SYMBOL_CRC(virtio_transport_notify_recv_post_dequeue, 0x62de0cd3, "_gpl");
SYMBOL_CRC(virtio_transport_notify_send_init, 0x9e59d2e1, "_gpl");
SYMBOL_CRC(virtio_transport_notify_send_pre_block, 0x6f97dfad, "_gpl");
SYMBOL_CRC(virtio_transport_notify_send_pre_enqueue, 0xafa38444, "_gpl");
SYMBOL_CRC(virtio_transport_notify_send_post_enqueue, 0xc3c9d21c, "_gpl");
SYMBOL_CRC(virtio_transport_stream_rcvhiwat, 0x3d980c3a, "_gpl");
SYMBOL_CRC(virtio_transport_stream_is_active, 0xa4398ee0, "_gpl");
SYMBOL_CRC(virtio_transport_stream_allow, 0x03a81e69, "_gpl");
SYMBOL_CRC(virtio_transport_dgram_bind, 0xe686a3da, "_gpl");
SYMBOL_CRC(virtio_transport_dgram_allow, 0xbabd30f5, "_gpl");
SYMBOL_CRC(virtio_transport_connect, 0x1cd36f41, "_gpl");
SYMBOL_CRC(virtio_transport_shutdown, 0xfc176943, "_gpl");
SYMBOL_CRC(virtio_transport_dgram_enqueue, 0xa426143a, "_gpl");
SYMBOL_CRC(virtio_transport_stream_enqueue, 0x2fc35ee8, "_gpl");
SYMBOL_CRC(virtio_transport_destruct, 0x461e59b2, "_gpl");
SYMBOL_CRC(virtio_transport_unsent_bytes, 0xa8f5bf65, "_gpl");
SYMBOL_CRC(virtio_transport_release, 0xbe7e110e, "_gpl");
SYMBOL_CRC(virtio_transport_recv_pkt, 0xfe6d2e07, "_gpl");
SYMBOL_CRC(virtio_transport_purge_skbs, 0x1622a1c6, "_gpl");
SYMBOL_CRC(virtio_transport_read_skb, 0x74aa0d88, "_gpl");
SYMBOL_CRC(virtio_transport_notify_set_rcvlowat, 0xc64f9616, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x825be683, "trace_event_printf" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x8ed7363d, "vsock_deliver_tap" },
	{ 0xaf437a95, "trace_event_raw_init" },
	{ 0x8900d05a, "trace_print_symbols_seq" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x80792a17, "sk_error_report" },
	{ 0x6d9e9eae, "trace_event_buffer_commit" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x6e05851a, "vsock_find_bound_socket" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x3d4b0fca, "vsock_addr_init" },
	{ 0x1f4733b3, "__alloc_skb" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x8b38092, "perf_trace_buf_alloc" },
	{ 0x9cb54e2f, "perf_trace_run_bpf_submit" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0x98a94a64, "sk_free" },
	{ 0xde6889d3, "trace_event_reg" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xae7849f0, "__skb_recv_datagram" },
	{ 0xdc145e5, "lock_sock_nested" },
	{ 0x8687ecdb, "vsock_stream_has_data" },
	{ 0x8cb7c95, "skb_copy_datagram_iter" },
	{ 0x4d609079, "bpf_trace_run9" },
	{ 0x33dbdbd3, "vsock_find_connected_socket" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0x76afd79e, "sock_efree" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x26ae9e2c, "bpf_trace_run10" },
	{ 0x528b40e, "vsock_core_get_transport" },
	{ 0xe16c895f, "__zerocopy_sg_from_iter" },
	{ 0xb3ec00e, "vsock_stream_has_space" },
	{ 0x9b2319ad, "skb_set_owner_w" },
	{ 0x3c7a51a5, "trace_event_buffer_reserve" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xeec9a487, "_copy_from_iter" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x5fc696d3, "msg_zerocopy_realloc" },
	{ 0xfc9f808c, "vsock_create_connected" },
	{ 0x22bb84d, "vsock_assign_transport" },
	{ 0x54a0e992, "iov_iter_revert" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0xb30483ee, "iov_iter_npages" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xdb579ef1, "release_sock" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x522b5d4c, "vsock_data_ready" },
	{ 0x594dfab3, "vsock_enqueue_accept" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe5e4d6d2, "vsock_insert_connected" },
	{ 0xd6625cfb, "skb_put" },
	{ 0xe065f55b, "consume_skb" },
	{ 0xc1cc4ef1, "trace_raw_output_prep" },
	{ 0xc5597d14, "__trace_trigger_soft_disabled" },
	{ 0xf662c096, "vsock_remove_sock" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "vsock");

