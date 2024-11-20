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

KSYMTAB_FUNC(mpls_output_possible, "_gpl", "");
KSYMTAB_FUNC(mpls_dev_mtu, "_gpl", "");
KSYMTAB_FUNC(mpls_pkt_too_big, "_gpl", "");
KSYMTAB_FUNC(mpls_stats_inc_outucastpkts, "_gpl", "");
KSYMTAB_FUNC(nla_put_labels, "_gpl", "");
KSYMTAB_FUNC(nla_get_labels, "_gpl", "");

SYMBOL_CRC(mpls_output_possible, 0xf2e59605, "_gpl");
SYMBOL_CRC(mpls_dev_mtu, 0xabd7402a, "_gpl");
SYMBOL_CRC(mpls_pkt_too_big, 0x1fe932c6, "_gpl");
SYMBOL_CRC(mpls_stats_inc_outucastpkts, 0x3be88036, "_gpl");
SYMBOL_CRC(nla_put_labels, 0xfef4fa84, "_gpl");
SYMBOL_CRC(nla_get_labels, 0xde3cca7e, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe3354a93, "rtnl_af_register" },
	{ 0x1f4733b3, "__alloc_skb" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x5a1e5efb, "rtnl_set_sk_err" },
	{ 0xf8873f4c, "rtnl_unicast" },
	{ 0xba5ca25f, "nla_reserve_64bit" },
	{ 0x2c3b2f41, "ip_valid_fib_dump_req" },
	{ 0x77cb69cc, "__dev_get_by_index" },
	{ 0x396a1105, "ipv6_stub" },
	{ 0x87400f82, "skb_pull" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x63a22209, "nla_reserve_nohdr" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x53d021b1, "rtnl_af_unregister" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0xb64d2547, "dev_remove_pack" },
	{ 0x19e2cc40, "dev_get_by_index" },
	{ 0x6775c90f, "skb_push" },
	{ 0x36cd5f26, "nla_put" },
	{ 0xcd4aed9d, "__rtnl_register_many" },
	{ 0xcd279169, "nla_find" },
	{ 0x9fd7c553, "__skb_warn_lro_forwarding" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x434ac20f, "ip_tunnel_encap_del_ops" },
	{ 0x279ed4c, "unregister_pernet_subsys" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x64f4c46e, "__pskb_pull_tail" },
	{ 0xd6e5a44c, "skb_trim" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0xc25d94c1, "pcpu_alloc_noprof" },
	{ 0x8fa25c24, "xa_find" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x857c1f58, "rtnl_notify" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xa542eb90, "skb_clone" },
	{ 0xf04a650c, "dst_release" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xf943375f, "proc_dointvec" },
	{ 0x5ac8c04c, "unregister_net_sysctl_table" },
	{ 0x687d062a, "dev_get_flags" },
	{ 0x49585b97, "__rtnl_unregister_many" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x31f2a14c, "__kvmalloc_node_noprof" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x3eca0c01, "proc_dointvec_minmax" },
	{ 0x92e772cf, "netlink_strict_get_check" },
	{ 0x3255d536, "ip_tunnel_encap_add_ops" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x7ef38e38, "__nlmsg_put" },
	{ 0xdc08523f, "skb_gso_validate_network_len" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xe065f55b, "consume_skb" },
	{ 0x3cab8e4a, "dev_add_pack" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4dc8c704, "nla_reserve" },
	{ 0x579e0bf5, "rtnl_unregister_all" },
	{ 0x2f339795, "neigh_xmit" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x32cd197c, "ip_route_output_flow" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x91e48d88, "pskb_expand_head" },
	{ 0x20548812, "register_pernet_subsys" },
	{ 0xa4f84056, "register_net_sysctl_sz" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xc8827b75, "sysctl_vals" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "ip_tunnel");

