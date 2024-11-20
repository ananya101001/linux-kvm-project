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
	{ 0x92104429, "__put_net" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x7ef38e38, "__nlmsg_put" },
	{ 0xd4be4ee6, "nfnetlink_unicast" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0x56470118, "__warn_printk" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xab3fc466, "remove_proc_entry" },
	{ 0xe7b15685, "nf_log_unset" },
	{ 0x861b6aec, "proc_create_net_data" },
	{ 0xc1f0e49d, "make_kuid" },
	{ 0xa3951d2b, "make_kgid" },
	{ 0x43c2d3b, "proc_set_user" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xee8e2d1d, "nf_log_unbind_pf" },
	{ 0x39af3d34, "nfnl_ct_hook" },
	{ 0xd019ead8, "nf_log_bind_pf" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x1f7fdb27, "try_module_get" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x754d539c, "strlen" },
	{ 0x36cd5f26, "nla_put" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xd6625cfb, "skb_put" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0x1f4733b3, "__alloc_skb" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x24d273d1, "add_timer" },
	{ 0x391df80a, "netstamp_needed_key" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xc0b8681e, "from_kuid_munged" },
	{ 0x9102cff1, "from_kgid_munged" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x20548812, "register_pernet_subsys" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0x53f84745, "nfnetlink_subsys_register" },
	{ 0x191ca54a, "nf_log_register" },
	{ 0x122c3a7e, "_printk" },
	{ 0xa84b4980, "nfnetlink_subsys_unregister" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0x279ed4c, "unregister_pernet_subsys" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x377214d3, "seq_printf" },
	{ 0xbd5a4c72, "nf_log_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x7f1fd79f, "module_put" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nfnetlink");

