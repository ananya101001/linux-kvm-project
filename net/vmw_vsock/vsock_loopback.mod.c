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
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x3cd17c27, "virtio_transport_consume_skb_sent" },
	{ 0xbc97ccb, "virtio_transport_deliver_tap_pkt" },
	{ 0xfe6d2e07, "virtio_transport_recv_pkt" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x27ae3002, "vsock_core_unregister" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0xea5b2bc4, "virtio_transport_do_socket_init" },
	{ 0x461e59b2, "virtio_transport_destruct" },
	{ 0xbe7e110e, "virtio_transport_release" },
	{ 0x1cd36f41, "virtio_transport_connect" },
	{ 0xe686a3da, "virtio_transport_dgram_bind" },
	{ 0xc9af45d, "virtio_transport_dgram_dequeue" },
	{ 0xa426143a, "virtio_transport_dgram_enqueue" },
	{ 0xbabd30f5, "virtio_transport_dgram_allow" },
	{ 0xfb5752c4, "virtio_transport_stream_dequeue" },
	{ 0x2fc35ee8, "virtio_transport_stream_enqueue" },
	{ 0xf388402e, "virtio_transport_stream_has_data" },
	{ 0xd15dc8d9, "virtio_transport_stream_has_space" },
	{ 0x3d980c3a, "virtio_transport_stream_rcvhiwat" },
	{ 0xa4398ee0, "virtio_transport_stream_is_active" },
	{ 0x3a81e69, "virtio_transport_stream_allow" },
	{ 0x2e1b7a89, "virtio_transport_seqpacket_dequeue" },
	{ 0xbcf82c24, "virtio_transport_seqpacket_enqueue" },
	{ 0x26d1ed49, "virtio_transport_seqpacket_has_data" },
	{ 0xdd2fd1c8, "virtio_transport_notify_poll_in" },
	{ 0x570c717c, "virtio_transport_notify_poll_out" },
	{ 0x9a568d6c, "virtio_transport_notify_recv_init" },
	{ 0xb958477a, "virtio_transport_notify_recv_pre_block" },
	{ 0x667cfb38, "virtio_transport_notify_recv_pre_dequeue" },
	{ 0x62de0cd3, "virtio_transport_notify_recv_post_dequeue" },
	{ 0x9e59d2e1, "virtio_transport_notify_send_init" },
	{ 0x6f97dfad, "virtio_transport_notify_send_pre_block" },
	{ 0xafa38444, "virtio_transport_notify_send_pre_enqueue" },
	{ 0xc3c9d21c, "virtio_transport_notify_send_post_enqueue" },
	{ 0xef644b11, "virtio_transport_notify_buffer_size" },
	{ 0xc64f9616, "virtio_transport_notify_set_rcvlowat" },
	{ 0xa8f5bf65, "virtio_transport_unsent_bytes" },
	{ 0xfc176943, "virtio_transport_shutdown" },
	{ 0x74aa0d88, "virtio_transport_read_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xf1171311, "vsock_core_register" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x1622a1c6, "virtio_transport_purge_skbs" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "vmw_vsock_virtio_transport_common,vsock");

