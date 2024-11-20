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

KSYMTAB_DATA(vsock_bind_table, "_gpl", "");
KSYMTAB_DATA(vsock_connected_table, "_gpl", "");
KSYMTAB_DATA(vsock_table_lock, "_gpl", "");
KSYMTAB_FUNC(vsock_insert_connected, "_gpl", "");
KSYMTAB_FUNC(vsock_remove_bound, "_gpl", "");
KSYMTAB_FUNC(vsock_remove_connected, "_gpl", "");
KSYMTAB_FUNC(vsock_find_bound_socket, "_gpl", "");
KSYMTAB_FUNC(vsock_find_connected_socket, "_gpl", "");
KSYMTAB_FUNC(vsock_remove_sock, "_gpl", "");
KSYMTAB_FUNC(vsock_for_each_connected_socket, "_gpl", "");
KSYMTAB_FUNC(vsock_add_pending, "_gpl", "");
KSYMTAB_FUNC(vsock_remove_pending, "_gpl", "");
KSYMTAB_FUNC(vsock_enqueue_accept, "_gpl", "");
KSYMTAB_FUNC(vsock_assign_transport, "_gpl", "");
KSYMTAB_FUNC(vsock_find_cid, "_gpl", "");
KSYMTAB_FUNC(vsock_create_connected, "_gpl", "");
KSYMTAB_FUNC(vsock_stream_has_data, "_gpl", "");
KSYMTAB_FUNC(vsock_connectible_has_data, "_gpl", "");
KSYMTAB_FUNC(vsock_stream_has_space, "_gpl", "");
KSYMTAB_FUNC(vsock_data_ready, "_gpl", "");
KSYMTAB_FUNC(vsock_dgram_recvmsg, "_gpl", "");
KSYMTAB_FUNC(vsock_connectible_recvmsg, "_gpl", "");
KSYMTAB_FUNC(vsock_core_get_transport, "_gpl", "");
KSYMTAB_FUNC(vsock_core_register, "_gpl", "");
KSYMTAB_FUNC(vsock_core_unregister, "_gpl", "");
KSYMTAB_FUNC(vsock_add_tap, "_gpl", "");
KSYMTAB_FUNC(vsock_remove_tap, "_gpl", "");
KSYMTAB_FUNC(vsock_deliver_tap, "_gpl", "");
KSYMTAB_FUNC(vsock_addr_init, "_gpl", "");
KSYMTAB_FUNC(vsock_addr_validate, "_gpl", "");
KSYMTAB_FUNC(vsock_addr_bound, "_gpl", "");
KSYMTAB_FUNC(vsock_addr_unbind, "_gpl", "");
KSYMTAB_FUNC(vsock_addr_equals_addr, "_gpl", "");
KSYMTAB_FUNC(vsock_addr_cast, "_gpl", "");

SYMBOL_CRC(vsock_bind_table, 0x284e07d8, "_gpl");
SYMBOL_CRC(vsock_connected_table, 0x9bb6fd09, "_gpl");
SYMBOL_CRC(vsock_table_lock, 0xc92f7f50, "_gpl");
SYMBOL_CRC(vsock_insert_connected, 0xe5e4d6d2, "_gpl");
SYMBOL_CRC(vsock_remove_bound, 0x51d18e93, "_gpl");
SYMBOL_CRC(vsock_remove_connected, 0xad709d16, "_gpl");
SYMBOL_CRC(vsock_find_bound_socket, 0x6e05851a, "_gpl");
SYMBOL_CRC(vsock_find_connected_socket, 0x33dbdbd3, "_gpl");
SYMBOL_CRC(vsock_remove_sock, 0xf662c096, "_gpl");
SYMBOL_CRC(vsock_for_each_connected_socket, 0x6baa765d, "_gpl");
SYMBOL_CRC(vsock_add_pending, 0x97926867, "_gpl");
SYMBOL_CRC(vsock_remove_pending, 0xcc4d34e7, "_gpl");
SYMBOL_CRC(vsock_enqueue_accept, 0x594dfab3, "_gpl");
SYMBOL_CRC(vsock_assign_transport, 0x022bb84d, "_gpl");
SYMBOL_CRC(vsock_find_cid, 0x90aa8549, "_gpl");
SYMBOL_CRC(vsock_create_connected, 0xfc9f808c, "_gpl");
SYMBOL_CRC(vsock_stream_has_data, 0x8687ecdb, "_gpl");
SYMBOL_CRC(vsock_connectible_has_data, 0xa30290b0, "_gpl");
SYMBOL_CRC(vsock_stream_has_space, 0x0b3ec00e, "_gpl");
SYMBOL_CRC(vsock_data_ready, 0x522b5d4c, "_gpl");
SYMBOL_CRC(vsock_dgram_recvmsg, 0x77c476ed, "_gpl");
SYMBOL_CRC(vsock_connectible_recvmsg, 0xe4710973, "_gpl");
SYMBOL_CRC(vsock_core_get_transport, 0x0528b40e, "_gpl");
SYMBOL_CRC(vsock_core_register, 0xf1171311, "_gpl");
SYMBOL_CRC(vsock_core_unregister, 0x27ae3002, "_gpl");
SYMBOL_CRC(vsock_add_tap, 0x8e8ba354, "_gpl");
SYMBOL_CRC(vsock_remove_tap, 0x59755041, "_gpl");
SYMBOL_CRC(vsock_deliver_tap, 0x8ed7363d, "_gpl");
SYMBOL_CRC(vsock_addr_init, 0x3d4b0fca, "_gpl");
SYMBOL_CRC(vsock_addr_validate, 0xec96eadf, "_gpl");
SYMBOL_CRC(vsock_addr_bound, 0x4b99648c, "_gpl");
SYMBOL_CRC(vsock_addr_unbind, 0x0e9bc9b6, "_gpl");
SYMBOL_CRC(vsock_addr_equals_addr, 0xaf2674b5, "_gpl");
SYMBOL_CRC(vsock_addr_cast, 0xb0d7bda7, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xeafbd535, "ns_capable_noaudit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdaff2388, "__put_cred" },
	{ 0x80792a17, "sk_error_report" },
	{ 0x2beb13a8, "skb_queue_purge_reason" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x18c05d36, "proto_unregister" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xddd9a9d2, "sock_register" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xd327bfd0, "proto_register" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xc6cbbc89, "capable" },
	{ 0x7f1fd79f, "module_put" },
	{ 0x17162407, "sk_msg_is_readable" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0x98a94a64, "sk_free" },
	{ 0x395738dd, "sock_no_accept" },
	{ 0xedd17b31, "sock_get_timeout" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0xfa6431fc, "sock_no_listen" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x54fe64c5, "sock_recv_errqueue" },
	{ 0xdc145e5, "lock_sock_nested" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x9e90bee3, "sk_alloc" },
	{ 0xf6c2d54b, "sock_no_socketpair" },
	{ 0xea43f98d, "misc_register" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb8c586b9, "sock_no_mmap" },
	{ 0xb5be9b63, "security_sk_clone" },
	{ 0x5bdb7603, "sock_copy_user_timeval" },
	{ 0xcc584249, "nonseekable_open" },
	{ 0xaf5943ae, "sk_psock_drop" },
	{ 0x523d13e7, "__dev_queue_xmit" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x7919d80, "init_user_ns" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xa542eb90, "skb_clone" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc8e2f441, "sock_setsockopt" },
	{ 0xf5cef368, "sock_init_data" },
	{ 0xdb579ef1, "release_sock" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x5b9494f8, "security_sock_graft" },
	{ 0xb81b6bc1, "sock_map_close" },
	{ 0x84849b0a, "sock_queue_rcv_skb_reason" },
	{ 0x1f7fdb27, "try_module_get" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf80d81c2, "misc_deregister" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xe065f55b, "consume_skb" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0xe893d918, "__module_get" },
	{ 0x2369790d, "sk_stream_error" },
	{ 0xe2205f4f, "sk_msg_recvmsg" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E52F438FA19CBD5A427B3FE");
