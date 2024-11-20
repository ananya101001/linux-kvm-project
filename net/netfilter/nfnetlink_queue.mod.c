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
	{ 0x7647e788, "ip_route_me_harder" },
	{ 0x377214d3, "seq_printf" },
	{ 0xd7ea7094, "nf_unregister_queue_handler" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xafd744c6, "__x86_indirect_thunk_rbp" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x7f1fd79f, "module_put" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xab3fc466, "remove_proc_entry" },
	{ 0x861b6aec, "proc_create_net_data" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x391df80a, "netstamp_needed_key" },
	{ 0x39af3d34, "nfnl_ct_hook" },
	{ 0x1f4733b3, "__alloc_skb" },
	{ 0xb653c55f, "skb_tx_error" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x7ef38e38, "__nlmsg_put" },
	{ 0xa5abb60c, "__nla_reserve" },
	{ 0x36cd5f26, "nla_put" },
	{ 0xd6625cfb, "skb_put" },
	{ 0xf78d3b99, "skb_zerocopy" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xed61f6b3, "security_release_secctx" },
	{ 0xfa31d3bc, "skb_zerocopy_headlen" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x7919d80, "init_user_ns" },
	{ 0xc0b8681e, "from_kuid_munged" },
	{ 0x9102cff1, "from_kgid_munged" },
	{ 0xaa866b39, "skb_checksum_help" },
	{ 0xd4be4ee6, "nfnetlink_unicast" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xf44d53da, "security_secid_to_secctx" },
	{ 0x47c20f8a, "refcount_dec_not_one" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0x22a3667d, "skb_crc32c_csum_help" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x1f7fdb27, "try_module_get" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0x5320317, "__skb_gso_segment" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x54088fb9, "nf_queue_entry_get_refs" },
	{ 0xb8efc77a, "skb_ensure_writable" },
	{ 0x69acdf38, "memcpy" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x42ea33ee, "skb_copy_expand" },
	{ 0x69da51b6, "___pskb_trim" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x20548812, "register_pernet_subsys" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0x53f84745, "nfnetlink_subsys_register" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xf5b87775, "nf_register_queue_handler" },
	{ 0x122c3a7e, "_printk" },
	{ 0xa84b4980, "nfnetlink_subsys_unregister" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0x279ed4c, "unregister_pernet_subsys" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0xea551a1, "nf_queue_entry_free" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x81edf8b2, "nf_ct_hook" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x3d15a3ab, "nf_queue" },
	{ 0x135fbb65, "nf_ipv6_ops" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nfnetlink");

