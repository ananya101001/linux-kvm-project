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

KSYMTAB_FUNC(taprio_offload_get, "_gpl", "");
KSYMTAB_FUNC(taprio_offload_free, "_gpl", "");

SYMBOL_CRC(taprio_offload_get, 0xa1b21d70, "_gpl");
SYMBOL_CRC(taprio_offload_free, 0xe17db4ea, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x28aa6a67, "call_rcu" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x87a20724, "__netif_schedule" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0x92f97bbf, "netif_skb_features" },
	{ 0x5320317, "__skb_gso_segment" },
	{ 0xe065f55b, "consume_skb" },
	{ 0x165d5a4a, "qdisc_tree_reduce_backlog" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3ed78732, "netdev_reset_tc" },
	{ 0x2f4880df, "static_key_slow_dec" },
	{ 0x3f178e25, "nla_put_64bit" },
	{ 0x36cd5f26, "nla_put" },
	{ 0xd6e5a44c, "skb_trim" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x347b0b56, "mqprio_validate_qopt" },
	{ 0xd0474a95, "netdev_set_num_tc" },
	{ 0x8901b2b8, "netdev_set_tc_queue" },
	{ 0x430baca2, "qdisc_offload_query_caps" },
	{ 0x8f717072, "mqprio_qopt_reconstruct" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xa59d46b5, "mqprio_fp_to_offload" },
	{ 0x3c96fa2f, "hrtimer_active" },
	{ 0x48879f20, "hrtimer_init" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd955afa6, "hrtimer_start_range_ns" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0x5b605494, "pfifo_qdisc_ops" },
	{ 0x45b1b8b8, "qdisc_create_dflt" },
	{ 0xb2d37e5e, "qdisc_hash_add" },
	{ 0x2c834418, "static_key_slow_inc" },
	{ 0x94eee8bc, "gnet_stats_copy_basic" },
	{ 0x49efda31, "gnet_stats_copy_queue" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x799b7b46, "register_qdisc" },
	{ 0x70a09e5e, "__ethtool_get_link_ksettings" },
	{ 0x5664c757, "__dynamic_netdev_dbg" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x6d6fec1f, "ktime_mono_to_any" },
	{ 0x4a666d56, "hrtimer_cancel" },
	{ 0x5ad11a13, "qdisc_reset" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x56470118, "__warn_printk" },
	{ 0x55fae9ab, "unregister_qdisc" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x42b1c173, "ethtool_dev_mm_supported" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x37a0cba, "kfree" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x131e6bcb, "dev_deactivate" },
	{ 0x42f724f1, "dev_activate" },
	{ 0x8f39c0ce, "dev_graft_qdisc" },
	{ 0x85fddb68, "qdisc_put" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "sch_mqprio_lib");

