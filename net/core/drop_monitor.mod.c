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
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x37a0cba, "kfree" },
	{ 0xe065f55b, "consume_skb" },
	{ 0xe37056dc, "pv_ops" },
	{ 0xd4ec10e6, "BUG_func" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xee111e49, "__nla_reserve_nohdr" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x1f4733b3, "__alloc_skb" },
	{ 0xc61ff876, "genlmsg_put" },
	{ 0x4dc8c704, "nla_reserve" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xa542eb90, "skb_clone" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0xe5590ebd, "init_net" },
	{ 0xbc431e3c, "netlink_broadcast_filtered" },
	{ 0x9cd1e98e, "__tracepoint_napi_poll" },
	{ 0x4dec57b4, "tracepoint_probe_unregister" },
	{ 0xfc6f6d38, "__tracepoint_kfree_skb" },
	{ 0x909cbb83, "tracepoint_srcu" },
	{ 0xd5a61a34, "synchronize_srcu" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x7f1fd79f, "module_put" },
	{ 0x36cd5f26, "nla_put" },
	{ 0xe8255b35, "netlink_unicast" },
	{ 0xd6e5a44c, "skb_trim" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x754d539c, "strlen" },
	{ 0x6775c90f, "skb_push" },
	{ 0x3f178e25, "nla_put_64bit" },
	{ 0xe169346b, "drop_reasons_by_subsys" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd6625cfb, "skb_put" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0x87400f82, "skb_pull" },
	{ 0xee56800b, "__tracepoint_devlink_trap_report" },
	{ 0x1f7fdb27, "try_module_get" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xeae57df2, "tracepoint_probe_register" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x122c3a7e, "_printk" },
	{ 0x3facf125, "genl_register_family" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x67041673, "genl_unregister_family" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x5a921311, "strncmp" },
	{ 0xa916b694, "strnlen" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x24d273d1, "add_timer" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

