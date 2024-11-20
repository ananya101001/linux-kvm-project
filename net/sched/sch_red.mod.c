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
	{ 0xd36dc10c, "get_random_u32" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa965ca81, "reciprocal_value" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x4efaf33e, "noop_qdisc" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xfc421e79, "gnet_stats_add_queue" },
	{ 0x165d5a4a, "qdisc_tree_reduce_backlog" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x56d7d316, "qdisc_offload_graft_helper" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3ae74f69, "bfifo_qdisc_ops" },
	{ 0xbfab7505, "fifo_create_dflt" },
	{ 0xb2d37e5e, "qdisc_hash_add" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x950ca170, "tcf_qevent_validate_change" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc687a7f6, "tcf_qevent_init" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x799b7b46, "register_qdisc" },
	{ 0x7290e20e, "gnet_stats_copy_app" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x5ad11a13, "qdisc_reset" },
	{ 0x55fae9ab, "unregister_qdisc" },
	{ 0xfffbcf0f, "qdisc_offload_dump_helper" },
	{ 0x36cd5f26, "nla_put" },
	{ 0x2ea5dfab, "tcf_qevent_dump" },
	{ 0xd6e5a44c, "skb_trim" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0x1301170e, "tcf_qevent_destroy" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0x85fddb68, "qdisc_put" },
	{ 0xfd50a58d, "tcf_qevent_handle" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

