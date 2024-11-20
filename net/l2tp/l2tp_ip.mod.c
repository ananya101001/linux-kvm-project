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

KSYMTAB_FUNC(l2tp_ioctl, "_gpl", "");

SYMBOL_CRC(l2tp_ioctl, 0xceffc906, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x84849b0a, "sock_queue_rcv_skb_reason" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0xd347f3ae, "l2tp_sk_to_tunnel" },
	{ 0xd3da9b73, "l2tp_tunnel_delete" },
	{ 0xbf78f9ac, "l2tp_tunnel_put" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd529175d, "sk_common_release" },
	{ 0x1e63d253, "__udp_disconnect" },
	{ 0xdc145e5, "lock_sock_nested" },
	{ 0xdb579ef1, "release_sock" },
	{ 0x96aad30e, "__ip4_datagram_connect" },
	{ 0x4d4a418, "inet_addr_type" },
	{ 0xf04a650c, "dst_release" },
	{ 0x6db0833f, "skb_recv_datagram" },
	{ 0x8cb7c95, "skb_copy_datagram_iter" },
	{ 0x49b41df7, "skb_free_datagram" },
	{ 0x2cb9f673, "__sock_recv_timestamp" },
	{ 0x85618042, "ip_cmsg_recv_offset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x179671de, "l2tp_v3_session_get" },
	{ 0x5b2648ad, "l2tp_recv_common" },
	{ 0x4c7ece16, "l2tp_session_put" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0xc07bea73, "__sk_receive_skb" },
	{ 0x64f4c46e, "__pskb_pull_tail" },
	{ 0x27df312f, "__xfrm_policy_check" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0x98a94a64, "sk_free" },
	{ 0x942c595, "sock_wmalloc" },
	{ 0xd6625cfb, "skb_put" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xeec9a487, "_copy_from_iter" },
	{ 0x8b8c75df, "__sk_dst_check" },
	{ 0x472f1bf4, "ip_queue_xmit" },
	{ 0xc0d257e7, "security_sk_classify_flow" },
	{ 0x32cd197c, "ip_route_output_flow" },
	{ 0x9146f128, "sk_setup_caps" },
	{ 0xc1f0e49d, "make_kuid" },
	{ 0x54a0e992, "iov_iter_revert" },
	{ 0xa9bcbe6e, "inet_release" },
	{ 0xf737c67d, "inet_bind" },
	{ 0x9efc0da7, "inet_dgram_connect" },
	{ 0xf6c2d54b, "sock_no_socketpair" },
	{ 0x395738dd, "sock_no_accept" },
	{ 0x9165e723, "datagram_poll" },
	{ 0x878f973a, "inet_ioctl" },
	{ 0x2c7043de, "sock_gettstamp" },
	{ 0xfa6431fc, "sock_no_listen" },
	{ 0x800c8292, "inet_shutdown" },
	{ 0xb9d57ab0, "sock_common_setsockopt" },
	{ 0xd3e5d506, "sock_common_getsockopt" },
	{ 0x8822eb1a, "inet_sendmsg" },
	{ 0xc3baad71, "sock_common_recvmsg" },
	{ 0xb8c586b9, "sock_no_mmap" },
	{ 0xe6cc5ce1, "ip_setsockopt" },
	{ 0x1a1fa1f8, "ip_getsockopt" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x122c3a7e, "_printk" },
	{ 0xa47c4028, "register_pernet_device" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xd327bfd0, "proto_register" },
	{ 0x38c39e07, "inet_add_protocol" },
	{ 0xbf6dde59, "inet_register_protosw" },
	{ 0x18c05d36, "proto_unregister" },
	{ 0x86512576, "unregister_pernet_device" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xbf33a3fc, "inet_unregister_protosw" },
	{ 0x8db86cae, "inet_del_protocol" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "l2tp_core");


MODULE_INFO(srcversion, "423F2831315564D2491389F");
