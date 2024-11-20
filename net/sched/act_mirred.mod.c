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
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x36cd5f26, "nla_put" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0x3f178e25, "nla_put_64bit" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xd6e5a44c, "skb_trim" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x56470118, "__warn_printk" },
	{ 0x1cdbff59, "tcf_unregister_action" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xe75b471f, "tcf_idr_check_alloc" },
	{ 0x571d3614, "tcf_idr_release" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xc03f2158, "tcf_idr_cleanup" },
	{ 0x1daa7ae2, "tcf_idr_create_from_flags" },
	{ 0xa127a41e, "tcf_action_check_ctrlact" },
	{ 0xcd3f56c3, "tcf_action_set_ctrlact" },
	{ 0x2c3cd1d0, "tcf_chain_put_by_act" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x19e2cc40, "dev_get_by_index" },
	{ 0xa542eb90, "skb_clone" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x11729181, "skb_pull_rcsum" },
	{ 0x6335dfe9, "netif_rx" },
	{ 0x6775c90f, "skb_push" },
	{ 0x63e75f0f, "tcf_dev_queue_xmit" },
	{ 0x9d9392c0, "netif_receive_skb" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xf04a650c, "dst_release" },
	{ 0x4c6f0b83, "tcf_block_lookup" },
	{ 0x8fa25c24, "xa_find" },
	{ 0xdf36914b, "xa_find_after" },
	{ 0x349cba85, "strchr" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x523d13e7, "__dev_queue_xmit" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x122c3a7e, "_printk" },
	{ 0xc15c8cd9, "tcf_register_action" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xe8a6ebf2, "tcf_idrinfo_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc9a22b07, "tcf_action_update_stats" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

