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

KSYMTAB_FUNC(ip_vs_conn_in_get_proto, "_gpl", "");
KSYMTAB_FUNC(ip_vs_conn_out_get_proto, "_gpl", "");
KSYMTAB_FUNC(register_ip_vs_scheduler, "", "");
KSYMTAB_FUNC(unregister_ip_vs_scheduler, "", "");
KSYMTAB_FUNC(ip_vs_proto_name, "", "");
KSYMTAB_FUNC(ip_vs_conn_new, "", "");
KSYMTAB_FUNC(ip_vs_conn_in_get, "", "");
KSYMTAB_FUNC(ip_vs_conn_out_get, "", "");
KSYMTAB_FUNC(ip_vs_tcp_conn_listen, "", "");
KSYMTAB_FUNC(ip_vs_conn_put, "", "");
KSYMTAB_FUNC(ip_vs_new_conn_out, "", "");
KSYMTAB_FUNC(ip_vs_scheduler_err, "", "");
KSYMTAB_FUNC(register_ip_vs_app, "", "");
KSYMTAB_FUNC(unregister_ip_vs_app, "", "");
KSYMTAB_FUNC(register_ip_vs_app_inc, "", "");
KSYMTAB_FUNC(ip_vs_proto_get, "", "");
KSYMTAB_FUNC(ip_vs_proto_data_get, "", "");
KSYMTAB_FUNC(register_ip_vs_pe, "_gpl", "");
KSYMTAB_FUNC(unregister_ip_vs_pe, "_gpl", "");
KSYMTAB_FUNC(ip_vs_nfct_expect_related, "", "");

SYMBOL_CRC(ip_vs_conn_in_get_proto, 0xb2b92174, "_gpl");
SYMBOL_CRC(ip_vs_conn_out_get_proto, 0x9d4e0bd8, "_gpl");
SYMBOL_CRC(register_ip_vs_scheduler, 0xae536b23, "");
SYMBOL_CRC(unregister_ip_vs_scheduler, 0x58295f41, "");
SYMBOL_CRC(ip_vs_proto_name, 0xd831a1a2, "");
SYMBOL_CRC(ip_vs_conn_new, 0xba4fda01, "");
SYMBOL_CRC(ip_vs_conn_in_get, 0xe210c1bf, "");
SYMBOL_CRC(ip_vs_conn_out_get, 0x7b9a7216, "");
SYMBOL_CRC(ip_vs_tcp_conn_listen, 0xddd99846, "");
SYMBOL_CRC(ip_vs_conn_put, 0x28f98ed3, "");
SYMBOL_CRC(ip_vs_new_conn_out, 0x5bc6c05a, "");
SYMBOL_CRC(ip_vs_scheduler_err, 0x0f915d9d, "");
SYMBOL_CRC(register_ip_vs_app, 0xbe541482, "");
SYMBOL_CRC(unregister_ip_vs_app, 0x4ded242e, "");
SYMBOL_CRC(register_ip_vs_app_inc, 0xbf02e58f, "");
SYMBOL_CRC(ip_vs_proto_get, 0xc0336f52, "");
SYMBOL_CRC(ip_vs_proto_data_get, 0x6daaffeb, "");
SYMBOL_CRC(register_ip_vs_pe, 0x1847ae2f, "_gpl");
SYMBOL_CRC(unregister_ip_vs_pe, 0xc2d67d87, "_gpl");
SYMBOL_CRC(ip_vs_nfct_expect_related, 0xc662d564, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf4f14de6, "rtnl_trylock" },
	{ 0x7647e788, "ip_route_me_harder" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6775c90f, "skb_push" },
	{ 0xb609162e, "kmem_cache_free" },
	{ 0x6f33cda8, "set_cpus_allowed_ptr" },
	{ 0x5db87f6c, "seq_putc" },
	{ 0x36cd5f26, "nla_put" },
	{ 0x896c49d8, "proc_doulongvec_minmax" },
	{ 0x1e415c0e, "nf_ct_expect_alloc" },
	{ 0xb8efc77a, "skb_ensure_writable" },
	{ 0x9b555eee, "iov_iter_kvec" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0xc2ae7e8f, "ip_mc_join_group" },
	{ 0x89c29bc9, "nf_ct_expect_put" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x182d39a9, "ns_capable" },
	{ 0x7d511f68, "nf_unregister_net_hooks" },
	{ 0xe4ab9d56, "inet_select_addr" },
	{ 0x86512576, "unregister_pernet_device" },
	{ 0xdc145e5, "lock_sock_nested" },
	{ 0x4d4a418, "inet_addr_type" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x944375db, "_totalram_pages" },
	{ 0x585258e2, "kthread_stop" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf2d9c32d, "__nf_conntrack_confirm" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x279ed4c, "unregister_pernet_subsys" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb62635b2, "kernel_connect" },
	{ 0x9591300f, "skb_checksum" },
	{ 0xf34a82b4, "ip_defrag" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xc8817ac9, "kmem_cache_alloc_noprof" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x64f4c46e, "__pskb_pull_tail" },
	{ 0xcef44666, "nf_ct_delete" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x9207278f, "__kmem_cache_create_args" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd6e5a44c, "skb_trim" },
	{ 0x1d064d06, "nf_hook_slow" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xb86f74c5, "free_cpumask_var" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc03f042e, "kthread_create_on_node" },
	{ 0x40c7247c, "si_meminfo" },
	{ 0xd83898d5, "nf_hooks_needed" },
	{ 0x6e5f9ff3, "nf_ct_deliver_cached_events" },
	{ 0x9e24dbd0, "skb_realloc_headroom" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x83823fac, "ipv6_find_hdr" },
	{ 0xb15b4109, "crc32c" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x920ed655, "__icmp_send" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x39374f5e, "ipv4_mtu" },
	{ 0xc25d94c1, "pcpu_alloc_noprof" },
	{ 0x9b2319ad, "skb_set_owner_w" },
	{ 0xcdf8a269, "__skb_checksum" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3674db8e, "sock_create_kern" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x7919d80, "init_user_ns" },
	{ 0x26b0ff0f, "nf_ct_expect_init" },
	{ 0x3d1a1b7b, "seq_write" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xab3fc466, "remove_proc_entry" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x377214d3, "seq_printf" },
	{ 0x7007a625, "sock_recvmsg" },
	{ 0x5089f45f, "ip_send_check" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0xbfa5093f, "proc_create_net_single" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x5e31881f, "ipv4_update_pmtu" },
	{ 0xa082f2ef, "nf_defrag_ipv6_enable" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xf04a650c, "dst_release" },
	{ 0x8d0e1b55, "sock_release" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xf943375f, "proc_dointvec" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0x5ac8c04c, "unregister_net_sysctl_table" },
	{ 0x660e27f2, "ip_local_out" },
	{ 0x67041673, "genl_unregister_family" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x754d539c, "strlen" },
	{ 0xe191fc4d, "udp6_set_csum" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x3facf125, "genl_register_family" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x5d78eaca, "kernel_sendmsg" },
	{ 0x31f2a14c, "__kvmalloc_node_noprof" },
	{ 0x26040007, "nf_ct_netns_put" },
	{ 0xa47c4028, "register_pernet_device" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x7d5e1008, "__crc32c_le_shift" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x847188e8, "krealloc_noprof" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x6c90184e, "kmem_cache_destroy" },
	{ 0xdb579ef1, "release_sock" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3eca0c01, "proc_dointvec_minmax" },
	{ 0x49efa1d8, "nf_ct_ext_add" },
	{ 0x1b015d25, "bitmap_parselist" },
	{ 0xc96de9a1, "nf_conntrack_find_get" },
	{ 0x1f7fdb27, "try_module_get" },
	{ 0x41c4305, "__ip_select_ident" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xc50e9813, "icmp6_send" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x27fa66e1, "nr_free_buffer_pages" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0x28bc0ec9, "xfrm_lookup" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xac4038d6, "proc_dointvec_jiffies" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xae9852a0, "housekeeping_cpumask" },
	{ 0xe065f55b, "consume_skb" },
	{ 0x36a8b5d0, "ip6_local_out" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x1e0a0c24, "mod_timer_pending" },
	{ 0xd0ba7f1e, "ip_output" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb2239bc4, "nf_register_sockopt" },
	{ 0x3f178e25, "nla_put_64bit" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x7affc372, "nf_ct_netns_get" },
	{ 0x21ea5251, "__bitmap_weight" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x89d99ee1, "__nf_ct_ext_find" },
	{ 0x96848186, "scnprintf" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xedc25195, "kernel_bind" },
	{ 0x23c0b550, "set_user_nice" },
	{ 0xc61ff876, "genlmsg_put" },
	{ 0x944028b6, "udp_set_csum" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xe23b37f, "alloc_cpumask_var_node" },
	{ 0xb3a71347, "ip6_output" },
	{ 0xd4a178, "ip6_route_me_harder" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0xeca957d1, "__bitmap_and" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xe893d918, "__module_get" },
	{ 0x32cd197c, "ip_route_output_flow" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x9e62cb44, "iptunnel_handle_offloads" },
	{ 0xac3201b0, "udp_flow_hashrnd" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x6e697614, "__dev_get_by_name" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0x861b6aec, "proc_create_net_data" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x91e48d88, "pskb_expand_head" },
	{ 0x20548812, "register_pernet_subsys" },
	{ 0x16d30c75, "wake_up_process" },
	{ 0x9ae47436, "_find_last_bit" },
	{ 0xa4f84056, "register_net_sysctl_sz" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xcafd02ec, "nf_unregister_sockopt" },
	{ 0xc8827b75, "sysctl_vals" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0x380ce666, "nf_register_net_hooks" },
	{ 0x496e68b4, "ip6_route_output_flags" },
	{ 0xa916b694, "strnlen" },
	{ 0x1f4733b3, "__alloc_skb" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xbf87b2b6, "ipv6_sock_mc_join" },
	{ 0x7f1fd79f, "module_put" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0xfac8865f, "sysctl_wmem_max" },
	{ 0xb05fc310, "sysctl_rmem_max" },
	{ 0x2ad3e064, "ipv6_dev_get_saddr" },
	{ 0xe5497da, "__skb_get_hash_net" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe5590ebd, "init_net" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xbca24e1e, "ip6_mtu" },
	{ 0xc6f3b3fc, "refcount_dec_if_one" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0xe8255b35, "netlink_unicast" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xaef1bb6, "nf_ct_expect_related_report" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack,libcrc32c,nf_defrag_ipv6");

