#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xfff1f5e6, "fib_nl_newrule" },
	{ 0xecf79e67, "fib_nl_delrule" },
	{ 0x91e48d88, "pskb_expand_head" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x6775c90f, "skb_push" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0xfe881b26, "dev_queue_xmit_nit" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x87400f82, "skb_pull" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0xd2f4323c, "netdev_lower_get_next" },
	{ 0x82879e15, "unregister_netdevice_queue" },
	{ 0x88287630, "register_netdevice" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xc8827b75, "sysctl_vals" },
	{ 0x3eca0c01, "proc_dointvec_minmax" },
	{ 0xfa130545, "nd_tbl" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2d9c8262, "__neigh_create" },
	{ 0xd83898d5, "nf_hooks_needed" },
	{ 0x1d064d06, "nf_hook_slow" },
	{ 0xb8daf72a, "ip6_dst_lookup_flow" },
	{ 0x64f4c46e, "__pskb_pull_tail" },
	{ 0x32cd197c, "ip_route_output_flow" },
	{ 0xe4ab9d56, "inet_select_addr" },
	{ 0x76b64028, "arp_tbl" },
	{ 0x9753b5a3, "skb_expand_head" },
	{ 0x396a1105, "ipv6_stub" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0x33338211, "rcuref_get_slowpath" },
	{ 0xb9ffdc54, "eth_mac_addr" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x20548812, "register_pernet_subsys" },
	{ 0x5f71c304, "l3mdev_table_lookup_register" },
	{ 0xc217dd22, "rtnl_link_register" },
	{ 0x83e1cdbe, "l3mdev_table_lookup_unregister" },
	{ 0x279ed4c, "unregister_pernet_subsys" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x36cd5f26, "nla_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xbabd7d63, "dev_change_flags" },
	{ 0x113ed675, "netdev_err" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0x260f307a, "ip6_pol_route" },
	{ 0xb3a71347, "ip6_output" },
	{ 0xd0ba7f1e, "ip_output" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x1f415566, "eth_type_trans" },
	{ 0x3727f74a, "__netif_rx" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xf04a650c, "dst_release" },
	{ 0x523d13e7, "__dev_queue_xmit" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc15d5e03, "ether_setup" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x777137ac, "dev_addr_mod" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x5ac8c04c, "unregister_net_sysctl_table" },
	{ 0x37a0cba, "kfree" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xa4f84056, "register_net_sysctl_sz" },
	{ 0x79b6649b, "netdev_master_upper_dev_get" },
	{ 0x6551c12f, "netdev_upper_dev_unlink" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xd1c27b23, "netdev_master_upper_dev_link" },
	{ 0x295631a6, "fib_new_table" },
	{ 0x12843c47, "rt_dst_alloc" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0xc1132d0b, "fib6_new_table" },
	{ 0xf0808837, "ip6_dst_alloc" },
	{ 0x1f4733b3, "__alloc_skb" },
	{ 0x7ef38e38, "__nlmsg_put" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9A3765772D03341942C05B6");
