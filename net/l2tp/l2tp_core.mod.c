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

KSYMTAB_FUNC(l2tp_sk_to_tunnel, "_gpl", "");
KSYMTAB_FUNC(l2tp_tunnel_put, "_gpl", "");
KSYMTAB_FUNC(l2tp_session_put, "_gpl", "");
KSYMTAB_FUNC(l2tp_tunnel_get, "_gpl", "");
KSYMTAB_FUNC(l2tp_tunnel_get_next, "_gpl", "");
KSYMTAB_FUNC(l2tp_v3_session_get, "_gpl", "");
KSYMTAB_FUNC(l2tp_v2_session_get, "_gpl", "");
KSYMTAB_FUNC(l2tp_session_get, "_gpl", "");
KSYMTAB_FUNC(l2tp_session_get_next, "_gpl", "");
KSYMTAB_FUNC(l2tp_session_get_by_ifname, "_gpl", "");
KSYMTAB_FUNC(l2tp_session_register, "_gpl", "");
KSYMTAB_FUNC(l2tp_recv_common, "_gpl", "");
KSYMTAB_FUNC(l2tp_udp_encap_recv, "_gpl", "");
KSYMTAB_FUNC(l2tp_xmit_skb, "_gpl", "");
KSYMTAB_FUNC(l2tp_tunnel_create, "_gpl", "");
KSYMTAB_FUNC(l2tp_tunnel_register, "_gpl", "");
KSYMTAB_FUNC(l2tp_tunnel_delete, "_gpl", "");
KSYMTAB_FUNC(l2tp_session_delete, "_gpl", "");
KSYMTAB_FUNC(l2tp_session_set_header_len, "_gpl", "");
KSYMTAB_FUNC(l2tp_session_create, "_gpl", "");

SYMBOL_CRC(l2tp_sk_to_tunnel, 0xd347f3ae, "_gpl");
SYMBOL_CRC(l2tp_tunnel_put, 0xbf78f9ac, "_gpl");
SYMBOL_CRC(l2tp_session_put, 0x4c7ece16, "_gpl");
SYMBOL_CRC(l2tp_tunnel_get, 0xc089404b, "_gpl");
SYMBOL_CRC(l2tp_tunnel_get_next, 0xd231a7ba, "_gpl");
SYMBOL_CRC(l2tp_v3_session_get, 0x179671de, "_gpl");
SYMBOL_CRC(l2tp_v2_session_get, 0x55dbecbe, "_gpl");
SYMBOL_CRC(l2tp_session_get, 0xbdd5686d, "_gpl");
SYMBOL_CRC(l2tp_session_get_next, 0x88ddfabb, "_gpl");
SYMBOL_CRC(l2tp_session_get_by_ifname, 0x7ce10166, "_gpl");
SYMBOL_CRC(l2tp_session_register, 0xd059fbb4, "_gpl");
SYMBOL_CRC(l2tp_recv_common, 0x5b2648ad, "_gpl");
SYMBOL_CRC(l2tp_udp_encap_recv, 0x0e4f3ee2, "_gpl");
SYMBOL_CRC(l2tp_xmit_skb, 0x2bef74cd, "_gpl");
SYMBOL_CRC(l2tp_tunnel_create, 0x53c03974, "_gpl");
SYMBOL_CRC(l2tp_tunnel_register, 0x85c197eb, "_gpl");
SYMBOL_CRC(l2tp_tunnel_delete, 0xd3da9b73, "_gpl");
SYMBOL_CRC(l2tp_session_delete, 0x3438cdde, "_gpl");
SYMBOL_CRC(l2tp_session_set_header_len, 0x2e1106ad, "_gpl");
SYMBOL_CRC(l2tp_session_create, 0x513e104f, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x8b38092, "perf_trace_buf_alloc" },
	{ 0x9cb54e2f, "perf_trace_run_bpf_submit" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3c7a51a5, "trace_event_buffer_reserve" },
	{ 0x6d9e9eae, "trace_event_buffer_commit" },
	{ 0xc5597d14, "__trace_trigger_soft_disabled" },
	{ 0xc1cc4ef1, "trace_raw_output_prep" },
	{ 0x8900d05a, "trace_print_symbols_seq" },
	{ 0x825be683, "trace_event_printf" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x95a052b1, "bpf_trace_run1" },
	{ 0xcf8e538f, "bpf_trace_run2" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x80792a17, "sk_error_report" },
	{ 0x3931dd63, "ip_icmp_error" },
	{ 0x389e06fc, "ipv6_icmp_error" },
	{ 0xece4834d, "udp_sock_create6" },
	{ 0x5f445884, "kernel_sock_shutdown" },
	{ 0x8d0e1b55, "sock_release" },
	{ 0x3674db8e, "sock_create_kern" },
	{ 0xedc25195, "kernel_bind" },
	{ 0xb62635b2, "kernel_connect" },
	{ 0xe993cf6a, "udp_sock_create4" },
	{ 0xa47c4028, "register_pernet_device" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x122c3a7e, "_printk" },
	{ 0x86512576, "unregister_pernet_device" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x6d5f5b91, "radix_tree_tagged" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0xcc1b882a, "idr_get_next_ul" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x98a94a64, "sk_free" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x7b82b9a1, "idr_replace" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0xf7157488, "skb_dequeue" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x20978fb9, "idr_find" },
	{ 0xd9916c3a, "idr_alloc_u32" },
	{ 0xe820e399, "sockfd_lookup" },
	{ 0xdc145e5, "lock_sock_nested" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0xdb579ef1, "release_sock" },
	{ 0x37712435, "fput" },
	{ 0x2efa4fd6, "setup_udp_tunnel_sock" },
	{ 0x472f1bf4, "ip_queue_xmit" },
	{ 0x91e48d88, "pskb_expand_head" },
	{ 0x69acdf38, "memcpy" },
	{ 0x944028b6, "udp_set_csum" },
	{ 0x22166ee9, "inet6_csk_xmit" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0xe191fc4d, "udp6_set_csum" },
	{ 0xf04a650c, "dst_release" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x26b65873, "skb_queue_tail" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x64f4c46e, "__pskb_pull_tail" },
	{ 0xde6889d3, "trace_event_reg" },
	{ 0xaf437a95, "trace_event_raw_init" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "ip6_udp_tunnel,udp_tunnel");


MODULE_INFO(srcversion, "053793BF9F0F1526FD39CB7");
