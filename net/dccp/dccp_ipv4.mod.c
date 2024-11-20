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

KSYMTAB_FUNC(dccp_v4_connect, "_gpl", "");
KSYMTAB_FUNC(dccp_req_err, "", "");
KSYMTAB_FUNC(dccp_v4_send_check, "_gpl", "");
KSYMTAB_FUNC(dccp_v4_request_recv_sock, "_gpl", "");
KSYMTAB_FUNC(dccp_syn_ack_timeout, "", "");
KSYMTAB_FUNC(dccp_v4_conn_request, "_gpl", "");
KSYMTAB_FUNC(dccp_v4_do_rcv, "_gpl", "");
KSYMTAB_FUNC(dccp_invalid_packet, "_gpl", "");

SYMBOL_CRC(dccp_v4_connect, 0xfb8c41b3, "_gpl");
SYMBOL_CRC(dccp_req_err, 0xd80d1929, "");
SYMBOL_CRC(dccp_v4_send_check, 0x8b034f79, "_gpl");
SYMBOL_CRC(dccp_v4_request_recv_sock, 0xaf9502ca, "_gpl");
SYMBOL_CRC(dccp_syn_ack_timeout, 0x1eaf46c9, "");
SYMBOL_CRC(dccp_v4_conn_request, 0x5b08d034, "_gpl");
SYMBOL_CRC(dccp_v4_do_rcv, 0x183743bb, "_gpl");
SYMBOL_CRC(dccp_invalid_packet, 0x327ab2dd, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xcaa7240a, "dccp_reqsk_send_ack" },
	{ 0xf17feef1, "inet_lookup_reuseport" },
	{ 0x3724415c, "__inet_lookup_listener" },
	{ 0x1c0271fa, "inet_csk_accept" },
	{ 0x86be7924, "dccp_packet_name" },
	{ 0xd3e5d506, "sock_common_getsockopt" },
	{ 0xf737c67d, "inet_bind" },
	{ 0x1b0e79b6, "__inet_inherit_port" },
	{ 0xb2bd4209, "inet_dccp_listen" },
	{ 0x7cabd16d, "security_inet_conn_request" },
	{ 0x37a0cba, "kfree" },
	{ 0xbf6dde59, "inet_register_protosw" },
	{ 0x44f0ad9, "get_random_u16" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x27df312f, "__xfrm_policy_check" },
	{ 0xb9d57ab0, "sock_common_setsockopt" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x32cd197c, "ip_route_output_flow" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0x53c507fd, "inet_csk_reqsk_queue_hash_add" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4cdd391d, "dccp_feat_list_purge" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x80792a17, "sk_error_report" },
	{ 0x20548812, "register_pernet_subsys" },
	{ 0x4f4b4fa5, "inet_ehash_nolisten" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x125159fd, "inet_getname" },
	{ 0x42673a60, "inet_stream_connect" },
	{ 0x18c05d36, "proto_unregister" },
	{ 0xe873163d, "inet_reqsk_alloc" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x80816866, "inet_ehashfn" },
	{ 0xf87b0872, "inet_twsk_purge" },
	{ 0x8ea74905, "dccp_done" },
	{ 0xa9bcbe6e, "inet_release" },
	{ 0x8b8c75df, "__sk_dst_check" },
	{ 0xe981f4de, "dccp_disconnect" },
	{ 0x12ab144e, "ip_route_output_key_hash" },
	{ 0xd327bfd0, "proto_register" },
	{ 0x3e5856cc, "inet_hash" },
	{ 0xc07bea73, "__sk_receive_skb" },
	{ 0xec308f3d, "dccp_poll" },
	{ 0x146c8b11, "inet_ctl_sock_create" },
	{ 0x8171199a, "dccp_death_row" },
	{ 0xc0be571f, "inet_csk_get_port" },
	{ 0x878f973a, "inet_ioctl" },
	{ 0x33338211, "rcuref_get_slowpath" },
	{ 0xc65e4e97, "secure_dccp_sequence_number" },
	{ 0x6c0038d1, "inet_csk_reqsk_queue_drop_and_put" },
	{ 0x99d1bc01, "inet_accept" },
	{ 0x25072a55, "dccp_sync_mss" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xbca24e1e, "ip6_mtu" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0xd75b7072, "dccp_orphan_count" },
	{ 0x38c39e07, "inet_add_protocol" },
	{ 0x800c8292, "inet_shutdown" },
	{ 0x98a94a64, "sk_free" },
	{ 0xf032bd, "dccp_close" },
	{ 0x7ae0d2c4, "dccp_reqsk_init" },
	{ 0x30ee9a6, "inet_hash_connect" },
	{ 0xb609162e, "kmem_cache_free" },
	{ 0x1f7992c8, "inet_csk_route_child_sock" },
	{ 0x33b3a760, "inet_csk_route_req" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc0d257e7, "security_sk_classify_flow" },
	{ 0xeeb841ca, "inet_csk_update_pmtu" },
	{ 0x182dee15, "dccp_getsockopt" },
	{ 0x308bff78, "dccp_parse_options" },
	{ 0x279ed4c, "unregister_pernet_subsys" },
	{ 0x9591300f, "skb_checksum" },
	{ 0xf6c2d54b, "sock_no_socketpair" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xb8c586b9, "sock_no_mmap" },
	{ 0x64f4c46e, "__pskb_pull_tail" },
	{ 0xde89217a, "dccp_child_process" },
	{ 0xc3baad71, "sock_common_recvmsg" },
	{ 0x11d9a4cb, "dccp_setsockopt" },
	{ 0x3ba70e69, "dccp_ioctl" },
	{ 0x6d0b2a84, "inet_sk_rebuild_header" },
	{ 0x8db86cae, "inet_del_protocol" },
	{ 0x39374f5e, "ipv4_mtu" },
	{ 0x51ef2fbc, "dccp_recvmsg" },
	{ 0x8822eb1a, "inet_sendmsg" },
	{ 0x7fefe06e, "dccp_check_req" },
	{ 0xf319bab4, "dccp_create_openreq_child" },
	{ 0x78c68687, "inet_csk_prepare_forced_close" },
	{ 0x71b13f65, "security_skb_classify_flow" },
	{ 0xbdb48f78, "sock_pfree" },
	{ 0xf0b2aeec, "dccp_rcv_established" },
	{ 0xdb533b0e, "dccp_send_sync" },
	{ 0xf04a650c, "dst_release" },
	{ 0x8d0e1b55, "sock_release" },
	{ 0x8a385826, "dccp_make_response" },
	{ 0xd7d94a9f, "dccp_destroy_sock" },
	{ 0xcbce36b3, "dccp_ctl_make_reset" },
	{ 0x2c7043de, "sock_gettstamp" },
	{ 0x9146f128, "sk_setup_caps" },
	{ 0x5505e0ed, "ip_build_and_send_pkt" },
	{ 0x413e6c34, "dccp_sendmsg" },
	{ 0xe6cc5ce1, "ip_setsockopt" },
	{ 0xd7cdb975, "dccp_hashinfo" },
	{ 0x17aedc9d, "inet_twsk_put" },
	{ 0xc7e968cc, "inet_unhash" },
	{ 0x1a1fa1f8, "ip_getsockopt" },
	{ 0x30565d78, "dccp_set_state" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd487d1ae, "dccp_init_sock" },
	{ 0x49045426, "icmp_err_convert" },
	{ 0x59814a84, "dccp_statistics" },
	{ 0x2cb40d10, "inet_csk_reqsk_queue_drop" },
	{ 0x187ae725, "__inet_lookup_established" },
	{ 0x5db96312, "inet_bhash2_reset_saddr" },
	{ 0x8b30487a, "inet_csk_addr2sockaddr" },
	{ 0xbf33a3fc, "inet_unregister_protosw" },
	{ 0x472f1bf4, "ip_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x99b615c0, "dccp_shutdown" },
	{ 0xa07ea932, "inet_bhash2_update_saddr" },
	{ 0x9145bafa, "dccp_connect" },
	{ 0x2f61abb9, "dccp_rcv_state_process" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "dccp");

