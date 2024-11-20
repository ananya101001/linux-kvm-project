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
	{ 0xe8a6ebf2, "tcf_idrinfo_destroy" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc9a22b07, "tcf_action_update_stats" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x6d6fec1f, "ktime_mono_to_any" },
	{ 0x4a666d56, "hrtimer_cancel" },
	{ 0x1cdbff59, "tcf_unregister_action" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x36cd5f26, "nla_put" },
	{ 0x3f178e25, "nla_put_64bit" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xd6e5a44c, "skb_trim" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xe75b471f, "tcf_idr_check_alloc" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xa127a41e, "tcf_action_check_ctrlact" },
	{ 0x48879f20, "hrtimer_init" },
	{ 0xcd3f56c3, "tcf_action_set_ctrlact" },
	{ 0xd955afa6, "hrtimer_start_range_ns" },
	{ 0x2c3cd1d0, "tcf_chain_put_by_act" },
	{ 0x1daa7ae2, "tcf_idr_create_from_flags" },
	{ 0x571d3614, "tcf_idr_release" },
	{ 0xc03f2158, "tcf_idr_cleanup" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc15c8cd9, "tcf_register_action" },
	{ 0x37a0cba, "kfree" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

