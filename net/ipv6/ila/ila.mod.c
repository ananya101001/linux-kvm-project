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
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe8fbf4fa, "__alloc_bucket_spinlocks" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x380ce666, "nf_register_net_hooks" },
	{ 0x496e68b4, "ip6_route_output_flags" },
	{ 0x1f4733b3, "__alloc_skb" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0xe8255b35, "netlink_unicast" },
	{ 0x8162c74, "free_bucket_spinlocks" },
	{ 0x2cb8e6e0, "dst_cache_get" },
	{ 0x36cd5f26, "nla_put" },
	{ 0x9a5dce5c, "rhashtable_walk_start_check" },
	{ 0x7d511f68, "nf_unregister_net_hooks" },
	{ 0x86512576, "unregister_pernet_device" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x9cd7551a, "rhashtable_walk_stop" },
	{ 0x5d2aa5fb, "rhashtable_walk_peek" },
	{ 0x7f6cee89, "rhashtable_free_and_destroy" },
	{ 0xb202f0d7, "rht_bucket_nested_insert" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x64f4c46e, "__pskb_pull_tail" },
	{ 0xd6e5a44c, "skb_trim" },
	{ 0xaa14b530, "lwtunnel_state_alloc" },
	{ 0xe37056dc, "pv_ops" },
	{ 0xe0313d71, "rhashtable_insert_slow" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x28839c12, "rhashtable_init_noprof" },
	{ 0x854562e6, "dst_cache_set_ip6" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xf04a650c, "dst_release" },
	{ 0x54651f9b, "rhashtable_walk_next" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x67041673, "genl_unregister_family" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xd075fb82, "lwtunnel_encap_add_ops" },
	{ 0x3facf125, "genl_register_family" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0xf188a662, "rhashtable_walk_exit" },
	{ 0xa47c4028, "register_pernet_device" },
	{ 0x3d51190f, "lwtunnel_encap_del_ops" },
	{ 0xd4ec10e6, "BUG_func" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x453ca149, "__do_once_done" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0x28bc0ec9, "xfrm_lookup" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xd0ba7f1e, "ip_output" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3f178e25, "nla_put_64bit" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x51b5fa3d, "inet_proto_csum_replace_by_diff" },
	{ 0xc61ff876, "genlmsg_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xb3a71347, "ip6_output" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0xe5ce1a56, "rhashtable_walk_enter" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

