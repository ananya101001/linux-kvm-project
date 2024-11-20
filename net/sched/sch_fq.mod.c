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
	{ 0x36cd5f26, "nla_put" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x9207278f, "__kmem_cache_create_args" },
	{ 0x799b7b46, "register_qdisc" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x56edfae8, "kmem_cache_free_bulk" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xc8817ac9, "kmem_cache_alloc_noprof" },
	{ 0xe5497da, "__skb_get_hash_net" },
	{ 0x532c04c0, "qdisc_watchdog_schedule_range_ns" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x7290e20e, "gnet_stats_copy_app" },
	{ 0x56470118, "__warn_printk" },
	{ 0x31f2a14c, "__kvmalloc_node_noprof" },
	{ 0xfb578fc5, "memset" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x165d5a4a, "qdisc_tree_reduce_backlog" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x122c3a7e, "_printk" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x64bada6, "sch_default_prio2band" },
	{ 0x46a85c08, "qdisc_watchdog_init_clockid" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xece784c2, "rb_first" },
	{ 0xca9360b5, "rb_next" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xe0f1390c, "rtnl_kfree_skbs" },
	{ 0x55fae9ab, "unregister_qdisc" },
	{ 0x6c90184e, "kmem_cache_destroy" },
	{ 0xb609162e, "kmem_cache_free" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xc5eb9e1b, "qdisc_watchdog_cancel" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

