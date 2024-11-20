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
	{ 0xbf78f9ac, "l2tp_tunnel_put" },
	{ 0x3f019ddc, "inet6_unregister_protosw" },
	{ 0x3c079b00, "inet6_del_protocol" },
	{ 0x84849b0a, "sock_queue_rcv_skb_reason" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0x1e63d253, "__udp_disconnect" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd529175d, "sk_common_release" },
	{ 0xdc96185f, "__ip6_datagram_connect" },
	{ 0x55d5f0df, "dev_get_by_index_rcu" },
	{ 0x55c28c9f, "ipv6_chk_addr" },
	{ 0x6db0833f, "skb_recv_datagram" },
	{ 0x8cb7c95, "skb_copy_datagram_iter" },
	{ 0x49b41df7, "skb_free_datagram" },
	{ 0x6a4b293f, "ipv6_recv_error" },
	{ 0x2cb9f673, "__sock_recv_timestamp" },
	{ 0xbbf0dee5, "ip6_datagram_recv_ctl" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x6bbf0e62, "ip6_datagram_send_ctl" },
	{ 0x6f6b52e9, "__ipv6_fixup_options" },
	{ 0x770a5ae9, "fl6_update_dst" },
	{ 0xc0d257e7, "security_sk_classify_flow" },
	{ 0xb8daf72a, "ip6_dst_lookup_flow" },
	{ 0xed33e28e, "ip_generic_getfrag" },
	{ 0xafd4182, "ip6_append_data" },
	{ 0xf04a650c, "dst_release" },
	{ 0xcd5835b, "ipv6_flowlabel_exclusive" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x3b004427, "fl6_merge_options" },
	{ 0x5122f549, "__fl6_sock_lookup" },
	{ 0x20f84273, "ip6_dst_hoplimit" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0xbeebc4bd, "ip6_push_pending_frames" },
	{ 0x179671de, "l2tp_v3_session_get" },
	{ 0x5b2648ad, "l2tp_recv_common" },
	{ 0x4c7ece16, "l2tp_session_put" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x27df312f, "__xfrm_policy_check" },
	{ 0x64f4c46e, "__pskb_pull_tail" },
	{ 0xc07bea73, "__sk_receive_skb" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0x98a94a64, "sk_free" },
	{ 0xe39d7d3a, "inet6_release" },
	{ 0xf6299d7c, "inet6_bind" },
	{ 0x9efc0da7, "inet_dgram_connect" },
	{ 0xf6c2d54b, "sock_no_socketpair" },
	{ 0x395738dd, "sock_no_accept" },
	{ 0x9165e723, "datagram_poll" },
	{ 0x8f65ca55, "inet6_ioctl" },
	{ 0xd2ad88f3, "inet6_compat_ioctl" },
	{ 0x2c7043de, "sock_gettstamp" },
	{ 0xfa6431fc, "sock_no_listen" },
	{ 0x800c8292, "inet_shutdown" },
	{ 0xb9d57ab0, "sock_common_setsockopt" },
	{ 0xd3e5d506, "sock_common_getsockopt" },
	{ 0x8822eb1a, "inet_sendmsg" },
	{ 0xc3baad71, "sock_common_recvmsg" },
	{ 0xb8c586b9, "sock_no_mmap" },
	{ 0xceffc906, "l2tp_ioctl" },
	{ 0x57458cc8, "ipv6_setsockopt" },
	{ 0xd12718c4, "ipv6_getsockopt" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x122c3a7e, "_printk" },
	{ 0xa47c4028, "register_pernet_device" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xd327bfd0, "proto_register" },
	{ 0x15aa1a9a, "inet6_add_protocol" },
	{ 0x74ee7a0, "inet6_register_protosw" },
	{ 0x18c05d36, "proto_unregister" },
	{ 0x86512576, "unregister_pernet_device" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xdc145e5, "lock_sock_nested" },
	{ 0x3069503, "ip6_flush_pending_frames" },
	{ 0xdb579ef1, "release_sock" },
	{ 0xd347f3ae, "l2tp_sk_to_tunnel" },
	{ 0xd3da9b73, "l2tp_tunnel_delete" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "l2tp_core,l2tp_ip");


MODULE_INFO(srcversion, "380557381B446A1EF4E879E");
