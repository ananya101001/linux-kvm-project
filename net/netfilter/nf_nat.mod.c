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

KSYMTAB_FUNC(nf_ct_nat_ext_add, "_gpl", "");
KSYMTAB_FUNC(nf_nat_setup_info, "", "");
KSYMTAB_FUNC(nf_nat_alloc_null_binding, "_gpl", "");
KSYMTAB_FUNC(nf_nat_packet, "_gpl", "");
KSYMTAB_FUNC(nf_nat_inet_fn, "_gpl", "");
KSYMTAB_FUNC(nf_nat_icmp_reply_translation, "_gpl", "");
KSYMTAB_FUNC(nf_nat_ipv4_register_fn, "_gpl", "");
KSYMTAB_FUNC(nf_nat_ipv4_unregister_fn, "_gpl", "");
KSYMTAB_FUNC(nf_nat_icmpv6_reply_translation, "_gpl", "");
KSYMTAB_FUNC(nf_nat_ipv6_register_fn, "_gpl", "");
KSYMTAB_FUNC(nf_nat_ipv6_unregister_fn, "_gpl", "");
KSYMTAB_FUNC(nf_nat_inet_register_fn, "_gpl", "");
KSYMTAB_FUNC(nf_nat_inet_unregister_fn, "_gpl", "");
KSYMTAB_FUNC(__nf_nat_mangle_tcp_packet, "", "");
KSYMTAB_FUNC(nf_nat_mangle_udp_packet, "", "");
KSYMTAB_FUNC(nf_nat_follow_master, "", "");
KSYMTAB_FUNC(nf_nat_exp_find_port, "_gpl", "");
KSYMTAB_FUNC(nf_nat_redirect_ipv4, "_gpl", "");
KSYMTAB_FUNC(nf_nat_redirect_ipv6, "_gpl", "");
KSYMTAB_FUNC(nf_nat_masquerade_ipv4, "_gpl", "");
KSYMTAB_FUNC(nf_nat_masquerade_ipv6, "_gpl", "");
KSYMTAB_FUNC(nf_nat_masquerade_inet_register_notifiers, "_gpl", "");
KSYMTAB_FUNC(nf_nat_masquerade_inet_unregister_notifiers, "_gpl", "");
KSYMTAB_FUNC(nf_ct_nat, "_gpl", "");

SYMBOL_CRC(nf_ct_nat_ext_add, 0x157a61ce, "_gpl");
SYMBOL_CRC(nf_nat_setup_info, 0x86c53895, "");
SYMBOL_CRC(nf_nat_alloc_null_binding, 0xa7af26bb, "_gpl");
SYMBOL_CRC(nf_nat_packet, 0x95acd8d5, "_gpl");
SYMBOL_CRC(nf_nat_inet_fn, 0xd9d7ddd3, "_gpl");
SYMBOL_CRC(nf_nat_icmp_reply_translation, 0x167645c3, "_gpl");
SYMBOL_CRC(nf_nat_ipv4_register_fn, 0x68afad6c, "_gpl");
SYMBOL_CRC(nf_nat_ipv4_unregister_fn, 0xfd329d97, "_gpl");
SYMBOL_CRC(nf_nat_icmpv6_reply_translation, 0x79ee5dc2, "_gpl");
SYMBOL_CRC(nf_nat_ipv6_register_fn, 0x226c0a91, "_gpl");
SYMBOL_CRC(nf_nat_ipv6_unregister_fn, 0x14927eef, "_gpl");
SYMBOL_CRC(nf_nat_inet_register_fn, 0x59c7c55f, "_gpl");
SYMBOL_CRC(nf_nat_inet_unregister_fn, 0x4a3020a5, "_gpl");
SYMBOL_CRC(__nf_nat_mangle_tcp_packet, 0xe98b4a3c, "");
SYMBOL_CRC(nf_nat_mangle_udp_packet, 0xd890b88d, "");
SYMBOL_CRC(nf_nat_follow_master, 0xc42a8fca, "");
SYMBOL_CRC(nf_nat_exp_find_port, 0x942f8e5e, "_gpl");
SYMBOL_CRC(nf_nat_redirect_ipv4, 0xb1898c69, "_gpl");
SYMBOL_CRC(nf_nat_redirect_ipv6, 0x1cb1860f, "_gpl");
SYMBOL_CRC(nf_nat_masquerade_ipv4, 0x5feffa6d, "_gpl");
SYMBOL_CRC(nf_nat_masquerade_ipv6, 0xe0d559a1, "_gpl");
SYMBOL_CRC(nf_nat_masquerade_inet_register_notifiers, 0x3bc17c49, "_gpl");
SYMBOL_CRC(nf_nat_masquerade_inet_unregister_notifiers, 0xd9c25654, "_gpl");
SYMBOL_CRC(nf_ct_nat, 0x8b0d134a, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x91e48d88, "pskb_expand_head" },
	{ 0x20548812, "register_pernet_subsys" },
	{ 0xf753ecf7, "nf_conntrack_tuple_taken" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x3db5d90c, "nf_ct_iterate_cleanup_net" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xe6f295a9, "ipv6_skip_exthdr" },
	{ 0x380ce666, "nf_register_net_hooks" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x7f1fd79f, "module_put" },
	{ 0x2ad3e064, "ipv6_dev_get_saddr" },
	{ 0x33338211, "rcuref_get_slowpath" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8ffe7e89, "nf_conntrack_htable_size" },
	{ 0xaef1bb6, "nf_ct_expect_related_report" },
	{ 0x7647e788, "ip_route_me_harder" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd88d11a5, "nf_hook_entries_delete_raw" },
	{ 0xb8efc77a, "skb_ensure_writable" },
	{ 0x7d511f68, "nf_unregister_net_hooks" },
	{ 0xe4ab9d56, "inet_select_addr" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x460ec0f, "nf_ct_invert_tuple" },
	{ 0x279ed4c, "unregister_pernet_subsys" },
	{ 0x9591300f, "skb_checksum" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xcef44666, "nf_ct_delete" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x7d02f564, "nf_ip_checksum" },
	{ 0x49450d8f, "nf_ct_iterate_destroy" },
	{ 0xe4262c6, "__siphash_unaligned" },
	{ 0x278f8454, "inet_proto_csum_replace16" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x92104429, "__put_net" },
	{ 0xb15b4109, "crc32c" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0xcdf8a269, "__skb_checksum" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5c0259ec, "inet_proto_csum_replace4" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x5089f45f, "ip_send_check" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xf04a650c, "dst_release" },
	{ 0x64261cc1, "nf_ct_l4proto_find" },
	{ 0x44fffe6f, "nf_ct_kill_acct" },
	{ 0x289c3714, "nf_ct_alloc_hashtable" },
	{ 0x9ec99ac1, "nf_nat_hook" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x7d5e1008, "__crc32c_le_shift" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x49efa1d8, "nf_ct_ext_add" },
	{ 0x453ca149, "__do_once_done" },
	{ 0xc96de9a1, "nf_conntrack_find_get" },
	{ 0x1f7fdb27, "try_module_get" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x6e382972, "nf_ip6_checksum" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0x73a92a9c, "nf_hook_entries_insert_raw" },
	{ 0x28bc0ec9, "xfrm_lookup" },
	{ 0xfba7a5f5, "__get_random_u32_below" },
	{ 0x72260330, "nf_ct_seqadj_set" },
	{ 0xd6625cfb, "skb_put" },
	{ 0x25f2b2c8, "kmemdup_array" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xb0e602eb, "memmove" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xdfdde0a9, "nf_ct_helper_expectfn_unregister" },
	{ 0x7f4bb9ca, "__xfrm_decode_session" },
	{ 0x89d99ee1, "__nf_ct_ext_find" },
	{ 0xab4922c1, "nf_ct_helper_expectfn_register" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x44f0ad9, "get_random_u16" },
	{ 0xd4a178, "ip6_route_me_harder" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack,libcrc32c");

