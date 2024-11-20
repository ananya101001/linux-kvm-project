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

KSYMTAB_FUNC(ip_set_type_register, "_gpl", "");
KSYMTAB_FUNC(ip_set_type_unregister, "_gpl", "");
KSYMTAB_FUNC(ip_set_alloc, "_gpl", "");
KSYMTAB_FUNC(ip_set_free, "_gpl", "");
KSYMTAB_FUNC(ip_set_get_ipaddr4, "_gpl", "");
KSYMTAB_FUNC(ip_set_get_ipaddr6, "_gpl", "");
KSYMTAB_FUNC(ip_set_init_comment, "_gpl", "");
KSYMTAB_DATA(ip_set_extensions, "_gpl", "");
KSYMTAB_FUNC(ip_set_elem_len, "_gpl", "");
KSYMTAB_FUNC(ip_set_get_extensions, "_gpl", "");
KSYMTAB_FUNC(ip_set_put_extensions, "_gpl", "");
KSYMTAB_FUNC(ip_set_match_extensions, "_gpl", "");
KSYMTAB_FUNC(ip_set_test, "_gpl", "");
KSYMTAB_FUNC(ip_set_add, "_gpl", "");
KSYMTAB_FUNC(ip_set_del, "_gpl", "");
KSYMTAB_FUNC(ip_set_get_byname, "_gpl", "");
KSYMTAB_FUNC(ip_set_put_byindex, "_gpl", "");
KSYMTAB_FUNC(ip_set_name_byindex, "_gpl", "");
KSYMTAB_FUNC(ip_set_nfnl_get_byindex, "_gpl", "");
KSYMTAB_FUNC(ip_set_nfnl_put, "_gpl", "");
KSYMTAB_FUNC(ip_set_put_flags, "_gpl", "");
KSYMTAB_FUNC(ip_set_get_ip4_port, "_gpl", "");
KSYMTAB_FUNC(ip_set_get_ip6_port, "_gpl", "");
KSYMTAB_DATA(ip_set_netmask_map, "_gpl", "");
KSYMTAB_DATA(ip_set_hostmask_map, "_gpl", "");
KSYMTAB_FUNC(ip_set_range_to_cidr, "_gpl", "");

SYMBOL_CRC(ip_set_type_register, 0x2ff79130, "_gpl");
SYMBOL_CRC(ip_set_type_unregister, 0xe7c313c2, "_gpl");
SYMBOL_CRC(ip_set_alloc, 0xf3b4d4ae, "_gpl");
SYMBOL_CRC(ip_set_free, 0x397f6231, "_gpl");
SYMBOL_CRC(ip_set_get_ipaddr4, 0xa293f8a6, "_gpl");
SYMBOL_CRC(ip_set_get_ipaddr6, 0x9e98722b, "_gpl");
SYMBOL_CRC(ip_set_init_comment, 0x426df15e, "_gpl");
SYMBOL_CRC(ip_set_extensions, 0x67c2e97a, "_gpl");
SYMBOL_CRC(ip_set_elem_len, 0x401dac22, "_gpl");
SYMBOL_CRC(ip_set_get_extensions, 0x665129e5, "_gpl");
SYMBOL_CRC(ip_set_put_extensions, 0x559874d6, "_gpl");
SYMBOL_CRC(ip_set_match_extensions, 0x013cb688, "_gpl");
SYMBOL_CRC(ip_set_test, 0xaa1ae1e9, "_gpl");
SYMBOL_CRC(ip_set_add, 0xd31b0404, "_gpl");
SYMBOL_CRC(ip_set_del, 0x051eb731, "_gpl");
SYMBOL_CRC(ip_set_get_byname, 0x6b3fbb7f, "_gpl");
SYMBOL_CRC(ip_set_put_byindex, 0xfd7680b5, "_gpl");
SYMBOL_CRC(ip_set_name_byindex, 0x2f11553c, "_gpl");
SYMBOL_CRC(ip_set_nfnl_get_byindex, 0xa50c5a22, "_gpl");
SYMBOL_CRC(ip_set_nfnl_put, 0x7ba2a5b0, "_gpl");
SYMBOL_CRC(ip_set_put_flags, 0x24371fef, "_gpl");
SYMBOL_CRC(ip_set_get_ip4_port, 0xb8c0e586, "_gpl");
SYMBOL_CRC(ip_set_get_ip6_port, 0xac4e2f86, "_gpl");
SYMBOL_CRC(ip_set_netmask_map, 0x81fff2d1, "_gpl");
SYMBOL_CRC(ip_set_hostmask_map, 0x7924b6de, "_gpl");
SYMBOL_CRC(ip_set_range_to_cidr, 0x22d966c6, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xe6f295a9, "ipv6_skip_exthdr" },
	{ 0xa916b694, "strnlen" },
	{ 0x1f4733b3, "__alloc_skb" },
	{ 0x7f1fd79f, "module_put" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd4be4ee6, "nfnetlink_unicast" },
	{ 0x5a921311, "strncmp" },
	{ 0x36cd5f26, "nla_put" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x182d39a9, "ns_capable" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x279ed4c, "unregister_pernet_subsys" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xa84b4980, "nfnetlink_subsys_unregister" },
	{ 0xd6e5a44c, "skb_trim" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x999e8297, "vfree" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x754d539c, "strlen" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x31f2a14c, "__kvmalloc_node_noprof" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x753e172b, "__netlink_dump_start" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x1f7fdb27, "try_module_get" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0x7ef38e38, "__nlmsg_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xb2239bc4, "nf_register_sockopt" },
	{ 0x3f178e25, "nla_put_64bit" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x53f84745, "nfnetlink_subsys_register" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0xae865e4e, "netlink_ack" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x20548812, "register_pernet_subsys" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xcafd02ec, "nf_unregister_sockopt" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nfnetlink");

