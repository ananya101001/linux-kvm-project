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
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xdb579ef1, "release_sock" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x522b5d4c, "vsock_data_ready" },
	{ 0x594dfab3, "vsock_enqueue_accept" },
	{ 0x49b41df7, "skb_free_datagram" },
	{ 0xde3abc2e, "vmci_datagram_create_handle_priv" },
	{ 0x5591b58e, "vmci_context_get_priv_flags" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe5e4d6d2, "vsock_insert_connected" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x1fd4782d, "vmci_qpair_get_produce_indexes" },
	{ 0x7c74d7a6, "vmci_qpair_consume_buf_ready" },
	{ 0xd6625cfb, "skb_put" },
	{ 0x6baa765d, "vsock_for_each_connected_socket" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3a22fa8a, "vmci_datagram_destroy_handle" },
	{ 0xf662c096, "vsock_remove_sock" },
	{ 0x69acdf38, "memcpy" },
	{ 0xea61eefe, "vmci_qpair_produce_buf_ready" },
	{ 0x37a0cba, "kfree" },
	{ 0x2449459d, "vmci_event_subscribe" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xea143610, "vmci_datagram_send" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x80792a17, "sk_error_report" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xad709d16, "vsock_remove_connected" },
	{ 0x6e05851a, "vsock_find_bound_socket" },
	{ 0x122c3a7e, "_printk" },
	{ 0x24d14bc, "vmci_qpair_produce_free_space" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x3d4b0fca, "vsock_addr_init" },
	{ 0xcc4d34e7, "vsock_remove_pending" },
	{ 0x1f4733b3, "__alloc_skb" },
	{ 0x4b99648c, "vsock_addr_bound" },
	{ 0xc6cbbc89, "capable" },
	{ 0xc07bea73, "__sk_receive_skb" },
	{ 0xc04c7e84, "vmci_qpair_get_consume_indexes" },
	{ 0x98a94a64, "sk_free" },
	{ 0xaf2674b5, "vsock_addr_equals_addr" },
	{ 0x676bd843, "vmci_qpair_consume_free_space" },
	{ 0x27ae3002, "vsock_core_unregister" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x2426e19f, "vmci_qpair_peekv" },
	{ 0xdc145e5, "lock_sock_nested" },
	{ 0xc403cafe, "vmci_is_context_owner" },
	{ 0x46dd187, "vmci_datagram_create_handle" },
	{ 0x8687ecdb, "vsock_stream_has_data" },
	{ 0x8cb7c95, "skb_copy_datagram_iter" },
	{ 0xf1171311, "vsock_core_register" },
	{ 0xe0cc9c92, "vmci_qpair_alloc" },
	{ 0x787f0fe8, "vmci_register_vsock_callback" },
	{ 0x33dbdbd3, "vsock_find_connected_socket" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xb3ec00e, "vsock_stream_has_space" },
	{ 0x612df9ae, "vmci_qpair_detach" },
	{ 0x6db0833f, "skb_recv_datagram" },
	{ 0x7165ee23, "vmci_qpair_dequev" },
	{ 0x97926867, "vsock_add_pending" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x474e49c5, "vmci_qpair_enquev" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xeec9a487, "_copy_from_iter" },
	{ 0xfc9f808c, "vsock_create_connected" },
	{ 0xe11895c1, "vmci_event_unsubscribe" },
	{ 0x22bb84d, "vsock_assign_transport" },
	{ 0x54a0e992, "iov_iter_revert" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x56837fb, "vmci_get_context_id" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "vsock,vmw_vmci");


MODULE_INFO(srcversion, "C050325360D9D77FDFF7EDB");
